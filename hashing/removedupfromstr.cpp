#include <iostream>
#include <cmath>
using namespace std;
    
int main() {
    string s,res=" ";
    cin>>s;
    int hash[256]={0};
    for (int i=0;i<s.length();i++){
    if(hash[s[i]]==0){
        hash[s[i]]=1;
        res+=s[i];
    }}
    cout<<res;
    
}