#include <iostream>
using namespace std;

bool subarray(int arr[],int n,int sum){
    int s=0;int curr=0;
    for(int e=0;e<n;e++){
        curr+=arr[e];
        while(sum<curr){
            curr-=arr[s];
            s++;
            }
        if(curr==sum){
            return true;
        }

    }
return false;    
}    
int main() {
    int n=5;
    int sum=33;
    int arr[5]={1,4,20,3,10,5};
    cout<<subarray(arr,n,sum);
    
}