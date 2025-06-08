#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}

int main() {
    //swapping elememts of 2 variables
    int x=10, y=20;
    printf("values before swapping x=%d,y=%d",x,y);
    swap(&x, &y);
    printf("Swap: x=%d y=%d\n", x, y);
// adding elements of array
    int arr[5] = {1,2,3,4,5}, sum=0;
    int *p = arr;
    printf("Array: ");
    for(int i=0; i<5; i++) {
        printf("%d ", *(p+i));
        sum += *(p+i);
    }
    printf("\nSum=%d\n", sum);
// print value and address of a variable
    int num=42;
    int *ptr = &num;
    printf("Address=%p Value=%d\n", (void*)ptr, *ptr);
//usage of double pointer to find the address of a pointer
    int **pptr = &ptr;
    printf("Double pointer value=%d\n", **pptr);

    return 0;
}