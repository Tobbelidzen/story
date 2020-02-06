#include <iostream>
#include <fstream>

using namespace std;

int main (){
    string ptext;
    string ntext;
    string stext;
    string ftext;
    string gtext;
    fstream presentation;
    fstream sammanslagning;
    fstream fordjupning;
    fstream konfliktlosning;


    sammanslagning.open ("Sammanslagen-historia.md", ios::in | ios::out | ios::app);
    presentation.open ("G1-Presentation-CPP.md", ios::in | ios::out | ios::app);
    fordjupning.open ("G3-Fordjupning-CPP.md", ios::in | ios::out | ios::app);
    konfliktlosning.open ("G5-Konfliktlosning-CPP.md", ios::in | ios::out | ios::app);

    while (sammanslagning.is_open()){
        getline(sammanslagning, ntext);

        if (ntext=="#Presentation"){

            while(presentation.is_open()){
            getline(presentation,ptext);
            sammanslagning << ptext << endl;

                if (ptext==""){
                    presentation.close();
                }
            }
        }
    }
        if (ntext=="Fördjupning"){

            while(fordjupning.is_open()){
                getline(fordjupning,gtext);
                sammanslagning << gtext << endl;

                if (ptext==""){
                    fordjupning.close();
                }
            }
        }
        if (ntext=="#Konfliktlösning")
            while(konfliktlosning.is_open()){
                getline(konfliktlosning,ftext);
                sammanslagning << ftext << endl;

                if (ptext==""){
                    konfliktlosning.close();
                    sammanslagning.close();
                }
            }
}
