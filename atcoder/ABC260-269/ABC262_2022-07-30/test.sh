#! /bin/bash

function usage {
	cat << EOM
USAGE: $(basename "$0") [OPTION]...
-h          Display help
-a VALUE    A explanation for arg called a
-b VALUE    A explanation for arg called b
-c VALUE    A explanation for arg called c
-d VALUE    A explanation for arg called d
EOM
    exit 2
}

if ["$1" ] #1つ目の引数が指定されている？
then
    ptn="$1"
else
    usage #使用方法を表示
    exit
fi
if [ -n "$2" ] #2つ目の引数が指定されている？
then
    file="$2" #指定されていれば変数fileに保存
else
    file="*" #指定されていなかったら"*"（全てのファイル）を対象にする
fi
if [ -n "$3" ] #3つ目の引数が指定されている？
then
    dir="$3" #指定されていれば変数dirに保存
else
    dir="." #指定されていなかったらカレントディレクトリを対象にする
fi
