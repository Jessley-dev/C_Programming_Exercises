# include<stdio.h>
int main(){
    int number;
    int reversed;
    int remainder;
    reversed =0;
    printf("Enter your number to be reversed\n");
    scanf("%d",&number);
    for(int no=number ; no>0 ; no=no/10){
        remainder = no%10;
        reversed = (reversed*10)+remainder;
    }
    printf("Your number when reversed is %d\n",reversed);
return 0;
}
