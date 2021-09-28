// Сухих Матвей Б20-523.

#include "pch.h"
#include "C:\Users\Vulki\source\repos\StaticLib1\Ellipse.h"


int main(int argc, char* argv[]) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(Constructor, Check_with_numbers) // Проверка значений всех методов класса
{
    ellipse a1(5,3);
	ASSERT_EQ(4, a1.focal_length());
	ASSERT_EQ(0.8, a1.eccentricity());
	ASSERT_NEAR(25.1327, a1.length(), 0.001);
	ASSERT_NEAR(11.7809, a1.square(), 0.001);
	ASSERT_EQ(4.2, a1.perifocus());
	ASSERT_EQ(5.8, a1.apofocus());
}


TEST(Constructor, CheckXandY) // Проверка значений метода поиска Y.
{
	ellipse a1(5, 2);
	ASSERT_EQ(2, a1.FindY(0));
	ASSERT_EQ(1.6, a1.FindY(3));
	ASSERT_EQ(1.2, a1.FindY(4));
	ASSERT_EQ(-2, a1.FindY(5));
	ASSERT_EQ(-2, a1.FindY(7));
}


TEST(Constructor, Check_0)
{
	ellipse a1(0, 0);
	ASSERT_EQ(-1, a1.focal_length());
	ASSERT_EQ(-1, a1.eccentricity());
	ASSERT_EQ(-1, a1.length());
	ASSERT_EQ(-1, a1.square());
	ASSERT_EQ(-1, a1.perifocus());
	ASSERT_EQ(-1, a1.apofocus());
}
