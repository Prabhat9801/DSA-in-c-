#include<stdio.h>
int main()
{
    char arr[100];
    printf("Enter the string = ");
    scanf("%s",arr);
    int length = 0;
    while(arr[length]!='\0') {
        length++;
      
    }
    printf("The length of the string = %d",length);
    return 0;

}