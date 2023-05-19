#include "gtest/gtest.h"
#include "../header/rectangle.hpp"
#include <cmath>

TEST(constructorFail, constTest1)
{
    Rectangle *r = new Rectangle();
    EXPECT_EQ(r->get_w(), 0);
}

TEST(constructorFail, constTest2)
{
    Rectangle *r = new Rectangle(5, 2);
    EXPECT_EQ(r->get_h(), 2);
}

TEST(constructorFail, constTest3)
{
    Rectangle *r = new Rectangle(2, 5);
    EXPECT_EQ(r->area(), 10);
}

TEST(testArea, area1)
{
    Rectangle *r = new Rectangle(1, 5);
    EXPECT_EQ(r->area(), 5);
}

TEST(testArea, area2)
{
    Rectangle *r = new Rectangle(5, 6);
    EXPECT_EQ(r->area(), 30);
}

TEST(testArea, area3)
{
    Rectangle *r = new Rectangle(5, 10);
    EXPECT_EQ(r->area(), 50);
}

TEST(testPerimeter, perimeter1)
{
    Rectangle *r = new Rectangle();
    EXPECT_EQ(r->perimeter(), 0);
}

TEST(testPerimeter, perimeter2)
{
    Rectangle *r = new Rectangle(5, 5);
    EXPECT_EQ(r->perimeter(), 20);
}

TEST(testPerimeter, perimeter3)
{
    Rectangle *r = new Rectangle(5, 15);
    EXPECT_EQ(r->perimeter(), 40);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}