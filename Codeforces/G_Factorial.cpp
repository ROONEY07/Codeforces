#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    for (int t = 0; t < test; t++) 
    {
        int n;
        cin >> n; 
        long long fact = 1;
        if (n < 0) 
        {
            cout << "Invalid index" << endl;
        } else 
        {
            
            for (int j = 1; j <= n; j++) 
            {
                fact *= j;
            }
            cout << fact << endl;
        }
    }
    return 0;
}
