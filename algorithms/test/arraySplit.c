#include <stdio.h>
#include <memory.h>

int main(void) {
    int array[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int length = sizeof(array)/sizeof(int);
    int middle = length / 2;


    printf("Middle\n");
    printf("%i\n", middle+1);

    int firstHalf[middle];
    memcpy(firstHalf, array, sizeof(int)*middle);
    printf("firstHalf\n");
    for (int i = 0; i < middle; i++){
        printf("%i \n", firstHalf[i]);
    }

    int lastHalf[middle];
    memcpy(lastHalf, array + middle + 1, sizeof(int)*middle);
    printf("lastHalf\n");
    for (int i = 0; i < middle - 1; i++){
        printf("%i \n", lastHalf[i]);
    }
}