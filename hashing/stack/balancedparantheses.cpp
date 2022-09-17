#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="{()}";
    stack<char>s;
    char ch;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        s.push(ch);
        
    }
    if(ch=='(' || ch=='['||ch=='{')
        s.push(ch);
    else
        if(!s.empty()){
            char top=s.top();
            if(ch==')' and top=='('||ch==']' and top=='['||ch=='}' and top=='{')
                s.pop();

            else
                return 0;
            

        }
    return ;
}