#include<stdio.h>

int main(){
    int h,m,H,M;scanf("%d%d",&H,&M);
    int a,b,c,d;
    a=H/10;
    b=H%10;
    c=M/10;
    d=M%10;
    
    while(!((0<=(h=a*10+c)&&h<=23)&&(0<=(m=b*10+d)&&m<=59))){
        M++;
        if(M>=60){
            M=0;H++;
            if(H>=24){
                H=0;
            }
        }
        a=H/10;
        b=H%10;
        c=M/10;
        d=M%10;
    }
    printf("%02d %02d",H,M);
    return 0;
}