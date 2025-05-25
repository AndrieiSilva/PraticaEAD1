char* longestNiceSubstring(char* s) {
    int tam = 0, index = -1, n = strlen(s);
    int minus,maius;

    for ( int i = 0; i < n;i++ ) {

        minus = 0;
        maius = 0;

        for ( int j = i; j < n;j++ ) {
            if ( s[j] >= 'A' && s[j] <= 'Z' ) {
                maius |= ( 1 << (s[j] & 31) );
            }
            if ( s[j] >= 'a' && s[j] <= 'z' ) {
                minus |= ( 1 << (s[j] & 31) );
            }
            
            if ( (maius ^ minus) == 0 ) {
                if ( tam < j - i + 1 ) {
                    tam = j - i + 1;
                    index = i;
                }
            }
        }
    }

    if ( tam == 0 || index == -1 ) {
        return "";
    }

    char *res = (char *) calloc(tam + 1,sizeof(char));
    memcpy(res,&s[index],tam);
    return res;
}
