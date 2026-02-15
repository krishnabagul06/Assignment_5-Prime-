#include<iostream>
using namespace std;

// Function to find sum of digits
int sumOfDigits(long long n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Function to check prime
bool isPrime(long long n) {
    if(n <= 1) return false;
    for(long long i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    long long N;
    cin >> N;

    if(isPrime(N)) {
        cout << 0;
        return 0;
    }

    int originalSum = sumOfDigits(N);
    int factorSum = 0;
    long long temp = N;

    // Prime factorization
    for(long long i = 2; i * i <= temp; i++) {
        while(temp % i == 0) {
            factorSum += sumOfDigits(i);
            temp /= i;
        }
    }

    // If remaining number > 1 (it is prime)
    if(temp > 1) {
        factorSum += sumOfDigits(temp);
    }

    if(originalSum == factorSum)
        cout << 1;
    else
        cout << 0;

    return 0;
}
