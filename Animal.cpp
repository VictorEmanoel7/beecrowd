#include <iostream>
using namespace std;

int main() {
    string n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    if(n1 == "vertebrado") {
        if(n2 == "ave") {
            if(n3 == "carnivoro")
                cout <<"aguia"<<endl;
            if(n3 == "onivoro")
                cout <<"pomba"<<endl;
        }
        if(n2 == "mamifero") {
            if(n3 == "onivoro")
                cout <<"homem"<<endl;
            if(n3 == "herbivoro")
                cout <<"vaca"<<endl;
        }
    }
    if(n1 == "invertebrado") {
        if(n2 == "inseto") {
            if(n3 == "hematofago")
                cout <<"pulga"<<endl;
            if(n3 == "herbivoro")
                cout <<"lagarta"<<endl;
        }
        if(n2 == "anelideo") {
            if(n3 == "hematofago")
                cout <<"sanguessuga"<<endl;
            if(n3 == "onivoro")
                cout << "minhoca"<<endl;
        }
    }
    return 0;
}