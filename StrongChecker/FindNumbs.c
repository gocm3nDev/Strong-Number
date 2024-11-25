#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int counter = 1000, foundNumb = 0;
    int ft, lt, squareOfNumbs;

    int *found = malloc(10 * sizeof(int));
    if (found == NULL) {
        printf("memory usage error!\n");
        return 1;
    }
    int allocatedSize = 10;

    while (counter < 10000) {
        ft = counter / 100;
        lt = counter % 100;
        squareOfNumbs = (ft + lt) * (ft + lt);

        if (squareOfNumbs == counter) {
            if (foundNumb >= allocatedSize) {
                allocatedSize *= 2;
                found = realloc(found, allocatedSize * sizeof(int));
                if (found == NULL) {
                    printf("memory expansion failed!\n");
                    return 1;
                }
            }
            founded[foundedNumb] = counter;
            foundedNumb++;
        }
        counter++;
    }
    
    printf("numbers that follow the rule:\n");
    for (i = 0; i < foundedNumb; i++) {
        printf("%d\n", founded[i]);
    }

    free(founded);

    return 0;
}
