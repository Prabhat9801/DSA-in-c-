#include<stdio.h>
int index(int arr[],int key,int end,int start){
    while(start<=end){
       int  mid=(start+end)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if (key<arr[mid]){
            end = mid-1; 
        }
        else if (key>arr[mid]){
            start = mid +1;
        }
        else 
        return -1;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int start = 0;
    int key = 6;
    int size = 9;
    int end =  size-1;
    int x = index(arr,key,end,start);
    if(x!=-1){
        printf("The %d is found on the %d index",key,x);

    }
    else {
        printf("not found");
    }


}