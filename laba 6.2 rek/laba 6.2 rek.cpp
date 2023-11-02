#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.2 rek/lab 6.2 rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace laba62rek
{
	TEST_CLASS(laba62rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int minIndex = 0;
			int maxIndex = 0;
			int b[] = { 1, 2, 3, 4, 5 };
			int result = Serednia(b, 5, minIndex, maxIndex, 0);
			Assert::AreEqual(2, result);

		}
	};
}
