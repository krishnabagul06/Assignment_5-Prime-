#include<iostream>
using namespace std;

int main() {
    int minF, maxF, step;

    cin >> minF;
    cin >> maxF;
    cin >> step;

    int F = minF;

    while(F <= maxF) {
        int C = (5 * (F - 32)) / 9;

        cout << F << "\t" << C << endl;

        F = F + step;
    }

    return 0;
}
