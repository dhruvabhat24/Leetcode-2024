#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

// Merge function for merging two sorted arrays
void merge(int** arr, int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    int** L = (int**)malloc(n1 * sizeof(int*));
    int** R = (int**)malloc(n2 * sizeof(int*));

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i][0] <= R[j][0]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Free memory for temporary arrays
    free(L);
    free(R);
}

// Merge Sort function
void mergeSort(int** arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

// Function to find the room with the most meetings
int mostBooked(int n, int** meetings, int meetingsSize, int* meetingsColSize) {
    // Initialize arrays to keep track of end times and count of meetings in each room
    long long* endtime = (long long*)malloc(n * sizeof(long long));
    int* count = (int*)malloc(n * sizeof(int));

    // Initialize end times and counts to 0 for each room
    for (int i = 0; i < n; i++) {
        endtime[i] = 0;
        count[i] = 0;
    }

    // Sort meetings based on start times using merge sort
    mergeSort(meetings, 0, meetingsSize - 1);

    // Process each meeting
    for (int i = 0; i < meetingsSize; i++) {
        int start = meetings[i][0];
        int time = meetings[i][1] - start;
        int isdelay = 1;
        long long mindelay = LLONG_MAX;
        int indx;

        // Check available rooms
        for (int j = 0; j < n; j++) {
            if (endtime[j] <= start) {
                // Assign meeting to room if available without delay
                endtime[j] = meetings[i][1];
                count[j]++;
                isdelay = 0;
                break;
            }
            else {
                // Find room with earliest available time
                if (endtime[j] < mindelay) {
                    mindelay = endtime[j];
                    indx = j;
                }
            }
        }

        // Handle delayed meetings
        if (isdelay) {
            endtime[indx] += time;
            count[indx]++;
        }
    }

    // Find room with maximum count of meetings
    int ans = 0;
    for (int i = 0; i < n; i++) {
        printf("%d ", count[i]); // Output count of meetings in each room
        if (count[i] > count[ans]) {
            ans = i;
        }
    }

    // Free dynamically allocated memory
    free(endtime);
    free(count);

    // Return index of room with maximum count of meetings
    return ans;
}
