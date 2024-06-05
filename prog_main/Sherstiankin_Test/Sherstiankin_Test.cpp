#include "pch.h"
#include "CppUnitTest.h"
#include "../prog_main/prog_main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SherstiankinTest
{
	TEST_CLASS(SherstiankinTest)
	{
	public:
		
		TEST_METHOD(Check_UserInput_Empty)
		{
			string strX = "";
			bool expected = false;
			bool actual = UserInputX(strX);
			Assert::AreEqual(expected, actual, L"Entered empty value");
		}
		TEST_METHOD(Check_UserInput_XN)
		{
			int strX = 12345;
			string strN = "123456";
			bool expected = false;
			bool actual = UserInputN(strN, strX);
			Assert::AreEqual(expected, actual, L"Entered empty value");
		}
		TEST_METHOD(Check_UserInput_Negative)
		{
			string strX = "-5";
			bool expected = false;
			bool actual = UserInputX(strX);
			Assert::AreEqual(expected, actual, L"Entered empty value");
		}
		TEST_METHOD(Check_UserInput_Letter)
		{
			string strX = "a";
			bool expected = false;
			bool actual = UserInputX(strX);
			Assert::AreEqual(expected, actual, L"Entered empty value");
		}
		TEST_METHOD(Test_Multiply)
		{
			int strX = 12345;
			int strN = 2;
			int expected = 20;
			int actual = MultiplyN(strX, strN);
			Assert::AreEqual(expected, actual, L"Done!");
		}
		TEST_METHOD(Test_Count)
		{
			int strX = 12345;
			int expected = 5;
			int actual = CountNumX(strX);
			Assert::AreEqual(expected, actual, L"Done!");
		}
	};
}
