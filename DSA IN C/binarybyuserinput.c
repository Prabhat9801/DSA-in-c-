#include<stdio.h>
int main(){
    int n;
    
    
    printf("Enter the size of the array = ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int start = 0;
    int end = n-1;
    int key;
    printf("Enter the target element = ");
    scanf("%d",&key);
    
    while(start<end){
         int mid = (start+end)/2;
        if(arr[mid]==key){
            printf("the %d is found on the %d index",key,mid);
            return 0;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
         else if(key>arr[mid]){
            end=mid-1;
    }
    else 
    printf("Not found");
    return 0;
}
}