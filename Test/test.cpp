#include "pch.h"
#include "C:\Users\Vulki\source\repos\StaticLib1\Ellipse.h"


int main(int argc, char* argv[]) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(Constructor, Check_with_numbers) // ѕроверка значений методов, кроме поиска Y
{
    ellipse a1(5,3);
	ASSERT_EQ(4, a1.focal_length());
	ASSERT_EQ(0.8, a1.eccentricity());
	ASSERT_NEAR(25.1327, a1.length(), 0.001);
	ASSERT_NEAR(11.7809, a1.square(), 0.001);
}


TEST(Constructor, CheckXandY) // ѕроверка значений метода поиска Y.
{
	ellipse a1(5, 2);
	ASSERT_EQ(1.6, a1.FindY(3));
	ASSERT_EQ(1.2, a1.FindY(4));
	ASSERT_EQ(0, a1.FindY(5));
}
