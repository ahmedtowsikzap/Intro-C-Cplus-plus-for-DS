#include<bits/stdc++.h>
using namespace std;


int main(){


    int n;

    cin>>n;

    int arr[n];
    
    for(int i=0; i<n; i++){
        
       cin>>arr[i];
    }
    

for(int i=0;i<n-1; i++){
    for(int j=i+1; j<n; j++){
            sort(arr,arr+n);
        }
    }
    for(int i=0; i<n-1; i++){
        cout<<arr[i]<<" ";
    }
    cout << arr[n - 1];
}