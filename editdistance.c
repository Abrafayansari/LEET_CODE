

int minDistance(char* word1, char* word2) {
    int total = 0;
    char copy[20];  
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int flag = 0;

    for (int i = 0; i < len1; i++) {
        if (i < len2 && word1[i] != word2[i]) {
            if (word2[i] == word1[i + 1]) {
                if (word1[i] != word2[i - 1]) {
                    total++;
                    flag++;
                    int num = (i + 1 < 20) ? (i + 1) : 19;
                    strncpy(copy, word2, num);
                    copy[num] = '\0';
                }
            } else {
                if (strlen(copy) != len1 && word1[i + 1] == word2[i + 1] && flag >= 1) {
                    total++;    
                } else {
                    total++;    
                    if (i < 20) {
                        copy[i] = word2[i];
                    }
                }
            }
        }

        if (i > len2 - 1 && word2[len2 - 1] != word1[len2 - 1] && word1[i] != word2[i - 1]) {
            total++;
        }
    }

    return total;
}


    char word1[20] = "horse";
    char word2[20] = "ros";
     minDistance(word1, word2);
  
