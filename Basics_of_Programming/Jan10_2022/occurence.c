#include <stdio.h>

void count(int number){
  int arrkey[10],value = 0;
  for(int i=0 ;i<=9;i++){
    arrkey[i] = 0;
  }
  while( number > 0){
    value = number%10;
    arrkey[value]++;
    number /=10; 
  }
  printf("Digit\tCount\n");
  for(int cnt = 0 ; cnt <=9;cnt++){
    if(arrkey[cnt] !=0 )
    printf("%d\t\t%d\n",cnt,arrkey[cnt]);
  }
}

int main(void) {
  int number,arrkey[10];
  printf("Enter number: ");
  scanf("%d",&number);
  count(number);
  
}