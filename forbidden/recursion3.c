void foo(void);
goto void bar(void);

void foo(void) {
    bar();
}

goto void bar(void) {
    foo();
}