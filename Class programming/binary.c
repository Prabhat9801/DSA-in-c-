#include<stdio.h>
int position(int arr[],int key,int start,int end){
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;
        } 
        else if(arr[mid]<key){
            start = mid+1;
        }
        else if(arr[mid]>key){
            start = mid-1;
        }
        else {
            return -1;
        }
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int start = 0;
    int key = 6;
    int size = 9;
    int end = size-1;
    int x =  position(arr,key,start,end);
    printf("The %d is found on the %d index",key,x);
    if(x== -1){
        printf("Not found");
    }
    return 0;
    
}