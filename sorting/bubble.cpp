#include <iostream>
using namespace std;

void bubblesort(int *arr,int n){
     for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
     }
}

int main(){
    int arr[]={1,7,9,2,3,0};
    int num=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,num);
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }


}