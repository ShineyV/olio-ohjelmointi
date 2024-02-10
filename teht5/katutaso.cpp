#include <iostream>
#include "katutaso.h"
#include "asunto.h"
using namespace std;


void Katutaso::maaritaAsunnot() {
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" <<endl;
    Kerros::maaritaAsunnot();


}


double Katutaso::laskeKulutus(double hinta) {
    return as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta) + Kerros::laskeKulutus(hinta);
}
