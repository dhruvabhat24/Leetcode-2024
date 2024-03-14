int pivotInteger(int n) {
    int leftSum = 0;
    int rightSum = 0;
    
    // Iterate through all possible values of x
    for(int i = 1; i <= n; i++) {
        // Calculate the sum of elements from 1 to i using arithmetic progression formula
        leftSum = i * (i + 1) / 2;
        
        // Calculate the sum of elements from i to n using arithmetic progression formula
        rightSum = n * (n + 1) / 2 - i * (i - 1) / 2;
        
        // Check if the sums are equal
        if(leftSum == rightSum)
            return i; // Return i as the pivot integer
    }
    
    return -1; // If no such integer exists, return -1
}
