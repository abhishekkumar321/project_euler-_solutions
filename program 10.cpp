//Name: Abhishek Kumar
//registration number:1941012170
//program 10: Summation of primes

#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
		long long n,sum=0;
		cin>>n;
		for(long long i=2;i<=n;i++)
		{
			if(i%2==!0 || i==2)
			{
			int flag=0;
			for(long long j=3;j<=sqrt(i);j=j+2)
			if(i%j==0)
			{flag=1;break;}
			if(flag==0)
			sum=sum+i;
			}
			
		}
		
cout<<sum; 	
return 0;
}
	
    

	
    
	
    
