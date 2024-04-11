#include<stdio.h>
int main()
{
    char s1[100];
    char c;
    printf("Enter the string = ");
    scanf("%s",s1);
    int len1 = 0;
    while(s1[len1]!='\0') {
        len1++;
      
    }
    int i;
    for(i=0;i<=(len1)/2;i++){
        c=s1[i];
        s1[i]=s1[len1-1-i];
        s1[len1-1-i]=c;
    }
    printf("%s",s1);
    return 0;
}