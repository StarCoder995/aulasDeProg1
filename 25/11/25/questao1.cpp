#include <iostream>
using namespace std;
int main(){
    float number1, number2;
    cout<< "Diga 2 numeros \n";
    cin >> number1 >> number2;
    if(number1 > number2)
        cout << number1 << " e o maior dos dois";
    else
        cout << number2 << " E o maior dos dois \n";
}
