       #include<stdio.h>
     int main(){
         int n;
         printf("enter the number n:");
         scanf("%d",&n);
         
         int i;
         for(i=1;i<=n;i++){
             int s;
             for(s=1;s<=2*i-1;s++){
                 printf(" ");
             }
             int j;
             for(j=1;j<=n;j++){
               
                  printf(" * ");
               
             }
             printf("\n");
         }
         return 0;
     }