#Lowest Number and Position

def get_smaller (array, size)
  smaller = array[0]
  for i in 0...size
      if array[i] < smaller
          smaller = array[i]
          position = i + 0
      end       
  end
  return smaller, position
end

def start_array(array, size)
  input_f_user = gets
  input = input_f_user.split(" ")
  for i in 0...size
      array[i] = input[i].to_i
  end
end

array = Array.new()
size = gets.chomp.to_i
start_array(array, size)
result = get_smaller(array, size)
puts "Menor valor: #{result[0]}"
if not result[1].to_s == ''
  puts "Posicao: #{result[1]}"
else
  puts 'Posicao: 0'
end
