# Array Fill II

def fill_array array, number
    control = 0
    for i in 0...1000
        array[i] = control
        puts "N[#{i}] = #{control}"
        control += 1
        if control == number
            control = 0
        end
    end
end

array = Array.new()
number = gets.chomp.to_i
fill_array(array, number)

