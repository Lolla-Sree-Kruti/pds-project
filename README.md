# pds-project
#include <stdio.h>
#include <unistd.h>  // to delay and show the sorting step by step

#define DELAY 200000  // Delay time in microseconds (0.2 seconds)

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        for (int j = 0; j < arr[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    usleep(DELAY);  // DELAY: to show the sorting process slowly
}


// bubble sorting visualizer 
void bubbleSortingVisualizer(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                // Print the array after each swap
                printf("Step %d-%d:\n", i + 1, j + 1);
                printArray(arr, n);
            }
        }
    }
}


// Insertion sorting visualizer
void insertionSortingVisualizer(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // move greater value than key one position ahead of current position 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;

            // Print the array after each shift
            printf("Inserting %d:\n", key);
            printArray(arr, n);
        }
        arr[j + 1] = key;

        // Print the array after placing the key in the correct position
        printf("Placed %d:\n", key);
        printArray(arr, n);
    }
}

int main() {
    int k;
    printf ("enter the size of array:\n");
    scanf ("%d", &k);
    int arr[k];
    printf ("enter the values:\n");
    for (int i=0; i<k ; i++){
    scanf ("%d" , &arr[i]); // Array to be sorted
}
    printf("Initial array:\n");
    printArray(arr, k);
    char type,b,i;
    printf ("enter the type of sorting required\nb=bubble sort\ni=insertion sort\n");
    scanf (" %c" , &type);
    
if (type == 'b'){
    // bubble sorting visualizer function
    bubbleSortingVisualizer(arr, k);

    printf("Sorted array:\n");
    printArray(arr, k);}
else {
 // insertion sorting visualizer function
    insertionSortingVisualizer(arr, k);

    printf("Sorted array:\n");
    printArray(arr, k);
}
    return 0;
}
