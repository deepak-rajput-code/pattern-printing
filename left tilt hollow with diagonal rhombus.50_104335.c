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
              if(i==1||j==1||j==n||i==n ||i==j||j==n-i+1){ //i==j and j==n-i+1 for daigonal
                  printf(" * ");
              }
              else{
                  printf("   ");
              }
              
             }
             printf("\n");
         }
         return 0;
     }