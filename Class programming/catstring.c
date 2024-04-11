#include<stdio.h>
int main()
{
    char s1[500];
    char s2[50];
    printf("Enter the s1 = ");
    scanf("%s",s1);
    printf("Enter the s2 = ");
    scanf("%s",s2);
    int len1=0;
    while(s1[len1]!='\0'){
        len1++;
    }
    int len2=0;
    while(s2[len2]!='\0'){
        len2++;
    }
    int i;
    for(i=0;i<=len2;i++){
        s1[len1+i]=s2[i];
    }
    printf("%s",s1);
    return 0;
}