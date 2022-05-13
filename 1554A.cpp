
#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;cin>>t;
while(t--){
long long  n ;
cin>>n;
vector <long long  >v;
for(long long  i=0;i<n;i++){
    long long  x;
    cin>>x;
    v.push_back(x);
}
long long prod;
prod=v[0]*v[1];
for(long long  i =2;i<n;i++){
    long long k=v[i]*v[i-1];
     if(k>prod){
         prod=v[i]*v[i-1];
     }
}
cout<<prod<<"\n";




}

    
    
    return 0;
}