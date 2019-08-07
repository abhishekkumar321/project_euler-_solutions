#A googol (10100) is a massive number: one followed by one-hundred zeros; 100100 is
# almost unimaginably large: one followed by two-hundred zeros. Despite their size, 
# the sum of the digits in each number is only 1.
#Considering natural numbers of the form, ab, where a, b < 100, what is the maximum digital sum?


def digit_sum_finder(num) :
    addition = 0
    num_in_string = str(num)
    for k in range(len(num_in_string)):
        addition += int(num_in_string[k])
    return addition

maximum = 0
for i in range(2, 100):
    for j in range(2, 100):
        power = i**j
        added_digits = int(digit_sum_finder(power))
        if added_digits > maximum:
            maximum = added_digits
print(maximum)






