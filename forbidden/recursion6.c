void foo(void);
goto void bar(void);
void baz(void);

void foo(void) {
    bar();
}

goto void bar(void) {
    baz();
}

void baz(void) {
    foo();
}