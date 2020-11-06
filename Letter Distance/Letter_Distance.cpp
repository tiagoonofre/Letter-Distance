// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <vector>
#include <cstring>

int letterDistance(std::string str1, std::string str2) {

    int code;
    static int rest{};
    int iResult {};
    std::vector<int> dist1, dist2;

   rest = str1.length() > str2.length() ? str1.length() - str2.length() : str2.length() - str1.length();
   std::cout << "First String is" << " " << str1.length() << " " << "characters long " << "| Second string is"  << " " << str2.length() << " " << "characters long.\n";
   std::cout << "The rest is calculated like this:"; (str1.length() > str2.length() ?  std::cout << " First String - Second String." << " " << "Therefore the rest is:" << " " << str1.length() - str2.length() :  std::cout << " Second String - First String." << " " << "Therefore the result is:" << " " << str2.length() - str1.length()) << ".\n";

    //Just storing the first string's char numbers to an array
    for (int i = 0; i < str2.length() && i < str1.length(); i++) { 

        code = (int)str1[i];
        dist1.push_back(code);
    }

    //Just storing the second string's char numbers to an array
    for (int i = 0; i < str2.length() && i < str1.length(); i++) {

        code = (int)str2[i];
        dist2.push_back(code);
    }

    for (int i = 0; i < str1.size() && i < str2.size(); i++) {

        iResult += abs(dist1[i] - dist2[i]);
    }

    return iResult + rest;
}

int main()
{
    std::string string1, string2;

    std::cout << "Type your first string: "; std::cin >> string1;
    std::cout << "Type your Second string: "; std::cin >> string2;

    system("cls");

    std::cout << "The letter distance is: " << letterDistance(string1, string2) << " indexes long.\n";
    getchar();
}