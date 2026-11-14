# include <stdio.h>
int main(){
int l_year;
printf("A year is a leap year if it is divisible by 4 and if it is divisible by 100 it must be divisible by 400 too in order to be a leap year\n");
printf("Put year to check if leap year or ordinary year\n");
scanf("%d",&l_year);
if(l_year % 100 == 0 && l_year % 400 == 0){
    printf("This is a leap year");
}
else if(l_year % 4 == 0 && l_year % 100 != 0){
    printf("This year is a leap year");
}
else{
    printf("This year is an ordinary year");
}
return 0;
}
