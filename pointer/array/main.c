#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // To know what is the address of n element in array the formula is:
    // m + k * B
    // where m is the memory_address k the element and B the size in Bytes
    // so to know where is the address of the element 2 with an address of 140737488346748 for the first element we do as follow:
    // 140737488346748 + 2 * 4 (integer takes 4 bytes)
    // = 140737488346756
    int a[] = {0, 1, 2};

    // We change the value of a by pointing on it
    int *b = a; 
    *b = 9;
    *(b+1) = 10; 
    *(b+2) = 11; 

    return EXIT_SUCCESS;
}