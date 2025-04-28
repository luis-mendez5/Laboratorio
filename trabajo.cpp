#include <iostream>
using namespace std;

int main(){
    int precio = 0;
    int edad;
    cout << "ingrese la edad";
    cin >> edad;
    
    if (edad < 5){
        cout << "entrada gratis";
    } else if (edad >= 5 && edad <= 12){
    cout << "precio de entrada: $5";
    } else {
        cout << "precio de entrada: $ 10";
    }
    
    return 0;
}


