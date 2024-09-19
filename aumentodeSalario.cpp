#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    float salario;
    cin >> salario;
    cout << fixed << setprecision(2);
    if(salario >= 0 && salario <= 400){
        cout <<"Novo salario: "<<salario*1.15<<endl;
        cout <<"Reajuste ganho: "<<salario*0.15<<endl;
        cout <<"Em percentual: 15 %"<<endl;
    }
    if(salario > 400 && salario <= 800){
        cout <<"Novo salario: "<<salario*1.12<<endl;
        cout <<"Reajuste ganho: "<<salario*0.12<<endl;
        cout <<"Em percentual: 12 %"<<endl;
    }
    if(salario > 800 && salario <= 1200){
        cout <<"Novo salario: "<<salario*1.10<<endl;
        cout <<"Reajuste ganho: "<<salario*0.10<<endl;
        cout <<"Em percentual: 10 %"<<endl;
    }
    if(salario > 1200 && salario <= 2000){
        cout <<"Novo salario: "<<salario*1.07<<endl;
        cout <<"Reajuste ganho: "<<salario*0.07<<endl;
        cout <<"Em percentual: 7 %"<<endl;
    }
    if(salario > 2000){
        cout <<"Novo salario: "<<salario*1.04<<endl;
        cout <<"Reajuste ganho: "<<salario*0.04<<endl;
        cout <<"Em percentual: 4 %"<<endl;
    }
    return 0;
}