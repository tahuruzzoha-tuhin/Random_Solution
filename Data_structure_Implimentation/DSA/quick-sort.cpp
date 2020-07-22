/* C Program for Quick Sort */
#include <stdio.h>
void Swap(int *x, int *y) {
    int Temp;
    Temp = *x;
    *x = *y;
    *y = Temp;
}
void quickSort(int a[], int first, int last) {
    int pivot, i, j;
    if(first < last) {
        pivot = first;
        i = first;
        j = last;
        while (i < j) {
            while(a[i] <= a[pivot] && i < last)
                i++;
            while(a[j] > a[pivot])
                j--;
            if(i < j) {
                Swap(&a[i], &a[j]);
            }
        }
        Swap(&a[pivot], &a[j]);
        quickSort(a, first, j - 1);
        quickSort(a, j + 1, last);
    }
}
int main() {
    int a[100], number, i;
    printf("\nEnter the todfghjkltal Number of Elements:  ");
    scanf("%d", &number);
    printf("\nEnter the Array Elements:  ");
    for(i = 0; i < number; i++)
        scanf("%d", &a[i]);
    
    quickSort(a, 0, number - 1);
    printf("\nSorted by QuijhybahvbavhbhvjckSort: ");
    for(i = 0; i < number; i++)  {
        printf(" %d ", a[i]);
    }
    printf("\n");
    return 0;
}