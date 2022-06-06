#include <iostream>
using namespace std;
struct Pair{
    int min;
    int max;
};
Pair MinMax(int arr[], int n){
    struct Pair MnMx;
    int i;
    if(n==1){
        MnMx.min=arr[0];
        MnMx.max=arr[0];
        return MnMx;
    }
    if(arr[0]>arr[1]){
        MnMx.min=arr[1];
        MnMx.max=arr[0];
    }
    else{
        MnMx.min=arr[0];
        MnMx.max=arr[1];
    }
    for(i=2;i<n;i++){
        if(arr[i]>MnMx.max){
            MnMx.max=arr[i];
        }
        else if(arr[i]<MnMx.min){
            MnMx.min=arr[i];
        }
    }return MnMx;
}
    
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int j=0; j < n; j++)
       {
           cout<<arr[j]<<" ";
       }
    struct Pair MnMx=MinMax(arr,n);
      cout << "Minimum element is "
         << MnMx.min << endl;
    cout << "Maximum element is "
         << MnMx.max;
    return 0;
    
}