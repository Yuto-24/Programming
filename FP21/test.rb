odd = [1, 3, 5]
even = [2, 4, 6]

odd.zip(even) do |x, y|
    puts x
    puts y
end
