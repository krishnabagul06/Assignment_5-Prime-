#include<iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    while(cin >> num) {   // keeps taking input
        sum = sum + num;

        if(sum < 0) {
            break;        // stop if sum becomes negative
        }

        cout << num << endl;
    }

    return 0;
}
