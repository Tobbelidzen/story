
#include <iostream>
#include <fstream>
using namespace std;

int main (){
	fstream Bok;
	string text[3] = {"G1-Presentation-CPP.md", "G3-Fordjupning-CPP.md", "G6-Konfliktlosning-CPP.md"};
	string del[3];
	int i;

	for(int i=0;i<3;i++){
		Bok.open(text[i], ios::in);
		del[i] += Bok.get();

		del[i].erase(del[i].end()-1);
		Bok.close();
	}


//	Present.open("G1-Presentation-CPP.md", ios::in);
//	for(i=0 ; Present.eof()!=true ; i++)
//	    del[0] += Present.get();
	
//	i--;
//	del[0].erase(del[0].end()-1);
//	Present.close();

//	Fordjup.open("G3-Fordjupning-CPP.md", ios::in);
//	for(i=0 ; Fordjup.eof()!=true ; i++)
//	    del[1] += Fordjup.get();
	
//	i--;
//	del[1].erase(del[1].end()-1);
//	Fordjup.close();

//	Konflikt.open("G6-Konfliktlosning-CPP.md", ios::in | ios::out);	
//	for(i=0 ; Konflikt.eof()!=true ; i++)
//	    del[2] += Konflikt.get();

//	i--;
//	del[2].erase(del[2].end()-1);
//	Konflikt.close();

	Bok.open("Sammanslagen-historia.md", ios::in | ios::out);
	Bok << del[0] << endl << endl << del[1] << endl << endl << del[2] << endl;
	Bok.close();
	cout << "Färdigt\n";
	cout << "Boken är: " << i << " tecken lång\n";
}


//for(string current_line; getline(bok, current_line);) {
//	cout << current_line;
//	if current_line == "#Presentation"){
//		bok << gruppett;
//	}
//}
//for(int i=0;i<3;i++){
//	bok.open(text[i], ios::in)
//	del[i] +=bok.get();
//i--;
//del[i].erase(del[i].end()-1):
//bok.close();
//}
