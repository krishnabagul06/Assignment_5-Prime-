#include<iostream>
using namespace std;

int countDigit(long long int N, int digit) {
    int count = 0;

    while(N > 0) {
        int last = N % 10;

        if(last == digit) {
            count++;
        }

        N = N / 10;
    }

    return count;
}

int main() {
    long long int N;
    int digit;

    cin >> N;
    cin >> digit;

    cout << countDigit(N, digit);

    return 0;
}
