
//Name: Abhishek Kumar
//registration number:1941012170
//program 3: Largest prime factor


#include<iostream>
using namespace std;
int main()
{
    long long  num;
    cin>>num;
    long long n=2, max_fact;
    while(num!=0)
    {
        if(num % n!=0)
            ++n;
        else
        {
            max_fact = num;
            num = num / n;
            if(num == 1)
            {
            cout<<max_fact;
            break;
            }
        }
    }
    return 0;
}    
    
