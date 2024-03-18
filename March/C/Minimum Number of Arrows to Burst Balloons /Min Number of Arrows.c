int compare(const void *a, const void *b) {
    long long int diff = (long long int)(*(int**)a)[1] - (long long int)(*(int**)b)[1];
    if (diff < 0) return -1;
    else if (diff > 0) return 1;
    else return 0;
}

int findMinArrowShots(int** points, int pointsSize, int* pointsColSize) {
    // Sort the balloons based on their end coordinates
    qsort(points, pointsSize, sizeof(int*), compare);

    int arrows = 1;
    int prevEnd = points[0][1];

    // Count the number of non-overlapping intervals
    for (int i = 1; i < pointsSize; ++i) {
        if (points[i][0] > prevEnd) {
            arrows++;
            prevEnd = points[i][1];
        }
    }

    return arrows;
}

