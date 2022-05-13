
#include<bits/stdc++.h>
using namespace std;
// int check(int l,int m,int n,int j,int k,int g){
//     if((l%n==0)&&(m%n==0)){
//         if(((g/n)>=j)&&((g/n)<=k)){
//             return (g/n);
            
//         }

//         else{
//             n++;
//         }
//     }

// else{
//     n++;
// }
// if((n>l)||(n>m))
// return -1;
// }
// int main(){
// int x,y;
// cin>>x>>y;
// int t;
// cin>>t;
// while(t--){
// int a,b;
// cin>>a>>b;
// int g=__gcd(a,b);
// if((g>=a)&&(g<=b)){
//     cout<<g<<"\n";
// }
// else{
//   cout<<check(x,y,2,a,b,g);
//   cout<<"\n";
// }

// }

    
    
//     return 0;
// }
int main (){
int x,y;
cin>>x>>y;
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int g=__gcd(x,y);
    int q1=g/a;
    int q2=g/b;
    if(q1!=q2){
        cout<<b-(g%b)<<"\n";
    }



}



    return 0;

}