//Name: Abhishek Kumr
//registration number:1941012170
//program 4: Largest palindrome product

#include<iostream>
using namespace std;
void ispalindrome( long long num )
{
	long long original_num,revnum=0,remainder;
	original_num=num;
	while(num!=0)
	{
		remainder=num%10;
		revnum=revnum*10+ remainder;
		num/=10;
	}
	if(revnum==original_num)
	{cout<<revnum<<endl;
	exit(0);}
}


int main()
{
	long long pro;
	for(long long i=99;i>=10;i--)
	{
		for(long long j=99;j>=10;j--)
		{pro=i*j;
		ispalindrome(pro);
		}
	} return 0;
}
