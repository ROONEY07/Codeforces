#include<bits/stdc++.h>
using namespace std;
int sorted()
{
        int n;
        cin>>n;

        // vector
        vector <int> v;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i==0)
            {
               v.push_back(i);
               
               // to ignore the repetation
               if (i!=n/i)
               {
                   v.push_back(n/i);
               }
               
            }
            
        }

        sort(v.begin(), v.end());
        for (auto s:v)
        {
            cout<<s<<endl;
        }
        
}
int main()
{
    
       // sort the function
       sorted();
}