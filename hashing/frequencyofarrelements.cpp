#include <iostream>
#include <cmath>
#include <unordered_map>
using namespace std;
int countfreq(int arr[],int n){
    unordered_map<int,int>s;
    for(int i=0;i<n;i++){
        s[arr[i]]++;
    }
    for(auto e:s){
        cout<<e.first<<" "<<e.second<<endl;
    }
}    

int main() {
    int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    countfreq(arr, n);
    return 0;
    
}