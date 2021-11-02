#include "sum.h"
#include <assert.h>

int sum(int a[], int n)
{
    assert (n >= 0); // precondition

    if (n == 0) // simple case
        return 0;
    else // recursive step
        return a[n-1] + sum(a,n-1);
}