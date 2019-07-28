#include<iostream>
using namespace std;
long long ispalindrome( long long num )
{
	long long original_num,revnum=0,remainder;
	original_num=num;
	while(num!=0)
	{
		remainder=num%10;
		revnum=revnum*10+ remainder;
		num/=10;
	}
	return revnum;
}


int main()
{
	long long pro,max=0;
	for(long long i=999;i>=100;i--)
	{
		for(long long j=999;j>=100;j--)
		{pro=i*j;
		if(pro>max && ispalindrome(pro)==pro)
		max=pro;
		}
	} cout<<max; return 0;
}
    