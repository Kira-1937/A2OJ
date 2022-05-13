
#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;cin>>n;
vector <int >a;
for (int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push_back(x);
}


int m;cin>>m;
vector<int >b;
for (int i=0;i<m;i++){
    int x;
    cin>>x;
    b.push_back(x);
}
int max=0;
int l=0;
for(int i=0;i<n;i++) {
   for(int k=0;k<m;k++){
       if(b[k]%a[i]==0){
           if(b[k]/a[i]>max){
               max=b[k]/a[i];
               l=1;
           }
           else if(b[k]/a[i]==max){
               l++;
           }
       }
   }



}
cout<<l<<"\n";
    
    return 0;
}