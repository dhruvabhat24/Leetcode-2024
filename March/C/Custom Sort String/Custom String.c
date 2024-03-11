char* customSortString(char* order, char* s) {
    char sCount[26]={0};
    int i = 0 , j , k=0;
    while(s[i] != '\0')
        sCount[s[i++]- 'a']++;
    
    for(i = 0; i < strlen(order); i++){
        char temp = order[i];
        if(sCount[temp - 'a'] != 0){
            for(j = 0; j < sCount[temp - 'a']; j++)
                s[k++] = temp;
            sCount[temp - 'a'] = 0;    
        }
    }

    for(i = 0;i < 26; i++){
        if(sCount[i] != 0){
            for(j = 0; j < sCount[i]; j++)
                s[k++] = 'a' + i;
        }
    }

    return s;
}

