#include <iostream>

#include <algorithm>
#include <vector>
// simple linspace method
// todo: update later with more abstraction
std::vector<double> linspace(double first, double last, int size)
{
    std::vector<double> vector(size);
    std::generate(vector.begin(),
            vector.end(),
            [i=0, first, dx=(last-first)/(size-1.0)]()mutable->double{ return first + dx*i++;});
    return vector;
}

// Simple container printer
template <class Container>
void print(const Container &container)
{
    for (const auto &elt : container) {
        std::cout << elt << ", ";
    }
    std::cout << std::endl;
}

int main() {
    auto x = linspace(0, 10, 21);
    print(x);
}
