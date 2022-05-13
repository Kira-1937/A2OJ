
#include<bits/stdc++.h>
using namespace std;
int main(){
int t ;
cin>>t;
while (t--){
    int n ;cin>>n;
    vector <int >v;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
sort(v.begin(),v.end());
int k=0;
for(int i =0;i<n;i++){
    if(v[i]>n){
     k=i+1;
     break;
    }
}
int l=0;
for(int i=k-1;i<n;i++){
    if(v[i]>2*(k)){
       l++;
    }
    else{
        l=-1;
        break;
    }
}
cout<<l<<"\n";



}

    
    
    return 0;
}