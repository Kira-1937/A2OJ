
#include<bits/stdc++.h>
using namespace std;
int compare(int a,int b,int max){
    
if((a|b)>max){

}


}
int main(){
int t;
cin>>t;
while(t--){
int n ,k;
cin>>n>>k;
if(k>n){
    k=100;
}
vector <int > v;
for(int i=0;i<n ;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
int max;
max=1*2-k*(v[0]|v[1]);
sort(v.begin(),v.end(),compare);





}

    
    
    return 0;
}