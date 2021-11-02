#include "search.h"
#include <stdbool.h>
#include <assert.h>

bool search(int a[], int n, int x)
{
    assert (n >= 0); // precondition

    if (n == 0) // simple case #1
        return false;

    else if (n > 0 && a[n-1] == x) // simple case #2
        return true;

    else // recursive step
        return search(a, n-1, x);
}