#include "str.h"

size_t strFind(const char* string, const char* substring)
{
    return (size_t)strstr(string, substring) - (size_t)string;
}