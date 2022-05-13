
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n ,a,b;
    cin>>n>>a>>b;
    string s;
    cin.ignore();
    cin>>s;
    int unita;
    unita=s.length();
    int unitb=0;
    for(int i=1;i<s.length();i++){
        if(s[i]-s[i-1]!=0){
            unita++;
            unitb++;
        }
    }
    
    for(int i=0;i<s.length();i++){
        if(s[i]==1){
            unitb+2;
        }
        else{
            unitb++;
        }
    }
    auto  cost=a*unita+b*unitb;
    cout<<unita<<' '<<unitb<<"\n";
    cout<<cost<<'\n';




}

    
    
    return 0;
}