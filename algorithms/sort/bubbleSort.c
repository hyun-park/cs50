#include <stdio.h>

int main(void) {
    int isSorted = 0;

    int numbers[] = {26, 4, 44, 91, 78, 30, 76, 16, 35, 59, 1, 64, 43, 32, 93, 2, 9, 45, 8, 74, 14, 83, 80, 10, 89, 65, 20, 79, 97, 0, 31, 94, 41, 27, 96, 67, 57, 54, 37, 22, 28, 68, 86, 39, 69, 18, 70, 12, 40, 56, 58, 29, 42, 46, 47, 7, 50, 13, 66, 60, 81, 92, 61, 53, 34, 72, 38, 5, 84, 85, 95, 6, 33, 71, 19, 52, 48, 23, 90, 82, 17, 3, 15, 24, 99, 51, 11, 25, 88, 21, 77, 87, 55, 36, 73, 49, 62, 75, 98, 63};
    int originalLength = sizeof(numbers)/sizeof(int);
    int length = sizeof(numbers)/sizeof(int);
        printf("length %i\n, ", length);
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

                printf("currently numbers are...\n");
                for (int j = 0; j < length; j++){
                    printf("%i, ", numbers[j]);
                }
                printf("current count is: %i\n", count);
            }
        }
        length--;
        printf("isSorted is: %i\n", isSorted);
    }

    printf("final numbers are...\n");
    for (int i = 0; i < originalLength; i++){
        printf("%i, ", numbers[i]);
    }
    printf("\n");

}