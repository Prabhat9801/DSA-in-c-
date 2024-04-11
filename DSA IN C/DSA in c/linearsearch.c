#include<stdio.h>
int linear(int arr[],int l,int key){
    for(int i=0;i<l;i++){
    if(arr[i]==key){
        return i;
    }
    } 
     return -1;
     }
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int l = sizeof(arr)/sizeof(arr[0]);
    int key = 6;
    int index = linear(arr,l,key);
    if(index !=-1){
        printf("The %d is found on the %d index",key,index);
    }
    else {
        printf("Not found");
    }
}