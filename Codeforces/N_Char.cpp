#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;

    if (x>='a' && x<='z')
    {
         char convert = x - 32;
         cout<<convert<<endl;
    }
    else if (x>='A' && x<='Z')
    {
        char convert = x + 32;
        cout<<convert<<endl;
    }
    
       
}