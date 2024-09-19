#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float salario,imposto,apagar;
    int cont = 0;
    cin >> salario;
    cout << fixed << setprecision(2);
    salario -= 2000;
    if(salario <= 0) 
        cout<<"Isento"<<endl;
    else {
        apagar = salario - 1000;
        if(apagar > 0) {
            salario -= apagar;
            cont = 1;
        }
        imposto = salario * 0.08;
        if(cont == 1){
            salario += apagar;
            cont = 0;
        }
        salario -= 1000;
        if(salario > 0) {
            apagar = salario - 1500;
            if(apagar > 0) {
                salario -= apagar;
                cont = 1;
            }
            imposto = imposto + (salario*0.18);
            if(cont == 1) {
                salario += apagar;
                cont = 0;
            }
            salario -= 1500;
            if(salario > 0) {
                imposto = imposto + (salario * 0.28);
            }
        }
        cout <<"R$ " <<imposto<<endl;
    }
    return 0;
}