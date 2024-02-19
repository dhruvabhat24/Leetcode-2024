bool isPowerOfTwo(int n) {
    long power = 1;
    for (int k=0;k<31;k++){
        if (power == n){
            return true;
        }
        power*=2;
    }
    return false;
}

