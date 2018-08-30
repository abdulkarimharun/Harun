#include<iostream>
 
using namespace std;
 
int main()
{
    int i,num;
    cout<<"Enter any number: ";
    cin>>num;
    if(num==1)
    {
        cout<<"Smallest prime number is 2";
    }
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<"Not prime number";
            break;
        }
    }
    if(num==i)
    {
        cout<<"Yes, Number is Prime";
    }
    return 0;
}
 
