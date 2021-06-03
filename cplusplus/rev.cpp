#include <cstdio>

void reverse(int * arr, int length);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("Reversing array...\n");
    reverse(arr, 6);
    printf("%d\n", arr[0]);
    return 0;
}

/* Reverses an integer array in-place. */
void reverse(int * arr, int length) {
    int * start = arr;                              //Set start to be the address of position-0 of the array
    int * end = arr + (length - 1);                 //Set end to be the address of the last index of the array
    
    while (start != end && end > start) {           //Swap elements, incrementing/decrementing until start/end meet in the middle,
        int temp = *start;                          //or they swap sides
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
}