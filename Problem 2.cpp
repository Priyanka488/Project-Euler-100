#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;


int main() {
    ll cases;
    cin>>cases;
    while(cases--)
    {
        ll n;
        cin>>n;
        ll a=0,b=1,total=0;
        ll sum=a+b;
        while(sum<n)
        {
            if(sum%2==0) total+=sum;
            a=b;
            b=sum;
            sum=a+b;
        }
        cout<<total<<endl;
    }
}
