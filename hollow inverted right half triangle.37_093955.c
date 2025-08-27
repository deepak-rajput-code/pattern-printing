     #include<stdio.h>
      int main(){
          int n;
          printf("enter the number n:");
          scanf("%d",&n);
          
          int i;
          for(i=1;i<=n;i++){
               int j;
               for(j=1;j<=n-i;j++){
                  if(i==1 || j==1 || j==n-i){
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