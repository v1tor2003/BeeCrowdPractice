# Fibonacci Array

def calc_fib_number (x)
  result = (1/Math.sqrt(5)) * ((((1 + Math.sqrt(5))/2)**x) - (((1 - Math.sqrt(5))/2)**x))
end

cases = gets.chomp.to_i
cases.times do
  x = gets.chomp.to_i
  result = calc_fib_number(x)
  puts "Fib(#{x}) = #{result.round(0)}"
end