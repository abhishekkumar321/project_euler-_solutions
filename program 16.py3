num = input("Enter any number : ")
product = 2**int(num)
pro_in_string=str(product)
sum=0
for i in range(len(pro_in_string)):
    sum = sum+ int(pro_in_string[i])
print(sum)
