#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{

    string G1;
    string G2;
    string G3;

    ifstream readG1 ("G1-Presentation-CPP.md");
    ifstream readG2 ("G3-Fordjupning-CPP.md");
    ifstream readG3 ("G5-Konfliktlosning-CPP.md");
    ofstream write ("Test.txt", ios ::out | ios::app);

    while(getline ( readG1, G1))
    {
        write << G1 << endl;
    }

    while(getline (readG2, G2) )
    {
        write << G2 << endl;
    }

    while(getline (readG3, G3) )
    {
        write << G3 << endl;
    }

    cout <<"Text kopierad till nytt dokument" << endl;

    readG1.close();
    readG2.close();
    readG3.close();

    write.close();


}
