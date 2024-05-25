goto void foo(void);
goto void bar(void);

goto void foo(void) {
    bar();
}

goto void bar(void) {
    foo();
}