#include <iostream>
using namespace std;


int partition(int *arr,int s,int e){
    int pivot=arr[s];
    int i=s;
    for(int j=s+1;j<=e;j++ ){
        if(arr[j]<pivot){
            i++;

            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i];
    arr[i]=pivot;
    arr[s]=temp;

    return i;
    
}

void Quicksort(int *arr,int si,int ei){
    if(si>=ei){
        return;
    }
    int pivotindex=partition(arr,si,ei);

    Quicksort(arr,si,pivotindex-1);
    Quicksort(arr,pivotindex+1,ei);
}

int main(){
    int arr[]={1,7,9,2,3,0};
    int num=sizeof(arr)/sizeof(arr[0]);
    Quicksort(arr,0,num-1);
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }


}