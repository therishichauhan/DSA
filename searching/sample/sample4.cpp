//Find a peak element i.e. an element that is not smaller than its neighbors. 

#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[]={10, 20, 15, 2, 23, 90, 67};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<n;i++){
        if (n == 1)
		cout<<arr[0];
	if (arr[0] >= arr[1])
		cout<<arr[0];
	if (arr[n - 1] >= arr[n - 2])
		cout<<arr[ n - 1];


        if(arr[i]>arr[i+1]&&arr[i]>arr[i-1]){
            cout<<arr[i]<<" ";
        }
    }



}
