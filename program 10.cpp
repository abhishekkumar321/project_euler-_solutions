//Name: Abhishek Kumr
//registration number:1941012170
//program 10: Summation of primes

#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
		long long num,sum=0;
		cin>>num;
		for(long long i=2;i<=num;i++)
		{
			int flag=0;
			for(long long j=2;j<=sqrt(i);j++)
			if(i%j==0)
			{flag=1;break;}
			if(flag==0)
			sum=sum+i;
			
			
		}
		
cout<<sum; 	
return 0;
}
	
    