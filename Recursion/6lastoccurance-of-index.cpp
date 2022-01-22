#include<bits/stdc++.h>
using namespace std;
int occuranceIndexd(int arr[],int n,int x,int k){
    if(k==n){
        return -1;
    } 
    int lissa=occuranceIndexd(arr,n,x,k+1);
    if(lissa==-1){
        {
            if(arr[k]==x){
                return k;
            }
            else return -1;
        }
        
    }
    else return lissa;

    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<occuranceIndexd(arr,n,x,0);
}