g++ B.cpp -W -w
echo "test1" > output
./a.out < input1.dat >> output
cat ans1.dat >> output
echo "test2" >> output
./a.out < input2.dat >> output
cat ans2.dat >> output
echo "test3" >> output
./a.out < input3.dat >> output
cat ans3.dat >> output
# echo "test4" >> output
# ./a.out < input4.dat >> output
# cat ans4.dat >> output
