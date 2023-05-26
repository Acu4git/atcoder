#include<stdio.h>
#include<stdlib.h>

int funcCmp(const void* n1,const void* n2){
    if(*(int*)n1>*(int*)n2)
        return -1;
    if(*(int*)n1==*(int*)n2)
        return 0;
    if(*(int*)n1<*(int*)n2)
        return 1;
}

int main(){
    long N,K,D,*a;scanf("%ld%ld%ld",&N,&K,&D);
    a=(long*)malloc(sizeof(long)*N);
    for(long i=0;i<N;i++){
        scanf("%d",a+i);
    }
    qsort(a,N,sizeof(long),funcCmp);
    
    return 0;
}