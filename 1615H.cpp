
#include<bits/stdc++.h>
using namespace std;
long long  _avg(vector<long long  >v,int n ){
    long double  sum=0;
    for(int i =0;i<n;i++){
        sum=sum+v[i];
    }
    sum= round(sum/n*(1.0));

    return sum ;
}
int main(){
int n,m;
cin>>n>>m;
vector <long long >v1;
for(int i=0;i<n;i++){
  long long x;
  cin>>x;
  v1.push_back(x);
}

long long  avg=_avg(v1,n);
    for(int i =0;i<m;i++){
     int u ,v;
     cin>>u>>v;
     v--;
     u--;
        if (v1[u]>v1[v]){
        if(avg<=v1[v]){
        v1[u]=v1[v];
        avg=_avg(v1,n);
         }
        else if(avg>v1[v]&&avg<v1[u]){
        v1[v]=avg;
        v1[u]=avg;
        avg=_avg(v1,n);
         }
        else{
        v1[v]=v1[u];
        avg=_avg(v1,n);
         }
        

     }
    
    }
    for(int i =0;i<n;i++){
          cout<<v1[i]<<" ";
      }
    return 0;
}