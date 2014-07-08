bench
=====

> Bench is a C benchmarking utility. Forked from [https://github.com/c9s/bench](c9s/bench).

#### Usage
It is a pretty basic library - also uses a lot of macros - so a stockpile of documentation isn't necessary. This example is easy enough to follow and learn from.
```c
#include "bench.c"
#include <math.h> // For the purposes of our example

void example_benchmark() {
    BENCHMARK(example_bench, 3)

    int i = sqrt(394232417);

    END_BENCHMARK(example_bench)
    BENCHMARK_SUMMARY(example_bench);
}

void example_measure() {
    MEASURE(example_measure)

    int i = sqrt(394232417);

    END_MEASURE(example_measure)
    MEASURE_SUMMARY(example_measure);
}
```