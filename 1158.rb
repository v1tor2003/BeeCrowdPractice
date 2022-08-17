# Sum of Consecutive Odd Numbers III

def func_to_sum(x, y)
  x = x.to_i
  y = y.to_i
  sum = 0
  control = 0

  i = x
  while control < y
      if i % 2 == 1
          sum += i
          control += 1
      end
      i += 1
  end
  return sum
end

i = 0
n = gets.chomp.to_i
while i < n
  input_f_user = gets
  input = input_f_user.split(" ")
  x = input[0]
  y = input[1]
  result = func_to_sum(x, y)
  puts "#{result}"
  i += 1
end