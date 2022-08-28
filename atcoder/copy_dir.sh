#!/bin/bash
dateStr=`date +%Y-%m-%d`
# echo $dateStr
cp -r Template ABC266_$dateStr

usage(){
	cat << EOM
Usage: $(basename $0) [OPTION]...
	-h          =>  Display help
	-[A-H] num  =>  VALUE
		compile [A-H].cpp | ./a.out < input num > output
		needed file name and input number of test case
EOM
    exit 1
}

str=""

while getopts B:R:G:H: opt
do
    case $opt in
        B)
            str="ABC$OPTARG"_"$dateStr"/
        ;;
        R)
            str="ARC$OPTARG"_"$dateStr"/
        ;;
        G)
            str="AGC$OPTARG"_"$dateStr"/
        ;;
        H)
            str="AHC$OPTARG"_"$dateStr"/
        ;;
        \? )  # ?: オプションがgetoptsの第一引数に含まれていない場合
            usage
        ;;
        '-h'|'--help'|* )
            usage
        ;;
        # * ) usage ;;
    esac
done

echo "mkdir $str"
cp -r Template/ $str
rm -r $str/Template