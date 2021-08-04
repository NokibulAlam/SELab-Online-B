#include<stdio.h>

int sum (int arr[], int n){
    int s = 0;
    int i;
    for (i = 0; i<n; i++){
        s += arr[i];
    }
    return s;
}


int main(){
    int arr[100];
    int i,j,k,n;
    printf("ENter size of array");
    //take array size input

    for (i =0;i<n;i++){
        //take arry elements input
    }
    printf("sum of the elements of this arry is %d",sum(arr,n));
    return 0;
}