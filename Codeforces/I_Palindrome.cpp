#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;

   int orginal = n;
   int rev = 0, digit;
   while (n!=0)
   {
       digit = n % 10;
       rev = rev*10 + digit;
       n = n / 10;
   }
   if (orginal == rev)
   {
      cout<<rev<<endl;
      cout<<"YES"<<endl;
   }
   else
   {
      cout<<rev<<endl;
      cout<<"NO"<<endl;
   }
   
   
      
}