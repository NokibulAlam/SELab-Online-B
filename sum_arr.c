#include<stdio.h>

int sum (int arr[], int n){
    for (int i = 0; i<n;i++){
        arr[i]+=5;
    }
    return arr[n-1];
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