void foo(void);
void bar(void);
goto void baz(void);

void foo(void) {
    bar();
}

void bar(void) {
    baz();
}

goto void baz(void) {
    foo();
}