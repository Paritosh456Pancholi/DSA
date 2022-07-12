#include <iostream>
#include <cmath>
using namespace std;
int Searchinrot(int arr[],int n,int key){
    {int l=0;
    int h=n-1;
    int mid=l+(h-l)/2;
    while(l<=h){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[l]<arr[mid]){
            if(arr[l]<=key&&arr[mid]<key){
                h=mid-1;
            }
            else {
                l=mid+1;
            }

        }
        else{
           if(arr[mid]<=key&&arr[h]>key){
                l=mid+1;
            }
            else {
                h=mid-1;
            } 
        }
    }


    }
}    
int main() {
    
    int n,key;
    cin>>key;
    cin>>n;
    int arr[n];
    for(int i=0; i < n; i++)
       {
           cout<<arr[i]<<" ";
       }
    cout<<endl;
    
    Searchinrot(arr,n,key);
    return 0;
    
}