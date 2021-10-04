p [1..100].any? do |i|
	i > 99
end

sum = 0
[*1..100].map{ |i| i % 7 }.each do |i|
	p sum += i
	# puts sum
end
puts sum
# puts (1...1000).select{|i| i % 3 == 0 || i % 5 == 0}.sum
# array = (1...1000).select{|i| i % 3 == 0 || i % 5 == 0}
# puts array.sum
# p (1..5).map{|i| i * 3 }.select{|i| i % 2 == 0 }

# def func n
# 	puts n.to_s + "aiueo"
# end

# func 123
# sum = 0
# (1...1000).each do |i|
# 	if i % 3 == 0 || i % 5 == 0
# 		sum += i
# 	end
# 	# sum += i if (i % 3 == 0 || i % 5 == 0)
# end
# puts sum

# a =0
# n = 600851475143
# m = Math.sqrt (n).to_i
# (2..m).each do |i|
# 	if n % i == 0
# 		puts "n= #{n}, i= #{i}"
# 		while n % i == 0 do
# 			n = n / i
# 			puts "n= #{n}"
# 			a = i
# 		end
# 	end
# end
# puts "a= #{a}"
# puts a