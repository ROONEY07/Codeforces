#include<bits/stdc++.h>
using namespace std;
int main()
{
   int line, star;
   cin>>line;
   star = 1;
   for (int i = 1; i <=line; i++)
   {
       for (int j = 1; j <=star; j++)
       { 
           cout<<"*";          
       }
       cout<<endl;
       star++;
       
   }
      
}