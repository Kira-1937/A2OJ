
#include<bits/stdc++.h>
using namespace std;
int main(){
int t ;
cin>>t;
while (t--){
string s;
cin>>s;
int n=s.size();
int N=0;
int E=0;
for(int i=0;i<n;i++)
{
    if(s[i]=='E'){
        E++;
    }
    else{
        N++;
    }
}
if((N==1)){
    cout<<"NO"<<"\n";
}
else{
    cout<<"YES"<<"\n";
}



}

    
    
    return 0;
}