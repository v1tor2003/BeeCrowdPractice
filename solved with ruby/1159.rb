# Sum of Consecutive Even Numbers

def func_to_sum x
  sum = 0
  n = 5
  control = 0
  i = x
  while control < n
      if i % 2 == 0
          sum += i 
          control += 1
      end
      i += 1
  end
  return sum
end
while true
  x = gets.chomp.to_i
  if x == 0
      break
  end
  result = func_to_sum(x)
  puts result
end