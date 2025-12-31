
//abhishek bhanu singh 10046

// Q1.Reverse an array.

#include <stdio.h>
int main(){

    int n;
    printf("Enter numbers of element that you want to in array : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n ; i++){
        printf("enter %d element of array : ", i+1);
        scanf("%d",&arr[i]);
    }
    int temp;
    for (int i = 0; i < n / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
    }
    printf("reversed array : \n");
    for(int i=0 ; i<n ; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}

//output:-

// Enter numbers of element that you want to in array : 4
// enter 1 element of array : 1
// enter 2 element of array : 2
// enter 3 element of array : 3
// enter 4 element of array : 4
// reversed array : 
// 4
// 3
// 2
// 1
