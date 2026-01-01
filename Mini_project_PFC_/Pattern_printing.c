#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of rows:\n");
    printf("pattern type 1\n:");
    scanf("%d",&n);
     for(int i=1;i<=n;i++){     //row
        for(int j=1;j<=i;j++){  //column
           
        printf("%d",j);
       
        }printf("\n");
        }
printf("Pattern type 2:\n");
        for(int i=1;i<=n;i++){     //row
        for(int j=1;j<=i;j++){  //column
           
        printf("%d",i);
       
        }printf("\n");
        }
       
        

        return 0;
}
// NAME : ASHUTOSH SINGH
// ERP:10326
// OUTPUT:-
// Enter the value of rows:
// pattern type 1
// :7
// 1
// 12
// 123
// 1234
// 12345
// 123456
// 1234567
// Pattern type 2:
// 1
// 22
// 333
// 4444
// 55555
// 666666
// 7777777O
// ashutoshsingh15agmail.com@Ashutoshs-MacBook-Air-3 PFC_MINI_PROJECT % 