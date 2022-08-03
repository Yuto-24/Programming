g++ -W -w C_minsize.cpp
echo 'test 1: ' > output.dat
./a.out < test1.dat >> output.dat
echo 'test 2: ' >> output.dat
./a.out < test2.dat >> output.dat
echo 'test 3: ' >> output.dat
./a.out < test3.dat >> output.dat
echo 'test 4: ' >> output.dat
./a.out < test4.dat >> output.dat
echo '
#1
#0
#120
#30613
' >> output.dat
