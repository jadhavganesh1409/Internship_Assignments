#include <stdio.h>
#include<math.h>
int main() {
 int number;
 printf("Enter number: ");
 scanf("%d",&number);
 for(int i=2;i<=number;i++){
    int sum=1;
    for(int j=2;j<=i/2;j++){
       if(i%j == 0){
        sum+=j;
    }
   }
   if(sum == i){
        printf("%d\t",i);
    }
   }
 return 0;
}