#include<stdio.h>

int main(){
    int k;scanf("%d",&k);
    printf("%d:%02d",21+(k>=60?1:0),k%60);
    return 0;
}