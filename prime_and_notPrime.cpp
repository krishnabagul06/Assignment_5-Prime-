#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int count = 0;
    for(long long i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    if(count == 2)
        cout << "Prime";
    else
        cout << "Not Prime";
    return 0;
}
