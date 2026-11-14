# include <stdio.h>
int main(){
int number;
printf("Put number\n");
scanf("%d", &number);
for(int factor=0;factor<=12;factor++){
    printf("%d x %d =%d\n", number, factor, number*factor);
}
return 0;
}
