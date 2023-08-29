#include <iostream>
using namespace std;


void insertionsort(int *arr,int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}


int main(){
    int arr[]={1,7,9,2,3,0};
    int num=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,num);
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }


}