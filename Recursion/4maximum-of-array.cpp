 #include<bits/stdc++.h>
using namespace std;
int  maxOfArray(int arr[],int n,int k){
    if(k==n-1){
        return arr[k];
    }
     return max(arr[k],maxOfArray(arr,n,k+1));
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<(maxOfArray(arr,n,0));
}