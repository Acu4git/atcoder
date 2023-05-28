#include<stdio.h>

int main(){
    char s[101];scanf("%s",s);
    int i,sum=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='v')sum++;
        if(s[i]=='w')sum+=2;
    }
    printf("%d",sum);
    return 0;
}