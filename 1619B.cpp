
#include<bits/stdc++.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){

int t;
cin>>t;
while(t--)
{
int  n;
cin>>n;
 int m =sqrt(n);
 int o=cbrt(n);
 int q=cbrt(sqrt(n));
 cout<<m+o-q<<endl;

}    
    
    return 0;
}