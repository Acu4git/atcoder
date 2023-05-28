#include<stdio.h>

int main(){
    char s[500001],t[500001];
    scanf("%s %s",s,t);
    int i=0;
    while(s[i]==t[i]){
        i++;
    }
    printf("%d",i+1);
    return 0;
}