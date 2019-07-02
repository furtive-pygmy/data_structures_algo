#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

int binary_search(int a[], int s, int v);

int main(int argc, char *argv[])
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("%d\n", binary_search(a, 10, 1));

    return EXIT_SUCCESS;
}

int binary_search(int a[], int s, int v)
{
    int min = 0;    
    int max = s;
    int mid;

    while (min <= max) {
        mid = (int)floor((min + max) / 2);
        if (a[mid] == v) return TRUE;
        if (a[mid] > v) {
            max = mid-1;
        } else {
            min = mid+1;
        }
    }

    return FALSE;
}