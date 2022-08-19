#include <benchmark/benchmark.h>

static void left(benchmark::State &state) {
  const char *char_star = "This is a string that is larger than the small string optimization so that we don't have to worry about that.";
  const std::string str = "This is a string that is larger than the small string optimization so that we don't have to worry about that.";

  for (auto _ : state) {
    std::string result = char_star + str;
    benchmark::DoNotOptimize(result);
  }
}

BENCHMARK(left);

static void right(benchmark::State &state) {
  const char *char_star = "This is a string that is larger than the small string optimization so that we don't have to worry about that.";
  const std::string str = "This is a string that is larger than the small string optimization so that we don't have to worry about that.";

  for (auto _ : state) {
    std::string result = str + char_star;
    benchmark::DoNotOptimize(result);
  }
}

BENCHMARK(right);

BENCHMARK_MAIN();