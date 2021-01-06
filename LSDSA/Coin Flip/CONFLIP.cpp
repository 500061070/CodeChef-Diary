#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long t;
    cin>>t;


    while(t--){
        long g;
        cin>>g;


        while(g--){

        int i,k,q;
        cin>>i>>k>>q;
        long count = 0;
        long counth =0;
        long countt =0;



        if(k%2==0){
            counth = k/2;
            countt = k/2;

        }
        else{
            if(i==1){
                counth = k/2 ;
                countt = k/2+1;
            }
            else{
                counth = k/2+1;
                countt = k/2;
            }
        }
        if(q==1){
            count = counth;
        }
        else{
            count = countt;
        }

        cout<<count<<endl;
        }
    }
}