#include "iostream"
using namespace std;

void swap(int &number1, int &number2);
void swap(float &number1, float &number2);

int main(int argc, char const *argv[])
{
    int a;
    int b;
    cout << "Input the value of 1st element : ";
    cin >> a;
    cout << "Input the value of 2nd element : ";
    cin >> b;
    cout << "The value before swapping are :"
         << "\n\telement 1 = " << a
         << "\n\telement 2 = " << b << endl;
    swap(a, b);
    cout << "The value after swapping are : "
         << "\n\telement 1 = " << a
         << "\n\telement 2 = " << b << endl;
    return 0;
}

void swap(int &number1, int &number2)
{
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

void swap(float &number1, float &number2)
{
    float temp = number1;
    number1 = number2;
    number2 = temp;
}