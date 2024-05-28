#include <vector>

std::vector<int> increaseVector(std::vector<int> vec, int n) {
    for (int i = 0; i < vec.size(); i++) {
        vec[i] += n;
    }
    return vec;
}
#include <vector>
#include "yourFileWithFunction.cpp" // Подключаем файл с функцией

void testIncreaseVector() {
    std::vector<int> input = { 1, 2, 3, 4, 5 };
    int n = 10;

    std::vector<int> expected = { 11, 12, 13, 14, 15 };
    std::vector<int> result = increaseVector(input, n);

    assert(result == expected);
}

int main() {
    testIncreaseVector();
    return 0;
}