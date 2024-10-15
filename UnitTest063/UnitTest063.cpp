#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.3.cpp"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int SIZE = 20;
            int arr[SIZE]{};
            int MIN = -20;
            int MAX = 20;

            create(arr, SIZE, MIN, MAX);  // Ітераційна версія create
            Assert::AreEqual(7, count(arr, SIZE), 0.0001);  // Ітераційна версія count
        }

        TEST_METHOD(TestMethod2)
        {
            const int SIZE = 20;
            int arr[SIZE]{};
            int MIN = -20;
            int MAX = 20;

            SecondCreate(arr, SIZE, MIN, MAX);  // Ітераційна версія SecondCreate
            Assert::AreEqual(11, SecondCount(arr, SIZE), 0.0001);  // Ітераційна версія SecondCount
        }
    };
}
