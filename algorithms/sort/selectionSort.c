#include <stdio.h>

// TODO
// 다시 짜기
int main(void) {
    int numbers[] = {26, 4, 44, 91, 78, 30, 76, 16, 35, 59, 1, 64, 43, 32, 93, 2, 9, 45, 8, 74, 14, 83, 80, 10, 89, 65, 20, 79, 97, 0, 31, 94, 41, 27, 96, 67, 57, 54, 37, 22, 28, 68, 86, 39, 69, 18, 70, 12, 40, 56, 58, 29, 42, 46, 47, 7, 50, 13, 66, 60, 81, 92, 61, 53, 34, 72, 38, 5, 84, 85, 95, 6, 33, 71, 19, 52, 48, 23, 90, 82, 17, 3, 15, 24, 99, 51, 11, 25, 88, 21, 77, 87, 55, 36, 73, 49, 62, 75, 98, 63};
    int length = sizeof(numbers)/sizeof(int);
    int count = 0;

    int smallestIdx = 0;
    for(int i = smallestIdx; i<length; i++) {

        int smallest = numbers[i];
        int targetIdx;
        for(int j=i; j<length-1;j++ ) {
            count++;

            if(smallest > numbers[j+1]) {
                smallest = numbers[j+1];
                targetIdx = j+1;
            }
        }
        int temp = numbers[i];
        numbers[i] = smallest;
        numbers[targetIdx] = temp;

        smallestIdx++;
    }

    printf("count: %i\n",count);
    printf("final numbers are...\n");
    for (int i = 0; i < length; i++){
        printf("%i, ", numbers[i]);
    }
    printf("\n");
}