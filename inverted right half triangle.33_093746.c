    // right half triangle
     #include<stdio.h>
       int main(){
           int n;
           printf("enter the number n:");  //here n is number of rows
           scanf("%d",&n);
           
           int i;
           for(i=1;i<=n;i++){
               int j;
               for(j=1;j<=n-i;j++){
                   printf(" * ");
               }
               printf("\n");
           }
           return 0;
       }