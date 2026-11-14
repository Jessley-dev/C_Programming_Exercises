# include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the array elements\n");
    for(int i=0 ; i<size ; i++){
        scanf("%d",&array[i]);
    }
    int g_number;
    int fq_counter;
    fq_counter=0;
    printf("Enter the element in the array in the array to see its frequency\n");
    scanf("%d",&g_number);
    for(int i=0 ; i<size ; i++){
        if(g_number == array[i]){
                fq_counter = fq_counter + 1;
        }
    }
    printf("Your element has a frequency of %d times in your given array\n",fq_counter);
    if(fq_counter == 0){
        printf("This means that the element entered actually is not in the array elements given\n");
}
return 0;
}
