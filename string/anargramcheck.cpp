#include<iostream>
#include<algorithm>
using namespace std;
const int CHAR=256;
bool checkAnagram(string str1,string str2){//(O(n+CHAR))
    if(str1.length()!=str2.length()){
        return false;
    }
        int count[CHAR]={0};
        for(int i=0;i<str1.length();i++){
            count[str1[i]]++;
            count[str2[i]]--;
        }
        for(int i=0;i<str1.length();i++){
            if(count[i]==0){
                return true;
            }
            
        }
        return false;
}
/**bool checkAnagram(string str1,string str2){  //O(nlog(n))
    if(str1.length()!=str2.length()){
        return false;
    }
    else{
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        return (str1==str2);
    }
}*/
int main(){
    string str1="paritosh";
    string str2="hsotirap";
    cout<<checkAnagram(str1,str2);
}