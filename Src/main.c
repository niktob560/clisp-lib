#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

int main()
{
    char* str = "very big string";
    char* sstr = "string";

    printf("%ld\n", strFind(str, sstr));
    return 0;
}