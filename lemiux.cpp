#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main ()
{
    ifstream filenin("G3-Fordjupning-CPP.md");
    ofstream filenut("Sammanslagenhistoria.md");
    string innehall = "";
    int i;

    for(i=0 ; filenin.eof()!=true ; i++)
        innehall += filenin.get();

    i--;
    innehall.erase(innehall.end()-1);     

    cout << i << " tecken\n";
    filenin.close();

    filenut << innehall;                 
    filenut.close();
    return 0;
}
