char findTheDifference(char * s, char * t){
    int sum_s = 0;
    while (*s != '\0') {
        sum_s += *s;
        s++;
    }
    
    int sum_t = 0;
    while (*t != '\0') {
        sum_t += *t;
        t++;
    }
    
    return (char)sum_t - sum_s;
}