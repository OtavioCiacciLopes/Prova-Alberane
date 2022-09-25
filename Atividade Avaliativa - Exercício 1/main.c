#include <iostream>

using namespace std;

int main (){
    int valor,contador, multi;

    cout << "      TABUADA        \n\n\n";
    cout << "escolha um numero para ver a tabuada dele \n";
    cin >> valor;

    for (contador = 1; contador <=10; contador ++){
        multi = contador * valor;
            
            cout << contador << " * " << valor << " = " << multi << "\n";  
    }
    
    return 0;
}
