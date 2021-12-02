#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * file = fopen("./input.txt", "r"); 
    int one = 0;
    int two = 0;
    int three = 0;
    int oldSum = 0;
    int newSum = 0;
    int counter = 0;

    fscanf(file,"%d %d %d", &one, &two, &three);

    oldSum = one + two + three;
    one = two;
    two = three;

    while(fscanf(file, "%d", &three) != EOF) {
        newSum = one + two + three;
        if(oldSum < newSum) {
            counter++;
        }
        one = two;
        two = three;
        oldSum = newSum;
    }
    printf("%d\n", counter);
    fclose(file);
    return 0;
}
