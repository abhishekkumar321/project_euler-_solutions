


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






