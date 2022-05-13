
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    vector <int >v;
    for (int i;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
cin.ignore();
string s;
cin>>s;
vector <int>v1;
vector<int >v0;
int num=0;
for(int i=0;i<n;i++){
if(s[i]=='1'){
v1.push_back(v[i]);
num++;
}
else{
    v0.push_back(v[i]);
}


}
vector<int >v1f;
for(int i=0;i<num;i++){
    v1f.push_back(n-num+i+1);
}
vector<int >v0f;
for(int i=0;i<n-num;i++){
    v0f.push_back(i+1);
}
for(int i=0;i<num;i++){
for(int j=i+1;j<num;j++)
{
if(v1[i]>v1[j]){
    int temp=v1[i];
    v1[j]=v1[i];
    v1[j]=temp;

    int tem=v1f[i];
    v1f[i]=v1f[j];
    v1f[j]=tem;
}

}

}
for(int i=0;i<n-num;i++){
for(int j=i+1;j<n-num;j++)
{
if(v0[i]>v0[j]){
    int temp=v0[i];
    v0[j]=v0[i];
    v0[j]=temp;

    int tem=v0f[i];
    v0f[i]=v0f[j];
    v0f[j]=tem;
}



}
}
int m=0;
int l=0;
for(int i=0;i<n;i++)
{
if(s[i]=='1'){
    cout<<v1f[m]<<" ";
    m++;
}
else{
    cout<<v0f[l]<<" ";
    l++;
}


}



cout<<endl;

}
    
    return 0;
}