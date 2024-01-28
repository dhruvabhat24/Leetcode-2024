#include<stdio.h>
#include<stdlib.h>


int numSubmatrixSumTarget(int** matrix, int matrixSize, int* matrixColSize, int target) {
       int** list = malloc(sizeof(int*)*matrixSize);
    for (int i = 0 ; i < matrixSize ; i++){
        list[i] = calloc((*matrixColSize),sizeof(int));
    }
    for (int i = 0 ; i < matrixSize ; i++){
        for (int j = 1 ; j < *matrixColSize ; j++){
            matrix[i][j] += matrix[i][j-1];
        }
    }
    int ans = 0;
    int count = 0;
    while (count < matrixSize){
        for (int i = 0 ; i+count < matrixSize ; i++){
            for (int j = 0 ; j < *matrixColSize ; j++){
                list[i][j] += matrix[i+count][j];
                if (list[i][j] == target){
                    ans++;
                }
            }
        }

        for (int i = 0 ; i+count < matrixSize ; i++){
            for (int k = 0 ; k < *matrixColSize ; k++){
                for (int j = k+1 ; j < *matrixColSize ; j++){
                    if (list[i][j]-list[i][k] == target){
                        ans++;
                    }
                }
            }
        }
        count++;
    }
    for (int i = 0 ; i < matrixSize ; i++){
        free(list[i]);
    }
    free(list);
    return ans;
}
