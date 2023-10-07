#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
float Add(float n1, float n2)
{
    return n1 + n2;
}
float Subtract(float n1, float n2)
{
    return n1 - n2;
}
float Multiply(float n1, float n2)
{
    return n1 * n2;
}
float Divide(float n1, float n2)
{
    return n1 / n2;
}
int Modulus(float n1, float n2)
{
    return (int)n1 % (int)n2;
}
void Wait()
{
    cout << "\n\nEnter any key to continue..";
    getch();
}
int main()
{
    float num1, num2, result;
    int res, choice;
    do
    {
        system("cls");
        cout << "******Calculator Program******";
        cout << "\nAvailable Operaations\n";
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n6. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            system("cls");
            cout << "***Addition***";
            cout << "\n\nEnter two numbers : ";
            cin >> num1 >> num2;
            result = Add(num1, num2);
            cout << "\n\nAddition result => " << num1 << " + " << num2 << " = " << result;
            Wait();
            break;
        case 2:
            system("cls");
            cout << "***Subtraction***";
            cout << "\n\nEnter two numbers : ";
            cin >> num1 >> num2;
            result = Subtract(num1, num2);
            cout << "\n\nSubtraction result => " << num1 << " - " << num2 << " = " << result;
            Wait();
            break;
        case 3:
            system("cls");
            cout << "***Multiplication***";
            cout << "\n\nEnter two numbers : ";
            cin >> num1 >> num2;
            result = Multiply(num1, num2);
            cout << "\n\nMultiplication result => " << num1 << " * " << num2 << " = " << result;
            Wait();
            break;
        case 4:
            system("cls");
            cout << "***Division***";
            cout << "\n\nEnter two numbers : ";
            cin >> num1 >> num2;
            result = Divide(num1, num2);
            cout << "\n\nDivision result => " << num1 << " / " << num2 << " = " << result;
            Wait();
            break;
        case 5:
            system("cls");
            cout << "***Modulus***";
            cout << "\n\nEnter two numbers : ";
            cin >> num1 >> num2;
            res = Modulus(num1, num2);
            cout << "\n\nModulus result => " << num1 << " % " << num2 << " = " << res;
            Wait();
            break;
        case 6:
            cout << "Exitting..";
            break;
        default:
            cout << "Wrong Choice!!";
            Wait();
            break;
        }
    } while (choice != 6);
    return 0;
}