#include<iostream>
using namespace std;

bool isArmstrong(int N) {
    int original = N;
    int temp = N;
    int digits = 0;

    // Count digits
    while(temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = N;
    int sum = 0;

    // Calculate sum of digits^digits
    while(temp > 0) {
        int digit = temp % 10;

        int power = 1;
        for(int i = 0; i < digits; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    return sum == original;
}

int main() {
    int N1, N2;
    cin >> N1;
    cin >> N2;

    for(int i = N1; i <= N2; i++) {
        if(isArmstrong(i)) {
            cout << i << endl;
        }
    }

    return 0;
}
