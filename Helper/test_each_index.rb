def calc(a)
    sum = 0
    a.each_index { |i| sum = sum + a[i] }
    puts(sum)
    return sum
end

a = [1, 3, 5, 7, 9]
calc(a)
