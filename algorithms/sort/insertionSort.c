#include <stdio.h>

// TODO 모르겠다...
int main(void) {
    int numbers[] = {
        1,3,2,0
    };
    int length = sizeof(numbers)/sizeof(int);
    int count = 0;

    for(int i = 0; i<length; i++) {
        int currentNumberIdx = i;
        for(int j=i; j>=0; j--) {
            count++;
            printf("i is: %i\n", i);
            printf("numbers[i] is: %i\n", numbers[i]);
            printf("j is: %i\n", j);
            printf("numbers[j] is: %i\n", numbers[j]);
            if(numbers[currentNumberIdx] < numbers[j]) {

                int temp;
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;

                currentNumberIdx--;
            } else {
            }
        }
    }

    printf("count: %i\n",count);
    printf("final numbers are...\n");
    for (int i = 0; i < length; i++){
        printf("%i, ", numbers[i]);
    }
    printf("\n");
}