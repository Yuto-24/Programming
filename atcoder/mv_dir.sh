find ./ -maxdepth 1 -name "ABC26*" -and -name "*_*" -type d -exec mv {} ./ABC260-269 \;
git commit -am "add file and move ABC26* to ABC260-269"
git push