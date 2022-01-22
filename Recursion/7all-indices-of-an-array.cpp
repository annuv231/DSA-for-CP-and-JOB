//still incorrect code: 
#include<bits/stdc++.h>
using namespace std;
vector<int> occuranceIndexd(int arr[],int n,int x,int k,int fsf){
    if(k==n){
        vector<int>temp(fsf);
        return temp;

    }
    if(arr[k]==x){
        vector<int>ans=occuranceIndexd(arr,n,x,k+1,fsf+1);
        ans[fsf]=k;
        return ans;
    }
    else{
       vector<int>ans=occuranceIndexd(arr,n,x,k+1,fsf+1);
            return ans;
    }
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
    vector<int>temp;
    //  vector<int>ans;
    temp=occuranceIndexd(arr,n,x,0,0);
    for(auto i:temp){
        cout<<i<<" ";
    }
}