#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    int i,j,N;scanf("%d",&N);
    char s[60][3];
    for(i=0;i<N;i++){
        scanf("%s",s[i]);
    }

    bool flag=true;
    for(i=0;i<N;i++){
        char c1=s[i][0],c2=s[i][1];
        if((c1=='H'||c1=='D'||c1=='C'||c1=='S')&&(c2=='A'||((c2-'0')>=2&&(c2-'0')<=9)||c2=='T'||c2=='J'||c2=='Q'||c2=='K')){
            continue;
        }else{
            puts("No");
            exit(0);
        }
    }

    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(strstr(s[i],s[j])!=NULL){
                flag=false;
            }
        }
    }
    if(flag){
        puts("Yes");
    }else{
        puts("No");
    }
    return 0;
}