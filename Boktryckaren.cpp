
#include <iostream>
#include <fstream>
using namespace std;

int main (){
	fstream Bok;
	fstream Present;
	fstream Fordjup;
	fstream Konflikt; 

	string gruppett;
	string grupptre;
	string gruppsex;
	int i;


	Present.open("G1-Presentation-CPP.md", ios::in);
	for(i=0 ; Present.eof()!=true ; i++)
	    gruppett += Present.get();
	
	i--;
	gruppett.erase(gruppett.end()-1);
	Present.close();

	Fordjup.open("G3-Fordjupning-CPP.md", ios::in);
	for(i=0 ; Fordjup.eof()!=true ; i++)
	    grupptre += Fordjup.get();
	
	i--;
	grupptre.erase(grupptre.end()-1);
	Fordjup.close();

	Konflikt.open("G6-Konfliktlosning-CPP.md", ios::in | ios::out);	
	for(i=0 ; Konflikt.eof()!=true ; i++)
	    gruppsex += Konflikt.get();

	i--;
	gruppsex.erase(gruppsex.end()-1);
	Konflikt.close();

	Bok.open("Sammanslagen-historia.md", ios::in | ios::out);
	Bok << gruppett << endl << endl << grupptre << endl << endl << gruppsex << endl;
	Bok.close();
	cout << "Boken är: " << i << " tecken lång\n";
}


