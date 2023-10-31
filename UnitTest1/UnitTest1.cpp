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
            // ��������� ������� ��� ������������ ����� 10 � ������� �������
            int number = 10;
            stringstream outputStream;
            streambuf* oldOutput = cout.rdbuf();
            cout.rdbuf(outputStream.rdbuf()); // ��������������� ������

            decimalToBinary(number);

            string expectedOutput = "1010"; // ���������� ���������

            cout.rdbuf(oldOutput); // ��������� ���� �� �������� ��������

            Assert::AreEqual(expectedOutput, outputStream.str());
        }
    };
}