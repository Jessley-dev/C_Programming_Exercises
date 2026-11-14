# include <stdio.h>
int main(){
    int counter;
    int sum;
    sum=0;
    int limit;
    printf("From 1 up to which number do you want to see the the sum of all prime numbers between them\n");
    scanf("%d",&limit);
    for(int no=2 ; no<=limit ; no++){
            counter=0;
        for(int i=no ; i>=1 ; i--){
            if(no % i == 0){
                    ++counter;
            }
        }
        if(counter == 2){
            sum = sum + no;
        }
    }
    printf("The sum of prime numbers from 1 to %d is %d", limit, sum);

return 0;
}
