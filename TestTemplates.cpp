// TestTemplates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template <typename T>
T GetMax(T x, T y)
{

    return (x > y) ? x : y;

}



int main()
{
    int num1 = 6;
    int num2 = 7;

    int max = GetMax<int>(6, 7);

    cout << max<<endl;
    char c1 = 'c';
    char c2 = 'g';

    int maxChar = GetMax<char>(c1, c2);

    cout << maxChar<<endl;
   
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
