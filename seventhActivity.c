# include <stdio.h>
int main(){
int no;
printf("Enter number:\n");
scanf("%d", &no);
int i;
i=1;
int product;
product=1;
while(i<=no){
    product=product*i;
    ++i;
}
printf("Your factorial is %d",product);
return 0;
}
