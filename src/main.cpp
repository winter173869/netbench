#include <cstdint>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<std::uint64_t> values{1, 2, 3, 5, 8, 13};
    const auto sum = std::accumulate(values.begin(), values.end(), std::uint64_t{0});
    std::cout << "netbench: " << sum << '\n';
    return 0;
}