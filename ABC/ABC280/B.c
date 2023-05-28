#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,N;scanf("%d",&N);
    long *s=(long*)malloc(sizeof(long)*N);
    for(i=0;i<N;i++){
        scanf("%ld",&s[i]);
    }

    long *a=(long*)malloc(sizeof(long)*N);
    a[0]=s[0];
    printf("%ld ",a[0]);
    for(i=1;i<N;i++){
        a[i]=s[i]-s[i-1];
        printf("%ld ",a[i]);
    }
    return 0;
}