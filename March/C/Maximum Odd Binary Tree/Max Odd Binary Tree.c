char* maximumOddBinaryNumber(char* s){
int point = 0 , nos = 0;
    // char str[strlen(s)] = {0};
    for( int ind = 0 ; ind < strlen(s) - 1 ; ind++){
        if(s[ind] == '1') {
            if( nos == 0 && s[strlen(s)-1] == '0' ) {
                s[strlen(s)-1] = '1';
                nos++;
                s[ind] = '0';
            }
            else {
                if( strlen(s) == 2 ) return s;
                s[ind] = '0';
                s[point] = '1';
                point++;
            }
        }
    }
    return s;
}
