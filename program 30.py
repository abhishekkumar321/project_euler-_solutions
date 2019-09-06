count = 0
final_sum = 0
for i in range(10, 999999):
    num = str(i)
    sum = 0
    for j in range(len(num)):
        sum += pow(int(num[j]), 5)


    if sum == int(num):
        final_sum += sum



print(str(final_sum))
