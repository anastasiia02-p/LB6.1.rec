#include "pch.h"
#include "CppUnitTest.h"
#include "../LB6.1.rec/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61rec
{
	TEST_CLASS(UnitTest61rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int SIZE = 25;
			int arr[SIZE];
			create(arr, SIZE, 5, 90, 0);
			Assert::AreEqual(1248, Sum(arr, SIZE, 0, 0), 0.00001);
		}
		TEST_METHOD(TestMethod2)
			{
				const int SIZE = 25;
				int arr[SIZE];
				create(arr, SIZE, 5, 90, 0);
				Assert::AreEqual(22, Count(arr, SIZE, 0, 0), 0.00001);
		}
	};
}
