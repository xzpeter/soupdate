#include <stdio.h>
#include <unistd.h>
#include "testlib.h"

int main(void)
{
    int i = 0;

    while (1) {
        sleep(1);
        printf("%d: ", i++);
        test_func();
    }
}
