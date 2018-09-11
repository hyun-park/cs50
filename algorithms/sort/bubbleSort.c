#include <stdio.h>

int main(void) {
    int isSorted = 0;
    int numbers[] = {
        2, 0, 1, 3
    };
    int originalLength = sizeof(numbers)/sizeof(int);
    int length = sizeof(numbers)/sizeof(int);
    int count = 0;

    while(!isSorted) {
        isSorted = 1;
        for(int i = 0; i<length-1; i++) {
            if(numbers[i] > numbers[i+1]) {
                count++;

                int temp;
                temp = numbers[i+1];
                numbers[i+1] = numbers[i];
                numbers[i] = temp;
                isSorted = 0;
            }
        }
        length--;
    }

    printf("count: %i\n", count);
    printf("final numbers are...\n");
    for (int i = 0; i < originalLength; i++){
        printf("%i, ", numbers[i]);
    }
    printf("\n");

}