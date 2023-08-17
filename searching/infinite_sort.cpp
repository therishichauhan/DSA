// //you have a sorted array of infinite numbers, how would you search an element in the array?

// //Since array is sorted, the first thing clicks into mind is binary search, but the problem here is that we don’t know size of array. 
// // If the array is infinite, that means we don’t have proper bounds to apply binary search. So in order to find position of key, first we find bounds and then apply binary search algorithm.
// // Let low be pointing to 1st element and high pointing to 2nd element of array, Now compare key with high index element, 
// // ->if it is greater than high index element then copy high index in low index and double the high index. 
// // ->if it is smaller, then apply binary search on high and low indices found.

#include<iostream>
using namespace std;

int binarysearch(int *a,int low,int high,int x){
    if (high>=low)
	{
		int mid = low + (high - low)/2;
		if (a[mid] == x)
			return mid;
		if (a[mid] > x)
			return binarysearch(a, low, mid-1, x);
		return binarysearch(a, mid+1, high, x);
	}
	return -1;
}

int findbound(int arr[], int key)
{
	int l = 0, h = 1;
	int val = arr[0];

	// Find h to do binary search
	while (val < key)
	{
		l = h;	 // store previous high
		h = 2*h;	 // double high index
		val = arr[h]; // update new val
	}

	return binarysearch(arr, l, h, key);
}


int main(){

    int arr[]={3, 5, 7, 9, 10, 90, 100, 130,140, 160, 170};
    int n=sizeof(arr)/sizeof(arr[0]);
    int item=10;
    int ans = findbound(arr, item);
	if (ans==-1){
		cout << "Element not found";
    }
	else{
		cout << "Element found at index " << ans;
    }



    return 0;
}

