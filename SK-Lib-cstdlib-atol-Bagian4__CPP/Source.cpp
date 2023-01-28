#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    char str1[] = "5672345";
    long int num1 = atol(str1);

    cout << "Number is " << num1 << "\n";

    char str2[] = "10000002  0";
    long int num2 = atol(str2);

    cout << "Number is " << num2 << "\n";

    _getch();
    return 0;
}