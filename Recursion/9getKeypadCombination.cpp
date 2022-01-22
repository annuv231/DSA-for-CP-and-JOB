#include<bits/stdc++.h>
using namespace std;
// 1 => abc 
// 2=>def
// 3=>ghi
// 4=>jkl
// 5=>mnop
// 6=>qrst
// 7=>uv
// 8=>wxyz
// 9=>;
// 0=>?! 
vector<string>codes={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
//578
vector<string> KeypadComb(string s){
    //   string str=s.substr(1);
    char ch=s[0];
     int index=ch-'0';
    if(s.length()==0){
        vector<string>str;
        str.push_back("");
        return str;
    }
   vector<string>rres=KeypadComb(s.substr(1));
   vector<string>rans;
   for(int i=0;i<codes[index].length();i++){
         for(string str:rres){
             rans.push_back(codes[index][i]+str);
         }
   }
   return rans;

}
int main(){
    string s;
    cin>>s;
    vector<string>ans;
    ans=KeypadComb(s);
    for(string s:ans){
        cout<<s<<endl;
    }

}