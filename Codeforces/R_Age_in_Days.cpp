#include<bits/stdc++.h>
using namespace std;
int main()
{
    int days;
    cin>>days;

    int years, months, reminder;
    years = days/365;

    reminder = days % 365;
    months = reminder/30;
    reminder = reminder % 30;

    cout<<years<<" years"<<endl;
    cout<<months<<" months"<<endl;
    cout<<reminder<<" days"<<endl;
}