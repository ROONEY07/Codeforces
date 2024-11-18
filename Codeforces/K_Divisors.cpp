#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<long long> divisors;  // Using a set to automatically store unique divisors in sorted order
    
    // Loop through numbers up to sqrt(n) to find divisors
    for (int i = 1; i <= sqrt(n); i++) 
    {
        if (n % i == 0) {
            divisors.insert(i);       // Insert divisor 
            divisors.insert(n / i);    // Insert corresponding pair divisor
        }
    }
    
    // Output divisors in ascending order
    for (long long d : divisors) {
        cout << d << endl;
    }
    
    return 0;


    // The total time complexity is O(logN)
}
  