#include<stdio.h>
#include<string.h>

int main(){
    char s[101],t[101];scanf("%s %s",s,t);
    puts(strstr(s,t)!=NULL?"Yes":"No");
    return 0;
}