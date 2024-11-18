#include <iostream>
#include <iomanip> // For setw and setfill
using namespace std;

int main() {
    long long a, b, c, d;
    
    // cout << "Enter four integers: ";
    cin >> a >> b >> c >> d;

    // Multiply the integers while keeping track of only the last two digits
    int lastTwoDigits = (a % 100) * (b % 100) * (c % 100) * (d % 100) % 100;
    // Print the last two digits with leading zeros
    cout<< setw(2) << setfill('0') << lastTwoDigits << endl;

    return 0;
}


/*
     0 (quotient)
   ________
100 | 4
   |______  
   | 4 (remainder)








    When you divide 4 by 100, you are essentially asking, "How many times does 100 fit into 4?"
    
    Since 100 is greater than 4, it fits 0 times. The division can be expressed as:
        Quotient: 0 (because 100 cannot fit into 4)
        Remainder: 4 (since 4 is what remains after trying to divide)

Result of Modulo:

    The modulo operation gives you the remainder:
    Therefore, 4 % 100 equals 4.
*/