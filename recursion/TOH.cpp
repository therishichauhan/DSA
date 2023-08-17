#include<bits/stdc++.h>
using namespace std;

//---Programe to solve Tower Of Hanoi-----------------

void TOH(int disc,char A,char B,char C){
    if(disc==0)
    return;

        TOH(disc-1,A,C,B);
        printf("Move disc from %c to %c",A,C);
        printf("\n");
        TOH(disc-1,B,A,C);

}


int main(){
    TOH(3,'A','B','C');
return 0;
}