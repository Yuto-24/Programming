g++ -W -w B.cpp
./a.out < test1.dat > output.dat
./a.out < test2.dat >> output.dat
./a.out < test3.dat >> output.dat
echo '#3
#0
#8' >> output.dat
