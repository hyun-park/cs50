#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void shuffle(int * index,int nMax);

int main(void) {
    int numbers[12] = {1,2,3,4,5,6,7,8,9,10,11,12};

    shuffle(numbers, 12);

    int count = 0;

    for (int i = 0; i < 12; i++) {

        printf("The number is %i.\n", numbers[i]);

        printf("is number 4...?\n");

        count++;
        if(numbers[i] == 4) {
            printf("Yes! we found it! Current count is %i\n", count);
            break;
        } else {
            printf("No. Current count is %i\n", count);
        }
    }
}


void shuffle(int * index,int nMax){
    int i, n;

    int nTmp;

    srand ( time(NULL) );

    for(i = nMax-1; i>=0; i--){
        n = rand()%nMax;
        nTmp = index[i];
        index[i]= index[n];
        index[n]= nTmp;
    }
}