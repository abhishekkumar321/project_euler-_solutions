//Name: Abhishek Kumr
//registration number:1941012170
//program 5:Smallest Multiple

#include<iostream>
#include<cmath>
using namespace std;

	long long gcdfinder(long long a,long long b)
	{
	
		while(a!=0)
		{
			long long c=a;
			a=b%a;
			b=c;
		}return b;
		
	}
	
	int main()
	{
		long long res=1;
		for(int i=2;i<=20;i++)
		res=(res*i)/gcdfinder(res,i);
		cout<<res;
		return 0;
		
	}
	
    
