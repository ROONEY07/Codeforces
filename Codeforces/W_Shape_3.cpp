#include<bits/stdc++.h>
using namespace std;
int main()
{
   int line, star, space;
   cin>>line;

   star = 1;
   space = line-1;
   for (int i = 1; i <=line; i++)
   {
       for (int j = 1; j <=space; j++)
       { 
           cout<<" ";          
       }
       for (int j = 1; j <=star; j++)
       { 
           cout<<"*";          
       }
       cout<<endl;
       space--;
       star+=2;
       
   }
 
  star = 2*line-1;
  space = 0;
  for (int i = 1; i <=line; i++)
   {
       for (int j = 1; j <=space; j++)
       { 
           cout<<" ";          
       }
       for (int j = 1; j <=star; j++)
       { 
           cout<<"*";          
       }
       cout<<endl;
       star-=2;
       space++;
       
       
   }

}