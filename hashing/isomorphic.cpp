#include<iostream>
using namespace std;
bool isisomorphic(char s1,char s2,int m,int n){
    if(m!=n){
        return false;
    }
    int s1m[256]={0};
    int s2m[256]={0};
    for(int i=0;i<n;i++){
        if(!s1m[s1[i]] and !s2m[s2[i]]){
            s1m[s1[i]]=s2[i];
            s2m[s2[i]]=s1[i];

        }
        else if(s1m[s1[i]]!=s2[i]) return false;
    }
    return true;

}
int main(){
    string s1,s2;
    s1="aab";
    s2="xxy";
    int m=s1.length();
    int n=s2.length();
    cout<<isisomorphic(s1,s2,m,n);
    
}