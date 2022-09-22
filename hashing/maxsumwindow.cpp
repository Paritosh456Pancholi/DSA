#include<iostream>
using namespace std;
int maxsum(int arr[],int n,int k){
    int maxsum=INT16_MIN;
    for(int i=0;i+k-1<n;i++){
        int curr=0;
        for(int j=0;j<k;j++){
            curr+=arr[i+j];
        }
        maxsum=max(maxsum,curr);
    
    }
    return maxsum;
}
int main(){
    int n=5;
    int k=3;
    int arr[5]={10,5,-2,20,1};
    cout<<maxsum(arr,n,k);
}