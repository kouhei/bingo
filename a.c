#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("RAND_MAX: %d\n", RAND_MAX);

    // 0から2147483647までの乱数を発生
    // for(int i = 0; i < 3; i++) {
    //     printf("%d\n", rand());
    // }

    // 1から10までの乱数を発生
    for(int i = 0; i < 3; i++) {
        printf("%d\n", rand() % 50 + 1);
    }

    return 0;
}
