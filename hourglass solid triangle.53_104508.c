      #include<stdio.h>
   int main(){
       int n;
       printf("enter the odd number n:");
       scanf("%d",&n);
        int i;
       for(i=1;i<=n/2+1;i++){
           int s;
           for(s=1;s<=i-1;s++){
               printf(" ");
           }
           int j;
           for(j=1;j<=n-2*i+2;j++){
               printf("*");
           }
           printf("\n");
        }
         int r;
        for(r=1;r<=n/2;r++){
             int s;
            for(s=1;s<=n/2-r;s++){
                printf(" ");
            }
             int h;
            for(h=1;h<=2*r+1;h++){
                printf("*");
            }
            printf("\n");
         }
       return 0;
   }