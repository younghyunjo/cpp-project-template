//
// Created by younghyun on 18. 10. 5.
//

#include <gtest/gtest.h>
#include "bar.h"

TEST(BarTest, Dummy0) {
    int arg = 10;
    int ret = bar(10);
    EXPECT_EQ(arg, ret);
}