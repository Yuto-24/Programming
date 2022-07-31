#!/bin/bash

function usage {
	cat << EOM
Usage: $(basename "$0") [OPTION]...
-h          Display help
-a VALUE    A explanation for arg called a
-b VALUE    A explanation for arg called b
-c VALUE    A explanation for arg called c
-d VALUE    A explanation for arg called d
EOM
    exit 2
}

# 引数別の処理定義
while getopts ":a:b:c:d:h" optKey; do
    case "$optKey" in
        a)
            g++ -W -w A.cpp
        ;;
        b)
            echo "-b = ${OPTARG}"
        ;;
        c)
            echo "-c = ${OPTARG}"
        ;;
        d)
            echo "-d = ${OPTARG}"
        ;;
        '-h'|'--help'|* )
            usage
        ;;
    esac
done
g++ -W -w A.cpp
