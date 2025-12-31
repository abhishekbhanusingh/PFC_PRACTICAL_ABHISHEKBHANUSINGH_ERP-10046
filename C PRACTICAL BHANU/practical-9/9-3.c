// abhishek bhanu singh 10046

// Q3. Sum of all even elements of an array.

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
    int sum=0;
    for(int i=0 ; i<n ; i++ ){
        if(arr[i]%2==0){
            sum=sum+arr[i];
        }
    }
    printf("sum of all even number in array : %d", sum);
}
// OUTPUT:-
// enter 1 element of array : 1
// enter 2 element of array : 2
// enter 3 element of array : 3
// enter 4 element of array : 4
// enter 5 element of array : 5
// sum of all even number in array : 6
