#include <stdio.h>
#include <stdlib.h>

long long merge(int arr[], int l, int mid, int r) {
    long long count = 0;

    int j = mid + 1;
    for (int i = l; i <= mid; i++) {
        while (j <= r && (long long)arr[i] > 2LL * arr[j]) {
            j++;
        }
        count += j - (mid + 1);
    }

    int *temp = (int *)malloc((r - l + 1) * sizeof(int));

    int i = l;
    j = mid + 1;
    int k = 0;

    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= r)
        temp[k++] = arr[j++];

    for (i = l; i <= r; i++)
        arr[i] = temp[i - l];

    free(temp);

    return count;
}

long long mergeSort(int arr[], int l, int r) {
    if (l >= r)
        return 0;

    int mid = l + (r - l) / 2;

    long long count = 0;

    count += mergeSort(arr, l, mid);
    count += mergeSort(arr, mid + 1, r);
    count += merge(arr, l, mid, r);

    return count;
}

int main() {
    int n;

    // Read number of elements
    scanf("%d", &n);

    // Allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%lld\n", mergeSort(arr, 0, n - 1));

    free(arr);

    return 0;
}