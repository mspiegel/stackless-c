goto void foo(void);
void bar(void);
void baz(void);

goto void foo(void) {
    bar();
}

void bar(void) {
    baz();
}

void baz(void) {
    foo();
}