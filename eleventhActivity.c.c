# include <stdio.h>

int main(){
int number;
int i;
i=0;
printf("Put number\n");
scanf("%d",&number);
int factor;
printf("Enter the multiplier to stop from\n");
scanf("%d",&factor);
for(i=0 ; i<=factor ; i++){
  printf("%d x %d = %d\n",number, i, number*i);
}
return 0;
}

