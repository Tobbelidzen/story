#include <iostream>
#include <fstream>

using namespace std;

int main (){
    string ptext;
    string stext="#Presentation";
    string ntext;
    fstream presentation;
    fstream sammanslagning;

    sammanslagning.open ("Sammanslagen-historia.md", ios::in | ios::out | ios::app);
    presentation.open ("G1-Presentation-CPP.md", ios::in | ios::out | ios::app);

    while (sammanslagning.is_open()){
        getline(sammanslagning, ntext);

        if (ntext==stext){

            while(sammanslagning.is_open()){
            getline(presentation,ptext);
            sammanslagning << ptext << endl;

                if (ptext==""){
                    presentation.close();
                    sammanslagning.close();

                }
        }


    }
}
}
