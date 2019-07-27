//Name: Abhishek Kumr
//registration number:1941012170
//program1:Multiples of 3 and 5

#include<iostream>
#include<cstring>
using namespace std;

int main()
{	
 	int N,sum=0;
 	cin>>N;//number below which sum of multiple of 3 or 5 ,we have to find
 	for(int i=1;i<N;i++)
 	{
 		if(i%3==0 || i%5==0)
 		{
 			sum=sum+i;
 		}
 	}
 	cout<<sum;
 	return 0;
}