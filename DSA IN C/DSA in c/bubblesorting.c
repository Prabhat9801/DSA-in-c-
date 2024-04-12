#include<stdio.h>
int main(){
    int n;
    
    
    printf("Enter the size of the array = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of the array = ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                //  printf("The sorted elemntes of the array = %d",arr[j]);
            }
       

        }
    }
    printf("The sorted elements of the array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    int key;
    printf("\nEnter the target element = ");
    scanf("%d",&key);
    int start = 0;
    int end = n-1;
    while(start<=end){
         int mid = (start+end)/2;
        if(arr[mid]==key){
            printf("the %d is found on the %d index",key,mid);
            return 0;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
         else {
            end=mid-1;
    }
    }
    printf("Not found");
        return 0;
    

}