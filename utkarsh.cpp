
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int j=0;j<t;j++){
    vector<char>v;
    for (int i=0;i<3;i++){
        char a;
        cin>>a;
        v.push_back(a);

    }
    char a1,a2;
    cin>>a1>>a2;
    if((v[0]==a1)||(v[0]==a2)){
        cout<<v[0];
        break;
    }
  else if((v[1]==a1)||(v[1]==a2)){
        cout<<v[1]; } }
         return 0;
}