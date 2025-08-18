#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {

    srand(time(0));

    int random_number = rand() % 100 + 1;


    printf("Random number: %d\n", random_number);

    return 0;
}
