#include <bits/stdc++.h>
using namespace std;

struct str
{
    int a,b,c,d,sum = 0;
    string n;
};

bool com ( str a, str b )
{
    if ( abs(a.sum - b.sum) > 10 )
        return a.sum > b.sum;
    else
        return a.n < b.n;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("time.in","r",stdin);
    int num;
    int num2;
    cin>>num2;
    cin>>num;
    cout<<num+num2;
    return 0;
}
