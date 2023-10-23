#include "pch.h"
#include "CppUnitTest.h"
#include "../laba_5.2/laba_5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test2
{
	TEST_CLASS(test2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1.0;
			int n = 2;
			double a = 1.0;

			A(x, n, a);
			Assert::AreEqual(a, -0.6, 0.1);
		}
	};
}
