#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if(n == 0) {
        cout << 5;
        return 0;
    }
    long long result = 0;
    long long place = 1;
    while(n > 0) {
        int digit = n % 10;
        if(digit == 0) {
            digit = 5;
        }
        result = result + digit * place;
        place = place * 10;
        n = n / 10;
    }
    cout << result;
    return 0;
}
