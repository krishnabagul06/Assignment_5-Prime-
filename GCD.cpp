#include<iostream>
using namespace std;

long long findGCD(long long a, long long b) {
    while(b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long N1, N2;

    cin >> N1;
    cin >> N2;

    cout << findGCD(N1, N2);

    return 0;
}
