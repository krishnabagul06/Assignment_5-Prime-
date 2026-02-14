#include<iostream>
using namespace std;

bool isArmstrong(long long N) {
    long long original = N;
    long long temp = N;
    int digits = 0;

    // Count digits
    while(temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = N;
    long long sum = 0;

    // Calculate sum of digits^digits
    while(temp > 0) {
        int digit = temp % 10;

        long long power = 1;
        for(int i = 0; i < digits; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    return sum == original;
}

int main() {
    long long N;
    cin >> N;

    if(isArmstrong(N))
        cout << "true";
    else
        cout << "false";

    return 0;
}
