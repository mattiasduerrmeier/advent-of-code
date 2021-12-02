#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE * file = fopen("./input.txt", "r");
    char str[10];
    int x;
    int horizontal = 0;
    int depth = 0;
    int aim = 0;
    
    while(fscanf(file, "%s %d", str, &x) != EOF) {
        if (strcmp(str, "forward") == 0) {
            horizontal += x; 
            depth += (aim * x);
        }
        if (strcmp(str, "up") == 0) aim -= x; 
        if (strcmp(str, "down") == 0) aim += x; 
    }

    printf("result: %d\n", horizontal * depth);
    fclose(file);
    return 0;
}
