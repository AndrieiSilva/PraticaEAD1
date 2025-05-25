char* longestNiceSubstring(char* s) {
    int tamanho_string;
    int count1=0,count2=0, i = 0, j = 0,flag = 0;
    char a,b;
    char bucket1[100], bucket2[100];

    if (strlen(s) == 1) {
        return "";
    }

    for (i=0; s[i] != '\0'; i++);
        tamanho_string = i;

    for (i=0;i < tamanho_string;i=i+2) {
        a = s[i];
        b = s[i+1];

        if (a == b || abs(a + 26) == abs(b) || abs(a - 26) == abs(b)) {
            if (flag == 0) {
                bucket1[count1] = a;
                bucket1[count1+1] = b;
                count1 = count1+2;
            } else {
                if (flag == 1) {
                bucket2[count2] = a;
                bucket2[count2+1] = b;
                count2 = count2+2;
                }
            }
        } else {
            if (count1 > count2){
                flag = 1;
            } else {
                if (count2 > count1) {
                    flag = 0;
                } else {
                    if (count1 == count2) {
                        flag = 1;
                    }
                }
            }
        }
    }

    if (count1 == count2) {
        return bucket1;
    } else {
        if (count2 > count1) {
            return bucket2;
        } else {
            return bucket1;
        }
    }
}
