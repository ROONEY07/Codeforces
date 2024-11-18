#include<bits/stdc++.h>
using namespace std;
bool islucky(int num)
{
      while (num!=0)
      {
            int digit = num % 10;
            if (digit!=4 && digit!=7)
            {
                return false;
            }
            
           num = num/10;
      }
      
  return true;
      
}
int main()
{
   int a,b;
   cin>>a>>b;
   bool foundluky = false;
   for (int i = a; i <=b; i++)
   {
       if (islucky(i))
       {
          cout<<i<<" ";
          foundluky = true;
       }
       
        
   }

   if (!foundluky)
   {
      cout<<"-1";
   }
   
      
}