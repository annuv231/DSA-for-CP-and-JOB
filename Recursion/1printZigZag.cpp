#include <bits/stdc++.h>
using namespace std;
void printZig(int n){
    if(n==0){
        return;
    }
    cout<<"pre "<<n<<endl;
    printZig(n-1);
    cout<<"in "<<n<<endl;
    printZig(n-1);
    cout<<"post "<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    printZig(n);
}