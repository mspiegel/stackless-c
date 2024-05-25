# Stackless C

This is a fork of [Hsiang-Ying Fu's slimcc](https://github.com/fuhsnn/slimcc). Many thanks
to slimcc and its ancestors ([chibicc](https://github.com/rui314/chibicc) and [8cc](https://github.com/rui314/8cc)).

The keyword 'goto' is available as a function specifier to declare stackless functions.
Stackless functions do not allocate any memory (on the stack or heap) when they are
invoked.

Restrictions on stackless functions:
* the function 'main' cannot be a stackless function
* stackless functions cannot be recursive or mutually recursive
* stackless functions cannot be variadic

## Motivation

* [Coroutines and effects](https://without.boats/blog/coroutines-and-effects/) by without boats: _"The program stack is such a universal model of program execution today that we treat it as inevitable, but like everything else it had to be invented."_
* [Borrow checking, RC, GC, and the Eleven (!) Other Memory Safety Approaches](https://verdagon.dev/grimoire/grimoire) by Evan Ovadia.
* [Traits: Composable Units of Behaviour](https://www.cs.cmu.edu/~aldrich/courses/819/Scha03aTraits.pdf) by Nathanael Schärli, Stéphane Ducasse, Oscar Nierstrasz & Andrew P. Black: _"\[C\]lasses play two competing roles. A class has a primary role as a generator of instances: it must therefore be complete. But as a unit of reuse, a class should be small. These properties often conflict._" My notes: stackful functions have two roles. As function calls they have a role in control flow. As stackful functions they have a role in memory allocation.
* [How recursion got into programming: a tale of intrigue, betrayal, and advanced programming-language semantics](https://vanemden.wordpress.com/2014/06/18/how-recursion-got-into-programming-a-comedy-of-errors-3/) by Maarten van Emden.

## Instructions

`make` builds the compiler. `make test` runs the test suite.

## Platform support
Should just work on recent (2.28+) glibc-based x86-64 Linux. Musl support is almost there.

## Known issues
 - libtool doesn't generate the nessasary `-Wl,` `-fPIC` option, if you see `-soname` and PIC linker errors, try filling `*_wl=` `*_pic=` in configure scripts with `*_wl='-Wl,'` `*_pic='-fPIC'`
