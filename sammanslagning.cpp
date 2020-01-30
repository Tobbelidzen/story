#include <iostream>
#include <fstream>

using namespace std;

int main (){
string ptext;
fstream presentation;
presentation.open ("G1-Presentation-CPP.md", ios::in | ios::out | ios::app);
while (presentation.is_open()){
getline(presentation, ptext);
cout << ptext << endl;
if (ptext==""){
presentation.close();
}
}
}
