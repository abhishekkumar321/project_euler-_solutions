//Name: Abhishek Kumr
//registration number:1941012170
//program 2: Even fibbonacci number 
#include<iostream>
using namespace std;
int main() 
{
	int N,T1=0,T2=1,show=0,add=0;//"add" for final result,T1 and T2 for terms 
	cin>>N;
	while(show<=N)
	{
		
		if(show %2==0)
		add=add+show;
		T1=T2;
		T2=show;show=T1+T2;
		
	}
	cout<<add;
	return 0;
}