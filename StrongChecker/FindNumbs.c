#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
    int counter = 1000, foundedNumb = 0;
    int ft, lt, squareOfNumbs;

    int *founded = malloc(10 * sizeof(int));
    if (founded == NULL) {
        printf("memory usage error!\n");
        return 1;
    }
    int allocatedSize = 10;

    while (counter < 10000) {
        ft = counter / 100;
        lt = counter % 100;
        squareOfNumbs = (ft + lt) * (ft + lt);

        if (squareOfNumbs == counter) {
            if (foundedNumb >= allocatedSize) {
                allocatedSize *= 2;
                founded = realloc(founded, allocatedSize * sizeof(int));
                if (founded == NULL) {
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
