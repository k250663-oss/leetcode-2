// Online C compiler to run C program online
#include <stdio.h>
void movezero(){
    int temp;
    int num;
    printf("enter numbers you would like to enter:");
    scanf("%d" ,&num);
    int arr[num];
    for(int i=0 ; i < num ;i++){
    printf("enter array element#%d: " , i+1);
    scanf("%d" ,&arr[i]);
}
for(int i=0 ; i<num ; i++){
printf("%d " , arr[i]);
}
for(int i = 0; i < num- 1; i++){
    for(int j = 0; j< num -1 - i;j++){
        if(arr[j] >arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1] = temp;}
            }
}
int j=0;
for(int i=0;i<num;i++){
    if(arr[i] != 0){
        arr[j]=arr[i];
        j++;
    }
}
 while(j < num){
        arr[j] = 0;
        j++;
    }
printf("transformed array:");
for(int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    movezero();

    return 0;
}
