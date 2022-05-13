
#include<bits/stdc++.h>
using namespace std;
int main(){
long long  t;cin>>t;
while(t--)
{long long  w,h;
cin>>w>>h;
long long k1;
cin>>k1;
vector<long long >vx1;
for(long long i=0;i<k1;i++){
    long long  x;
    cin>>x;
    if(x<0){
        x=(-1)*x;
    }
    vx1.push_back(x);
}
long long  k2;
cin>>k2;
vector<long long >vx2;
for(long long  i=0;i<k2;i++){
    long long  x;
    cin>>x;
    if(x<0){
        x=(-1)*x;
    }
    vx2.push_back(x);
}
long long  k3;
cin>>k3;
vector<long long  >vy1;
for(long long  i=0;i<k3;i++){
    long long  x;
    cin>>x;
    if(x<0){
        x=(-1)*x;
    }
    vy1.push_back(x);
}
long long  k4;
cin>>k4;
vector<long long  >vy2;
for(long long  i=0;i<k4;i++){
    long long  x;
    cin>>x;
    if(x<0){
        x=(-1)*x;
    }
    vy2.push_back(x);
}


sort(vx1.begin(),vx1.end());
sort(vx2.begin(),vx2.end());
sort(vy1.begin(),vy1.end());
sort(vy2.begin(),vy2.end());
long long area=(vx1[k1-1]-vx1[0])*h;
if(((vx2[k2-1]-vx2[0])*h)>area){
    area=(vx2[k2-1]-vx2[0])*h;
}
if(((vy1[k3-1]-vy1[0])*w)>area){
    area=(vy1[k3-1]-vy1[0])*w;
}
if(((vy2[k4-1]-vy2[0])*w)>area){
    area=(vy2[k4-1]-vy2[0])*w;
}
cout<<area<<"\n";



}
    
    
    return 0;
}