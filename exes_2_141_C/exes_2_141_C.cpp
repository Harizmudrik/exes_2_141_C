// exes_2_141_C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Hariz[89];
int n;
int i;

void input()
{
    while (true)
    {
        cout << "Enter the number of element is the array: ";
        cin >> n;
        if ((n > 0) && (n <= 89))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 89 element. \n\n";
    }

    cout << "\n----------------------\n";
    cout << "Enter array element \n";
    cout << "\n----------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
        cin >> Hariz[i];

    }

}

void AlgorithmSearch;

int display() {
    cout << "Not Found: ";
    cin >> n;
}

int lowerbound = 0;
int upperbound = n - 1;
int mid = (lowerbound + upperbound) / 2;







 






int main()
{
    std::cout << "Hello World!\n";
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
