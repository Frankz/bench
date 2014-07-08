// Example implementation of the benchmark & measure.
#include "bench.c"
#include <math.h>

void example_benchmark() {
    BENCHMARK(example_bench, 3)

    FILE *file;
    file = fopen("README.md", "r");
    fclose(file);

    END_BENCHMARK(example_bench)
    BENCHMARK_SUMMARY(example_bench);
}

void example_measure() {
    MEASURE(example_measure)

    FILE *file;
    file = fopen("README.md", "r");
    fclose(file);

    END_MEASURE(example_measure)
    MEASURE_SUMMARY(example_measure);
}

int main() {
    example_benchmark();
    example_measure();

    return 0;
}