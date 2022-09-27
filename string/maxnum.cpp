// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the count of
// digits, k in the given number n
int countFreq(int N, int K){
	int count = 0;
	while (N > 0) {
		if (N % 10 == K) {
			count++;
        }
		N = N / 10;
	}
	return count;
}
int findElementUtil(int arr[], int N, int K)
{
	int c;
	int max;
	int ele;
	max = 0;
	for (int i = 0; i < N; i++) {
		c = countFreq(arr[i], K);
		if (c > max) {
			max = c;
			ele = arr[i];
		}
	}
	if (max == 0)
		return -1;
	else
		return ele;
}
void findElement(int arr[], int N, int K)
{

	int ele = findElementUtil(arr, N, K);
	if (ele == -1)
		cout << "-1";

	else
		cout << ele;
}

// Driver Code
int main()
{

	// The digit whose max
	// occurrence has to be found
	int K ;
    cin>>K;
    int n;
    cin>>n;
    int arr[n];
        for(int i=0; i < n; i++)
           {
            cin>>arr[i];
           }
	findElement(arr, K, n);

	return 0;
}
