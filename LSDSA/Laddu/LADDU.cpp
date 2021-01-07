#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        int laddu=0;

        cin>>n;
        string origin;
        cin>>origin;
        while(n--){
            string act;
            cin>>act;
            if(act=="CONTEST_WON"){
                int rank;
                cin>>rank;
                laddu=laddu+300;
                if(rank<20){
                    laddu=laddu+(20-rank);
                }
            }
            else if(act=="TOP_CONTRIBUTOR"){
                laddu=laddu+300;
            }
            else if(act=="BUG_FOUND"){
                int bug;
                cin>>bug;
                laddu=laddu+bug;
            }
            else if(act=="CONTEST_HOSTED"){
                laddu=laddu+50;
            }
        }

        if(origin=="INDIAN"){
            cout<<laddu/200<<endl;
        }
        else{
            cout<<laddu/400<<endl;
        }
    }
    return 0;
}