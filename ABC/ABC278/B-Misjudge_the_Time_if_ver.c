#include<stdio.h>

int main(){
    int H,M;scanf("%d%d",&H,&M);
    int a,b,c,d;
    a=H/10;
    b=H%10;
    c=M/10;
    d=M%10;
    
    if(a==0||a==1){
        if(0<=b&&b<=5){
            printf("%02d %02d",H,M);
        }else{
            printf("%02d %02d",(a+1)*10,0);
        }
    }else if(a==2){
        if(0<=c&&c<=3){
            printf("%02d %02d",H,M);
        }else{
            printf("%02d %02d",(H+1)%24,00);
        }
    }
    return 0;
}