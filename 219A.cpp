
#include<bits/stdc++.h>
using namespace std;
int main(){
int k;
cin>>k;
string s;
cin>>s;

int l=s.size();
map<char,int >mp;
for(int i=0;i<l;i++)
{
mp[s[i]]++;

}
bool flag=true;
for(auto &pr:mp){
   
    if(pr.second%k!=0){
        flag=false;
        cout<<-1<<"\n";
        break;
    }
}
string s2;
s2="";
vector <char>v;
for(int i=0;i<l;i++){
    v.push_back(s[i]);
}
sort(v.begin(),v.end());
if(flag){
for(int  i=0;i<l;){
   s2=s2+v[i];
   i=i+k;
}
for(int i =0;i<k;i++){
    cout<<s2;
}


}




    return 0;
}