#include "binary_search.hpp"
#include "gtest/gtest.h"
#include <vector>

TEST(BinarySearchTest, EmptyVectorSearchReturnsEnd)
{
    std::vector<int> v;
    ASSERT_EQ( binary_search(v, 1), 0);
}
