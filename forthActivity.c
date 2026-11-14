# include <stdio.h>
int main(){
int size;
int sum;
sum=0;
printf("Put size of your array\n");
scanf("%d",&size);
int array[size];
printf("Put your array elements one by one\n");
for(int i=0; i<size; i++){
scanf("%d", &array[i]);
}
for(int i=0;i<size; i++){
  sum = sum + array[i];
}
printf("The sum of your numbers is %d\n",sum);
return 0;
}
