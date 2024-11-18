#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;

    int Digit = num/1000;
    if (Digit % 2 == 0)
    {
        cout<<"EVEN"<<endl;
    }
    else
    {
        cout<<"ODD"<<endl;
    }
    
       
}