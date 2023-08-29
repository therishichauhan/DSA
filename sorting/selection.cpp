#include <iostream>
using namespace std;

void selection(int* arr,int n){
    
    for(int i=0;i<n-1;i++){
        int minindex=i;
         for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minindex]){
            minindex=j;
        }
      }
      if(minindex!=i){
        int temp=arr[i];
            arr[i]=arr[minindex];
           arr[minindex]=temp;
      }
    }
}

int main(){
    int arr[]={1,7,9,2,3,0};
    int num=sizeof(arr)/sizeof(arr[0]);
    selection(arr,num);
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }


}