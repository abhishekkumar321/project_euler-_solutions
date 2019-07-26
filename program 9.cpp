//Name: Abhishek Kumr
//registration number:1941012170
//program 9 :Special Pythagorean triplet
#include<iostream>
#include<cmath>
using namespace std;
long long result,sum,initial,final;
int main()
{
	for(int i=1;i<=1000;i++)
	{
		for(int j=2;j<=1000;j++)
		{
			for(int k=3;k<=1000;k++)
			{initial=pow(i,2)+pow(j,2);
			final=pow(k,2);
			sum=i+j+k;
			
				if(initial==final && sum==1000)
				 result=i*j*k;
				
			}
		}
	}cout<<result;
	return 0;
}