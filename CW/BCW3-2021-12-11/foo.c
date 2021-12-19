int foo(int);
int bar(int n);

int foo(int n) {
    if ( n <= 0 ) {
        return 1;
    }
    return n + bar(n-1);
}

int bar(int n) {
    if ( n <= 0 ) {
        return 42;
    }
  