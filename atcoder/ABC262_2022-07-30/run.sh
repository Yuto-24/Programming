#!/bin/bash
function usage {
	cat << EOM
Usage: $(basename $0) [OPTION]...
-h            Display help
-[A-H] VALUE  compile [A-H].cpp
EOM
    exit 1
}

str="${1:1:2}.cpp"

test(){
    echo "./a.out < input[1-4] > output"
    echo "test 1" > output
    ./a.out < input1 >> output
    echo "" >> output
    echo "test 2" >> output
    ./a.out < input2 >> output
    echo "" >> output
    echo "test 3" >> output
    ./a.out < input3 >> output
    echo "" >> output
    echo "test 4" >> output
    ./a.out < input4 >> output
}

compile(){
    echo "g++ -W -w $str"
    test
    g++ -W -w $str
    echo ""
    echo "\`\`\`"
    cat ./output
    echo "\`\`\`"
    # echo "Done!"
}

# while getopts ":A:B:C:D:E:h" opt
while getopts ":ABCDEFHh" opt
do
    case $opt in
        [A-Z] ) compile ;;
        \? ) usage ;;  # ?: オプションがgetoptsの第一引数に含まれていない場合
        '-h'|'--help'|* ) usage ;;  # h: ヘルプを表示
        # * ) usage ;;
    esac
done

shift $((OPTIND - 1))