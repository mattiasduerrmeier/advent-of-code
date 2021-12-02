#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE * file = fopen("./input.txt", "r");
    char str[10];
    int x;
    int forward = 0;
    int depth = 0;
    
    while(fscanf(file, "%s %d", str, &x) != EOF) {
        if (strcmp(str, "forward") == 0) forward += x; 
        if (strcmp(str, "up") == 0) depth -= x; 
        if (strcmp(str, "down") == 0) depth += x; 
    }

    printf("result: %d\n", forward * depth);
    fclose(file);
    return 0;
}
