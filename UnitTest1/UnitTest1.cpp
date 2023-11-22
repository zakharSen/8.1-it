#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1 it/8.1 it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char test1[] = "abc";
			Assert::AreEqual(1, Count(test1));

			char test2[] = "abcaabc";
			Assert::AreEqual(2, Count(test2));

			char test3[] = "abcdabc";
			Assert::AreEqual(2, Count(test3));

			char test4[] = "ab";
			Assert::AreEqual(0, Count(test4));

			char test5[] = "aabcabcabc";
			Assert::AreEqual(3, Count(test5));
		}
	};
}
