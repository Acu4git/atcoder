#include<stdio.h>
#include<stdlib.h>
 
int main(){
    char s[11];scanf("%s",s);
    if(s[0]=='1'){
        puts("No");
        exit(0);
    }
    /*列ごとのピンの有無を0（倒れている）、1（立っている）で配列にする*/
    int std[7];
    std[0]=(s[6]=='1');
    std[1]=(s[3]=='1');
    std[2]=((s[1]=='1')||(s[7]=='1'));
    std[3]=((s[0]=='1')||(s[4]=='1'));
    std[4]=((s[2]=='1')||(s[8]=='1'));
    std[5]=(s[5]=='1');
    std[6]=(s[9]=='1');
 
    int i,j,k;
    for(i=0;i<7;i++){
        for(j=0;j<i;j++){
            if(std[i]&&std[j]){
                for(k=j+1;k<i;k++){
                    if(!std[k]){
                        puts("Yes");
                        return 0;
                    }
                }
            }
        }
    }
    puts("No");
    return 0;
}