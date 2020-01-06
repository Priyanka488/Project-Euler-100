// Problem 1 - sum of multiples of 3 and 5

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

ll calc(ll num)
{
    return (num*(num+1))/2;
}

int main() {
    ll cases;
    cin>>cases;
    while(cases--)
    {
        ll n,sum=0;
        cin>>n;
        int sum3 = (n-1)/3;
        int sum5 = (n-1)/5;
        int sum15= (n-1)/15;
        cout<<(calc(sum3)*3)+(calc(sum5)*5)-(calc(sum15)*15)<<endl;
    }
}
