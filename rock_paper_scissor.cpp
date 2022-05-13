#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main(){
int t ;cin>>t;
for (;t>0;t--)
{
string s;
int k;
cin>>k;
cin>>s;
k =s.length();
for (int i=0;i<k;i++){
for (int j=i;j<k;j++){
    if((s[i]=='S')&&(s[j]=='R')){
        s[i]=s[j];
        break;
    }
 if((s[i]=='R')&&(s[j]=='P')){
        s[i]=s[j];
        break;
    }
 if((s[i]=='P')&&(s[j]=='S')){
        s[i]=s[j];
        break;
    }


}
}
cout<<s<<'\n';
}
    
    return 0;
}