#include "draft.c"
#include <stdio.h>

int main() {
    int x = 0, y = 0;

    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("%d %d", x, y);
}