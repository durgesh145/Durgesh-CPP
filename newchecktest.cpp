#include<iostream>
using namespace std;
int main()
{
    int n,rem,reverse=0;
    cout<<"Enter a number";
    cin>>n;
    while (n!=0)
    { 
        rem =n%10;
        reverse = reverse*10+rem;
        n/=10;
    }
    
    cout<<"Reveerse number"<<reverse;
 return 0;

}