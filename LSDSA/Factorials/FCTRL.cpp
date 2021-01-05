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

    for(long i=0;i<n;i++){
    long x = a[i];
    long count = 0; 
    for (long i = 5; x / i >= 1; i *= 5){
        count += x / i; }
        cout<<count<<endl;
    }

    return 0;
}
