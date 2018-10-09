#include <stdio.h>

int main() {
    printf("Size of a short is %d\n", sizeof(short));
    printf("Size of a int is %d\n", sizeof(int));
    printf("Size of a long is %d\n", sizeof(long));
    printf("Size of a double is %d\n", sizeof(double));
    printf("Size of a float is %d\n", sizeof(float));
    printf("Size of a char is %d\n\n\n", sizeof(char));

    int my_array[] = {1, 23, 17, 4, -5, 100};
    int *ptr;

    ptr = &my_array[0];

    for (int i = 0; i < 6; i++) {
        printf("my_array[%d] = %d   ", i, my_array[i]);
        printf("ptr + %d = %d\n", i, *(ptr + i));
    }
    printf("\n\n\n");
    for (int i = 0; i < 6; i++) {
        printf("my_array[%d] = %d   ", i, my_array[i]);
        printf("ptr + %d = %d\n", i, *ptr++);
    }

    printf("\n\n\n");

    for (int i = 0; i < 6; i++) {
        printf("my_array[%d] = %d   ", i, my_array[i]);
        printf("ptr + %d = %d\n", i, *(++ptr));
    }
    return 0;
}
