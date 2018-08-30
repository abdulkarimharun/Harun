#include<iostream>
 
using namespace std;
 
int main()
{
    int i,num;
    cout<<"Enter any num: ";
    cin>>num;
    if(num==1)
    {
        cout<<"Smallest prime num is 2";
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
 
