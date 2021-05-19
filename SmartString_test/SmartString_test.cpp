// SmartString_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include "SmartString.h"




int main()
{
    SmartString testStr("   gyy ");
    std::cout << testStr << std::endl;
    testStr.trimLeft();
    std::cout << "trimLeft testStr is:" << testStr << std::endl;
    SmartString testStr89("   gyy ");
    testStr89.trimRight();
    std::cout << "trimRight testStr is:" << testStr89 << std::endl;
    SmartString testStr1("  gyy ");
    testStr1.trim();
    std::cout << "trim testStr1 is:" << testStr1 << std::endl;
    SmartString testStr2("  gyy ");
    std::cout << "trimmed testStr2 is:" << testStr2.trimmed() << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
