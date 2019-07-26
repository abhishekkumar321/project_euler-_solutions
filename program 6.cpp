//Name: Abhishek Kumr
//registration number:1941012170
//program 6:Sum square difference
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int N,sum,sum_square,square_then_sum, difference;
	cin>>N;
	sum=(N*(N+1))/2;
	sum_square=pow(sum,2);
	square_then_sum=( sum*(2*N +1))/3;
	difference=sum_square-square_then_sum;
	cout<<difference;
	return 0;
} 