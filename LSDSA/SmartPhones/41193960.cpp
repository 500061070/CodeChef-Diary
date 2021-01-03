#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    cin>>n;
    long a[n];
    for(long i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long max=0;
    for(long i=0;i<n;i++){
        long rev=a[i]*(n-i);
        if(rev>max){
            max=rev;
        }
    }
    cout<<max;

    return 0;
}