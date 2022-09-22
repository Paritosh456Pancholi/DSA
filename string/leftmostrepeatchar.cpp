#include<iostream>
#include<algorithm>
using namespace std;
const int CHAR=256;
int checkrepeat(string str1){
        int count[CHAR]={0};
        for(int i=0;i<str1.length();i++){
            count[str1[i]]++;
        }
        for(int i=0;i<str1.length();i++){
            if(count[str1[i]]>1){
                return i;
            }
}
return -1;
}
int main(){
    string str1="parrritosh";
    cout<<checkrepeat(str1);
}