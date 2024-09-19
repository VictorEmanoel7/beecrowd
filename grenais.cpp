#include <iostream>
using namespace std;

int main()  {
    int g,i,vi = 0,vg = 0,cont = 0,em = 0,x;
    while(true) {
        cin >> i >> g;
        if(g > i)
            vg++;
        else if(g < i)
            vi++;
        else
            em++;
        cont++;
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> x;
        if(x == 2)
            break;
    }
    cout << cont << " grenais\n";
    cout << "Inter:" << vi << endl;
    cout << "Gremio:" << vg << endl;
    cout << "Empates:" << em << endl;
    if(vi > vg) 
        cout << "Inter venceu mais\n";
    else if ( vi < vg) 
        cout << "Gremio venceu mais\n";
    else
        cout << "Nao houve vencedor\n";
    return 0;
}