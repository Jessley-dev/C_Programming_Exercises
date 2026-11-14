# include <stdio.h>
int main(){
    int size;
    printf("Enter the size of your array\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter your array elements one by one\n");
    for(int i=0 ; i<size ; i++){
        scanf("%d", &array[i]);
    }
    int largest;
    largest=array[0];
    int s_largest;
    for( int i=0 ; i<size ; i++){
        if(array[i] > largest){
            s_largest = largest;
            largest = array[i];
        }
        else if(array[i] < largest && array[i] > s_largest){
            s_largest = array[i];
        }
    }
    printf("Your second largest number in your given array is %d",s_largest);
return 0;
}
