#include <vector>
#include <iostream>
#include <gtest/gtest.h>

std::vector<int> increaseVector(std::vector<int> vec, int n) {
    for (int i = 0; i < vec.size(); ++i) {
        vec[i] += n;
    }
    return vec;
}

TEST(IncreaseVectorTest, IncreaseByOne) {
    std::vector<int> input = {1, 2, 3, 4, 5};
    int n = 1;
    std::vector<int> expected = {2, 3, 4, 5, 6};
    ASSERT_EQ(increaseVector(input, n), expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
