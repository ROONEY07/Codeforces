#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n;
    //    cout<<"Enter the number that create fibonacci series: ";
       cin>>n;

       if (n<=0)
       {
          cout<<"Invalid input. Enter positive int: ";
          return 0;
       }

       int first = 0, secound = 1;
        
      if (n==1)
      {
        cout<<first<<" ";
        return 0;
      }
      

       cout<<first<<" "<<secound<<" ";

       for (int i = 2; i < n; i++)
       {
            int nextTerm = first + secound;
            cout<<nextTerm<<" ";
            first = secound;
            secound = nextTerm;
       }
       
      cout<<endl;
}