#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    

    // copy the array of A into array of B
    int b[3];
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }

    sort(b, b+3);
    for (int i = 0; i < 3; i++)
    {
        cout<<b[i]<<endl;
    }
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<a[i]<<endl;
    }
    
    

    
    

    return 0;
}
