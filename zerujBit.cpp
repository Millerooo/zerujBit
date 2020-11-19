#include <iostream>
#include <fstream>

using namespace std;
int zerujBit(int liczba, int nrBitu) {
    return ((~(0b1 << nrBitu)) & liczba);
}

	ofstream wyjscie;
	wyjscie.open("wyjsciowy.txt");
	
	fstream wejscie;
	wejscie.open("a.txt");
	
	   int liczba1,liczba2;
    if (file.good())
    {
        while (!file.eof()) {
            wejscie >> liczba1 >> liczba2;
            wyjscie << zerujBit(liczba1, liczba2)<<endl;
            cout << zerujBit(liczba1, liczba2)<<endl;
        }
        
    }
    

    wejscie.close();
    wyjscie.close();
    

    return 0;
}
