goto void foo(void);
void bar(void);

goto void foo(void) {
    bar();
}

void bar(void) {
    foo();
}