void reverse(char *s) {
    char* s1 = s , *s2 = s+strlen(s)-1;
    while(s1 < s2){
        char temp = *s1;
        *s1++ = *s2;
        *s2-- = temp;
        //s2--;
      //  s1++;
    }
}
void rFilter(char *s) {
    // Your code goes here
    int len = strlen(s);
    char* s1 = s+len-1;
    while(*(s1) >= 0  && *(s1) <=64 || *(s1) >=91 && *(s1) <= 96 || *(s1) >= 123){
        *(s1)='_';
        s1--;
    }
}