#include <iostream>
using namespace std;

long long binaryToDecimal(long long n)
{
    long long decimal = 0;
    long long base = 1;   // 2^0
    while(n > 0)
    {
        int lastDigit = n % 10;   // get last digit (0 or 1)
        decimal = decimal + (lastDigit * base);
        base = base * 2;          // increase power of 2
        n = n / 10;               // remove last digit
    }
    return decimal;
}

int main()
{
    long long n;
    cin >> n;
    cout << binaryToDecimal(n);
    return 0;
}
