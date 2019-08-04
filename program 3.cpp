
//Name: Abhishek Kumr
//registration number:1941012170
//program 3: Largest prime factor

#include<iostream>
#include<cmath>

using namespace std;
 
int main()
{
		unsigned long long factor,num;
		cin>>num;
		
		for(unsigned long long i=2;i<=num;i++)
		{
			if(i%2==!0)
				{
					int flag=0;
					for(unsigned  long long j=2;j*j<=i;j++)
					if(i%j==0)
					{flag=1;break;}
					if(flag==0 && num%i==0)
					{factor=i;num=num/i;}
				}
			
			
			
		}
		
cout<<factor; 	
return 0;
}
	
    
    
