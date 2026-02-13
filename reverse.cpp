#include<iostream>
using namespace std;
int main()
{
    int n,reverse=0,remender;
    cin>>n;
    while(n!=0){
        remender=n%10;
        reverse=reverse*10+remender;
        n=n/10;
    }
    cout<<reverse;
    return 0;

} 