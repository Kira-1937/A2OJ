#include<iostream>
#include<bits\stdtr1c++.h>
using namespace std;
int main(){

    int n;
    cout << fixed << setprecision(15);
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
        float ans= 1.0*sum/n;
        cout<< ans;
    
    return 0;
}