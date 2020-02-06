
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main ()
{
    
    string innehallfiler[4] = {"G1-Presentation-CPP.md", "G3-Fordjupning-CPP.md", "G5-Konfliktlosning-CPP.md", "G6-Konfliktlosning-CPP.md"};
    ifstream filenin;
    ofstream filenut("Sammanslagenhistoria.md");
    string innehall = "";
    int i;
    int z;

    

	for(z=0 ; z<3 ; z=z+1){
	        filenin.open(innehallfiler[z]);
 		for(i=0 ; filenin.eof()!=true ; i++){
			innehall += filenin.get();
			cout << innehall;
			
		
		
} 
filenin.close();
}
    i--;
    innehall.erase(innehall.end()-1);     

    cout << i << " tecken\n";
    filenin.close();

    filenut << innehall;                 
    filenut.close();
    return 0;
}
