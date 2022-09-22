#include <bits/stdc++.h> 
using namespace std;
char reverse(char s[],int l,int h){
    while(l<=h){
        swap(s[l],s[h]);
        l++;
        h--;
    }
}
char reverseword(char s[],int n){
    int start=0;
    int end=n-1;
    for(end=0;end<n;end++){
        if(s[end]==' '){
            reverse(s,start,end-1);
            start=end+1;
        }
       }
     reverse(s,start,n-1);
    reverse(s,0,n-1);
}
int main(){
    string str="ram reverses str";
    int n=str.length();
    char s[n];
    strcpy(s, str.c_str());
    cout<<reverseword(s,n);
    for (int i = 0; i < n; i++) 
        cout << s[i];
    
}