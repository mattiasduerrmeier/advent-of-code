#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * file = fopen("./input.txt", "r"); 
    int one = 0;
    int two = 0;
    int counter = 0;
    fscanf(file,"%d", &one);
    while(fscanf(file, "%d", &two) != EOF) {
        if(one < two) {
            counter++;
        }
        one = two;
    }
    printf("%d\n", counter);
    fclose(file);
    return 0;
}
