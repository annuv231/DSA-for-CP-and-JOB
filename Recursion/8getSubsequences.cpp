#include<bits/stdc++.h>
using namespace std;
vector<string> subseq(string s){
    if(s.length()==0){
        vector<string>bres; //base result
        bres.push_back("");
        return bres;
    }
    char c=s[0];
    string st=s.substr(1);
    vector<string>rres=subseq(st);
    vector<string>ans;
    for(string s:rres){
        ans.push_back(""+s);
        ans.push_back(c+s);
    }
    return ans;
}
int main(){
     string s;
     cin>>s;
     vector<string>subs;
     subs=subseq(s);
     for(int i=0;i<subs.size();i++){
         cout<<subs[i]<<endl;
     }
return 0;
}