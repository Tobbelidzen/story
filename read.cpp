#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

    fstream fs;

    fs.open("text.md", ios::in | ios::out );
    for(string current_line; getline(fs, current_line); ){
	cout << current_line;
        if(current_line == "#Titel"){ //Matchning mot hela raden
            fs << "Min text";
        }
	
    }

    fs.close();
}
