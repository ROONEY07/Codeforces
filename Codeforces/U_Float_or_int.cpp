#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cin>>n;

    int intpart = int(n);
    float floatpart = n - intpart;
    if (n==intpart)
    {
        cout<<"int "<<n<<endl;
    }
    else
    {
        cout<<"float "<<intpart<<" "<<fixed<<setprecision(3)<<floatpart<<endl;
    }
    
       
}