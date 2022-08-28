#!/bin/bash

function usage {
	cat << EOM
Usage: $(basename $0) [OPTION]...
    -h          =>  Display help
    -[A-H] num  =>  VALUE
        compile [A-H].cpp | ./a.out < input num > output
		needed file name and input number of test case
EOM
    exit 1
}

str="${1:1:2}.cpp"

test(){
    # echo "./a.out < input[1-$num] > output"
    if [ $num -ge 1 ]; then
        echo "test 1" > output
        echo "./a.out < input1 >> output"
        ./a.out < input1 >> output
        echo "" >> output
    fi
    if [ $num -ge 2 ]; then
        echo "test 2" >> output
        echo "./a.out < input2 >> output"
        ./a.out < input2 >> output
        echo "" >> output
    fi
    if [ $num -ge 3 ]; then
        echo "test 3" >> output
        echo "./a.out < input3 >> output"
        ./a.out < input3 >> output
        echo "" >> output
    fi
    if [ $num -ge 4 ]; then
        echo "test 4" >> output
        echo "./a.out < input4 >> output"
        ./a.out < input4 >> output
    fi
    echo "finish"
}

compile(){
    echo "g++ -W -w $str"
    g++ -W -w $str
}

while getopts A:B:C:D:E:F:G:H:h opt
do
    case $opt in
        [A-Z] )
            compile;
            num=$OPTARG;
            # echo `値は $num です`;
        test $num;;
        \? )
        usage;;  # ?: オプションがgetoptsの第一引数に含まれていない場合
        '-h'|'--help'|* )
        usage;;  # h: ヘルプを表示
        # * ) usage ;;
    esac
done

shift $((OPTIND - 1))


# 比較演算子
# 数値1 -eq 数値2	数値1と数値2が等しければ真（=）
# 数値1 -ne 数値2	数値1と数値2が等しくなければ真（!=、<>）
# 数値1 -gt 数値2	数値1が数値2よりも大きければ真（>）
# 数値1 -ge 数値2	数値1が数値2以上であれば真（>=）
# 数値1 -lt 数値2	数値1が数値2よりも小さければ真（<）
# 数値1 -le 数値2	数値1が数値2以下であれば真（<=）
# https://www.pasonatech.co.jp/workstyle/column/detail.html?p=7450

# 引数
# https://shellscript.sunone.me/parameter.html
# 変数
# https://shellscript.sunone.me/variable.html
# getopt の ":"は値を必要とする引数に付ける