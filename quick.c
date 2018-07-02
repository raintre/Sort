typedef int value_type; /* type of key to sort */

value_type med3(value_type x, value_type y, value_type z)
/* Return intermediate value of x, y, z */
{
    if (x < y)
        if (y < z) return y; else if (z < x) return x; else return z; else
        if (z < y) return y; else if (x < z) return x; else return z;
}

/* Quick sort
 * a: Array to be sorted
 * left: the start position of the data to be sorted
 * right: End position of data to be sorted
 */
void quicksort(value_type a[], int left, int right)
{
    if (left < right) {
        int i = left, j = right;
        value_type tmp, pivot = med3(a[i], a[i + (j - i) / 2], a[j]); /* Overflow occurs when (i + j) / 2 */
        while (1) { /* a [] into pivot or more and the following collections */
            while (a[i] < pivot) i++; /* Find a position where a [i]> = pivot */
            while (pivot < a[j]) j--; /* Search for the position where a [j] <= pivot */
            if (i >= j) break;
            tmp = a[i]; a[i] = a[j]; a[j] = tmp; /* Exchange a [i], a [j] */
            i++; j--;
        }
        quicksort(a, left, i - 1);  /* Sort recursively the split left */
        quicksort(a, j + 1, right); /* Sort recursively the split right */
    }
}