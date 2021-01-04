#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long t;
    cin>>t;

    while(t--){
        long n;
        long count =1;
        cin>>n;

        long a[n];
        for(long i=0;i<n;i++){
            cin>>a[i];
        }
        
            
        for(long i=1;i<n;i++){
            if(a[i]>a[i-1]){
                a[i]=a[i-1];
            }
        }
        if(n>1){
          for(long i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                count=count +1;
            }  
        }
      
        
        }
        cout<<count<<endl;

    }
    return 0;
}