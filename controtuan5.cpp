void swap(int* a,int* b){
    int c;
     c = *a;
    *a = *b;
    *b = c;
}
void multiply (int* n, int k){
    int* p = new int;
    *n = *n * k;
}
void cube(double* p){
    *p=*p * *p * *p;
}