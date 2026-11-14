# include <stdio.h>
int main(){
int size;
printf("Enter the size of your array\n");
scanf("%d",&size);
int array[size];
printf("Enter the array elements one by one\n");
for(int i=0;i<size;i++){
    scanf("%d",&array[i]);
}
int s_element=array[0];
for(int i=1;i<size;i++){
    if(array[i]<s_element){
        s_element=array[i];
    }
}
printf("Your smallest element is %d",s_element);
return 0;
}
