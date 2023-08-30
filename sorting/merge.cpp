#include <iostream>
using namespace std;

void merge(int *arr, int si, int mid, int ei) {
    int *merged = new int[ei - si + 1];
    int index1 = si;
    int index2 = mid + 1;
    int x = 0;
    
    while (index1 <= mid && index2 <= ei) {
        if (arr[index1] <= arr[index2]) {
            merged[x++] = arr[index1++];
        } else {
            merged[x++] = arr[index2++];
        }
    }
    while (index1 <= mid) {
        merged[x++] = arr[index1++];
    }
    while (index2 <= ei) {
        merged[x++] = arr[index2++];
    }
    for (int i = 0, j = si; i < x; i++, j++) {
        arr[j] = merged[i];
    }
    delete[] merged;
}
void mergesort(int *arr,int start,int end){
    if (start >= end) {
        return; 
    }
    int mid=start+(end-start)/2;

    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main(){
    int arr[]={1,7,9,2,3,0};
    int num=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,num-1);
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }


}