#include<stdio.h>
#include<string.h>

int main(){
    char str[3][11],t[1001];
    int i;
    for(i=0;i<3;i++){
        scanf("%s",str[i]);
    }
    scanf("%s",t);

    char S[10005];
    for(i=0;t[i]!='\0';i++){
        strcat(S,str[t[i]-'1']);
    }
    printf("%s",S);
    return 0;
}