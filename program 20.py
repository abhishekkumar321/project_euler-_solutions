num = input()
product = 1
for i in range(1,int(num)):
    product = i*product
result_in_string = str(product)
length_of_res = len(result_in_string)
addition = 0
for j in range(0,length_of_res):
    addition += int(result_in_string[j])
print(addition)