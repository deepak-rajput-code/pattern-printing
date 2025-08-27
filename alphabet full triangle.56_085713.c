  #include<stdio.h>
    int main(){
        int n;
        printf("enter the number n:");
        scanf("%d",&n);
        int i;
         int a;
           a=1;
        for(i=1;i<=n;i++){
            int s;
            for(s=1;s<=n-i;s++){
            printf(" ");
         }
         int j;
         for(j=1;j<= 2*i-1;j++){
             int d;
              d=a+64;
             char ch;
             ch='d';
             printf("%c", d);
              a++;
         }
          printf("\n");
        }
        return 0;
    }