#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void binarySearch(int* numbers, int length ,int findingNumber, int count);

int main(void) {
    int numbers[] = {1,2,3,4,5,6,7,8,9,10,11,12};

    printf("What number do you want to find?");
    int findingNumber;
    scanf("%d",&findingNumber);

    int length = sizeof(numbers)/sizeof(int); //length of an integer array.

    int count = 0;
    binarySearch(numbers, length, findingNumber, count);
}

void binarySearch(int* numbers, int length, int findingNumber, int count) {
    count++;

    if(count > 10) {
        return;
    }

    int middle = length / 2;
    printf("The Middle number is %i.\n", numbers[middle]);
    printf("is number %i...?\n", findingNumber);

    if(numbers[middle] == findingNumber) {
        printf("Yes! we found it! Current count is %i\n", count);
        return;
    } else if (numbers[middle] > findingNumber) {
        printf("No! the number is lower than what we are looking for! Current count is %i\n", count);
        int firstHalf[middle];
        memcpy(firstHalf, numbers, sizeof(int)*middle);

        binarySearch(firstHalf, middle, findingNumber, count);

    } else if (numbers[middle] < findingNumber) {
        printf("No! the number is higher than what we are looking for! Current count is %i\n", count);
        int lastHalf[middle];
        memcpy(lastHalf, numbers + middle + 1, sizeof(int)*middle);

        binarySearch(lastHalf, middle, findingNumber, count);
    } else {
        printf("There is No %i... Current count is %i\n", findingNumber, count);
        return;
    }

}
