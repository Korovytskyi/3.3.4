#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3D/Triad.h"
#include "../3.3D/Date.h"
#include "../3.3D/Date.cpp"
#include "../3.3D/Triad.h"
#include "../3.3D/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Triad a(1, 2, 3);
			Assert::AreEqual(a > 0, true);
		}
	};
}
