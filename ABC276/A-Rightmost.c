#include<stdio.h>

int main(){
    char s[101];scanf("%s",s);
    int i,s_cnt=-1;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'){
            s_cnt=i+1;
        }
    }
    printf("%d",s_cnt);
    return 0;
}