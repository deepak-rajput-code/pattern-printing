    #include<stdio.h>
      int main(){
          int n;
          printf("enter the number n:");
          scanf("%d",&n);
          
          int i;
          for(i=0;i<=n;i++){
              
               int s;
              s=0;
              while(s<=i){
                  printf("   ");
                  s++;
              }
              int j;
              for(j=1;j<=n-i;j++){
                  printf(" * ");
              }
              
              
              printf("\n");
          }
          return 0;
      }