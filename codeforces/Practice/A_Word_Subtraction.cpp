#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, rem;
    cin>>n>>k;

    while(k--)
    {
        rem = n%10;
        if(rem==0)
        {
            n /= 10;
        }
        else
        {
            n -= 1;
        }
    }
    cout<<n;

    return 0;
}