// Sukhikh Matvei B20-523

#include "pch.h"
#include "C:\Users\Vulki\source\repos\StaticLib1\Ellipse.h"

using namespace Prog2;

int main(int argc, char* argv[]) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


TEST(Constructor, DefaultConstructor) // Checking one consturtor
{
	ellipse a1(3, 2);
	ASSERT_EQ(3, a1.getFAxis());
	ASSERT_EQ(2, a1.getSAxis());
}

TEST(Constructor, ThreeConstructors) // Checking multiple constructors
{
	ellipse a1(3, 2);
	ASSERT_EQ(3, a1.getFAxis());
	ASSERT_EQ(2, a1.getSAxis());

	ellipse a2(6, 3);
	ASSERT_EQ(6, a2.getFAxis());
	ASSERT_EQ(3, a2.getSAxis());

	ellipse a3(77, 24);
	ASSERT_EQ(77, a3.getFAxis());
	ASSERT_EQ(24, a3.getSAxis());
}

TEST(Constructor, CheckOnErrors) // Checking consturctor with bad init values
{
	ASSERT_ANY_THROW(ellipse a1(0, 0));
	ASSERT_ANY_THROW(ellipse a1(-1, 2));
	ASSERT_ANY_THROW(ellipse a1(-1, -2));
	ASSERT_ANY_THROW(ellipse a1(1, -2));
	ASSERT_ANY_THROW(ellipse a1(3, 15));
}


TEST(setters, CheckOnErrors) // Checking normal setters work
{
	ellipse a1(1, 1);
	ASSERT_ANY_THROW(a1.setFAxis(-1));
	ASSERT_ANY_THROW(a1.setSAxis(-1));
	ASSERT_ANY_THROW(a1.setFAxis(0));
	ASSERT_ANY_THROW(a1.setSAxis(0));
	ASSERT_ANY_THROW(a1.setSAxis(5));

	ellipse a2(5, 2);
	ASSERT_ANY_THROW(a2.setFAxis(1));
}

TEST(Getters, CheckOnErrors) // Checking normal getters work
{
	ellipse a1(1, 1);
	ASSERT_EQ(1, a1.getFAxis());
	ASSERT_EQ(1, a1.getSAxis());
}

TEST(Constructor, Check_with_numbers) // Checking all methods
{
    ellipse a1(5,3);
	ASSERT_EQ(4, a1.focal_length());
	ASSERT_EQ(0.8, a1.eccentricity());
	ASSERT_NEAR(25.1327, a1.length(), 0.001);
	ASSERT_NEAR(11.7809, a1.square(), 0.001);
	ASSERT_EQ(4.2, a1.perifocus());
	ASSERT_EQ(5.8, a1.apofocus());
}


TEST(Constructor, CheckXandY) // Checing the Y.
{
	ellipse a1(5, 2);
	ASSERT_EQ(2, a1.FindY(0));
	ASSERT_EQ(1.6, a1.FindY(3));
	ASSERT_EQ(1.2, a1.FindY(4));
	ASSERT_EQ(0, a1.FindY(5));
	ASSERT_EQ(-2, a1.FindY(7));
}

