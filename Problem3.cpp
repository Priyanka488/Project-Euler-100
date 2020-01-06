// Problem 3 - Largest Prime Factor

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll primeFactors(ll num)
{
    set<ll,greater<ll>> factors;
    while(num%2==0)
    {
        factors.insert(2);
        num/=2;
    }

for(int i=3;i<=sqrt(num);i++)
{
    while(num%i==0)
    {
        factors.insert(i);
        num/=i;
    }
}
if(num>2) factors.insert(num);
return *factors.begin();
}

int main() {
    ll cases;
    cin>>cases;
    while(cases--)
    {
        ll n;
        cin>>n;
        cout<<primeFactors(n)<<endl;
    }
}
