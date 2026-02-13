#include <fmt/core.h>
#include <vector>

int main() {
    std::string name = "World";
    int year = 2026;

    fmt::print("Hello {}, welcome to {}!\n", name, year);

    std::vector<int> values = {1, 2, 3, 4, 5};

    fmt::print("Vector values: ");
    for (auto v : values) {
        fmt::print("{} ", v);
    }
    fmt::print("\n");

    return 0;
}