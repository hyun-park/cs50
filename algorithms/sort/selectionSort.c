#include <stdio.h>

int main(void) {
    int numbers[] = {
        2, 0, 1, 3
    };
    int length = sizeof(numbers)/sizeof(int);
    int count = 0;

    for(int i = 0; i<length; i++) {

        int smallest = numbers[i];
        int targetIdx = i;
        for(int j=i; j<length-1;j++ ) {
            count++;

            if(numbers[j+1] < smallest) {
                smallest = numbers[j+1];
                targetIdx = j+1;
            }
        }
        int temp = numbers[i];

        numbers[i] = smallest;
        numbers[targetIdx] = temp;
    }

    printf("count: %i\n",count);
    printf("final numbers are...\n");
    for (int i = 0; i < length; i++){
        printf("%i, ", numbers[i]);
    }
    printf("\n");
}