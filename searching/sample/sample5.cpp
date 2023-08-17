/*Given a sorted array arr[] with possibly duplicate elements,
 the task is to find indexes of the first and last occurrences of an element x in the given array. */



//A Naive Approach:

/*The idea to solve this problem is iterate on the elements of given array
 and check given elements in an array and keep track of first and last occurrence of the found element’s index. */

 #include<bits/stdc++.h>
 using namespace std;


 int main(){

    int arr[]={1, 3, 5, 5, 5, 5, 7, 123,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=5,count=0,cnt;
    bool b1=true;
    for(int i=0;i<n;i++ ){
        if(arr[i]==x){
            count++;
            if(b1){
                cout<<"first occurance = "<<i<<endl;
                b1=false;
            }
            if(count>=1){
                cnt=i;
             }
        }
        
    }
    
    if(count==1||count>1){
        cout<<"Last occurance = "<<cnt;
    }

    return 0;
 }