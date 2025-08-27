        #include<stdio.h>
      int main(){
          int n;
          printf("enter the number n:");
          scanf("%d",&n);
          
          int i;
          for(i=1;i<=n;i++){
              
              int s;
              for(s=1;s<=n-i;s++){
                  printf(" ");
              }
               int j;
               for(j=1;j<=2*i-1;j++){
                   if(j==1 || i==n || j==2*i-1){
                       printf("*");
                   }
                   else{
                       printf(" ");
                   }
                }
                   
             printf("\n");
          }
          return 0;
      }