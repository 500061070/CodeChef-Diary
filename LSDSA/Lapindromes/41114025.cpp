#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<string> v;
    int n;
    cin>>n;
    string str;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
      for(int i=0;i<n;i++){
        str=v[i];
        int n=str.size();
    string str1,str2;
    if(n%2==0){
            str1=str.substr(0,n/2);
            str2=str.substr((n/2),n);
    }
    else{
        str1=str.substr(0,(n/2)+1);
        str2=str.substr(n/2,n);
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2){
        cout<<"YES"<<endl;
        //cout<<str1<<" "<<str2<<endl;
    }
    else{
        cout<<"NO"<<endl;
        //cout<<str1<<" "<<str2<<endl;
    }

      }
    return 0;
}
