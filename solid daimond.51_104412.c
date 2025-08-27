      #include<stdio.h>
     int main(){
         int n;
         printf("enter the odd number n:");
         scanf("%d",&n);
         
         int i;
         for(i=1;i<=n/2;i++){
             int j;
             for(j=1;j<=n/2+1-i;j++){
                 printf(" ");
             }
             int k;
             for(k=1;k<=2*i-1;k++){
                 printf("*");
             }
             printf("\n");
         }
         
         int x;
         for(x=1;x<=n;x++){
             printf("*");
         }
         printf("\n");
         int r;
         for(r=1;r<=n/2;r++){
             int y;
             for(y=1;y<=r;y++){
             printf(" ");
         }
         int h;
         for(h=1;h<=n-2*r ;h++){
             printf("*");
         }
         printf("\n");
         }
         return 0;
     }