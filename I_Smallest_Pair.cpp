#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int t;
   cin>>t;
   while(t--){
     int n;

    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int min_value = INT_MAX;

    for(int i=0; i<n-1; i++){

        for(int j=i+1; j<n; j++){

           int value = a[i]+a[j]+(j+1)-(i+1);
            min_value = min(min_value,value);

        }
    }
    
    cout<<min_value;
   }

    return 0;

}