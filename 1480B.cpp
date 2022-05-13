
#include<bits/stdc++.h>
using namespace std;
int main(){

int t;cin>>t;
while(t--){
int A,B;
cin>>A>>B;
int n;
cin>>n;
vector<int >a;
vector<int >b;
for(int i =0;i<n;i++){
    int x;
    cin>>x;
    a.push_back(x);
}
for(int i =0;i<n;i++){
   int x;
    cin>>x;
    b.push_back(x);
}
for(int i=0;i<n;i++){
   if(b[i]%A==0){
       B=B-(b[i]/A)*(a[i]);
   }
else{
       B=B-((b[i]/A)+1)*(a[i]);
   }

}
for(int i=0;i<n;i++){
    B=B+a[i];
}

if(B>0){
    cout<<"YES"<<'\n';
}
else{
    cout<<"NO"<<'\n';
}

}
    
    
    return 0;
}