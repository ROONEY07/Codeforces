#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a;
   cin>>a;
   char simple;
   cin>>simple;
   int b;
   cin>>b;

   if (simple=='>')
   {
      if (a > b)
      {
        cout<<"Right"<<endl;
      }
      else
      {
        cout<<"Wrong"<<endl;
      }
      
   }
   else if (simple == '<')
   {
       if (a < b)
      {
        cout<<"Right"<<endl;
      }
      else
      {
        cout<<"Wrong"<<endl;
      }
      
   }
   else if (simple=='=')
   {
      if (a == b)
      {
        cout<<"Right"<<endl;
      }
      else
      {
        cout<<"Wrong"<<endl;
      }
   }
   else
   {
      cout<<"Wrong"<<endl;
   }
   
   
   
      
}