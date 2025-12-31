// abhishek bhanu singh 10046

// Q2.Max and min element of an array.

#include <stdio.h>
int main(){
    int n;
    printf("Enter numbers of element that you want to in array : ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0 ; i<n ; i++ ){
        printf("enter %d element of array : " ,i+1);
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    int min=arr[0];
    for(int i=1 ; i<n ; i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("max element of array : %d\n", max);
    printf("min element of array : %d\n", min);

    return 0;
}
//otput:-
// Enter numbers of element that you want to in array : 7
// enter 1 element of array : 8
// enter 2 element of array : 9
// enter 3 element of array : 6
// enter 4 element of array : 5
// enter 5 element of array : 3
// enter 6 element of array : 8
// enter 7 element of array : 5
// max element of array : 9
// min element of array : 3
