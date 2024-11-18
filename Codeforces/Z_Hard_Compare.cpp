#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c;
    long long int b,d;
    cin>>a>>b>>c>>d;

    // long long int result1 = pow(a,b);
    // long long int result2 = pow(c,d);
    // For using pow , we got the result which is out of range.  that even out of (long long int range). for that we got runtime error or memory error

     
    /*
     # to reduce time complexity we can use

       Power Rule of Log
       Power Rule of log states that if the argument is raised to some power 
       then the solution of logarithmic expression is given by the power of the argument multiplied by the log value of the argument. 
       The expression can be given as:

       logx^a^b = b.logxa or
       log(a)^b = b.log(a)
       
       same as
       a^b and c^d

      
      // Compare a^b and c^d using logarithms
     // We compare b * log(a) with d * log(c)

    */

    double result1 = b*log(a);
    double result2 = d*log(c);

    // Precision: double typically offers about 15 to 17 decimal digits of precision, 
    // while float provides about 6 to 9 decimal digits. For large values of a and b, 
    // this increased precision can be crucial in avoiding significant errors in the calculations.
    // cout<<result1<<" "<<result2<<endl;
    if (result1 > result2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
       
}