#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n,int k){
    if(k==n){
        return;
    }
    cout<<arr[k]<<" ";
    print(arr,n,k+1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,n,0);
}