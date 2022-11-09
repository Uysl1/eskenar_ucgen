#include<stdio.h>
int main(){
int s,i,n,b,t;
printf("satir sayisini giriniz");
scanf("%d",&s);
for(int n =0;n<=s;n++){
    for(int b=n;b<=s;b++){
    printf(" ");
    }
    for(int y=0;y<=n;y++){
    printf("*");
    printf(" ");
}

   printf("\n");
}



return 0;
}