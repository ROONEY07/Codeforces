#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int a,b;
  cin>>a>>b;

  long long int LastDigitA = a % 10;   
  long long int LastDigitB = b % 10;
  
  long long int sumLastDigit = LastDigitA+LastDigitB;
  cout<<sumLastDigit;   
}