# Prime Number

def isNPrime x
  for i in 2...x
      if x % i == 0
          return false
      end
  end
  return true
end

def print_result x
  result = isNPrime(x)
  if result
      puts "#{x} eh primo"
  else
      puts "#{x} nao eh primo"
  end
end

i =0
cases = gets.chomp.to_i
while i < cases 
  x = gets.chomp.to_i
  print_result(x)
  i += 1
end