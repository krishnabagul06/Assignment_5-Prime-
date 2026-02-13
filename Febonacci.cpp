#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long first = 0;
    long long second = 1;
    long long next;

    if(n == 0)
    {
        cout << 0;
    }
    else if(n == 1)
    {
        cout << 1;
    }
    else
    {
        for(int i = 2; i <= n; i++)
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next;
    }
    return 0;
}
