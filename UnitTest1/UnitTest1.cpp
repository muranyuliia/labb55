#include "pch.h"
#include "CppUnitTest.h"
#include "../labb55/labb55.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		

        TEST_METHOD(TestDecimalToBinary)
        {
            // Викликаємо функцію для перетворення числа 10 в двійкову систему
            int number = 10;
            stringstream outputStream;
            streambuf* oldOutput = cout.rdbuf();
            cout.rdbuf(outputStream.rdbuf()); // Перенаправлення виводу

            decimalToBinary(number);

            string expectedOutput = "1010"; // Очікуваний результат

            cout.rdbuf(oldOutput); // Повертаємо вивід на попереднє значення

            Assert::AreEqual(expectedOutput, outputStream.str());
        }
    };
}