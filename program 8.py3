//Name: Abhishek Kumr
//registration number:1941012170
//program 8:Largest product in a series


num= input()
sum=0
for i in range(1,1001):
	sum=sum+(i**i)
final= str(sum)[-10:]
print(final)

	
    