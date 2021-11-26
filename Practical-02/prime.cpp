#include<iostream>
#include<math.h>
using namespace std;
int isPrime(int a)
{
    for(int i=2;i<=sqrt(a);i++)
        if(a%i==0)
            return 0;
    return 1;
}

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(isPrime(a))
        cout<<"Number is prime.\n";
    else
        cout<<"Number is not prime.\n";
    return 0;
}
        
