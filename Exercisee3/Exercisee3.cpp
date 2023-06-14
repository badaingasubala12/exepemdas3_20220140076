#include <iostream>
#include <string>
using namespace std;

class GamePress{ 
public:
	string Joko, Lia, Giga;


	GamePress(string pJoko) :
		Joko(pJoko) {
		cout << "Daftar pengarang pada penerbit gamepress " << endl;
	}

	GamePress(string pLia) :
		Lia(pLia) {
		cout << "Daftar pengarang pada penerbit gamepress " << endl;
	}

	GamePress(string pGiga) :
		Giga(pGiga) {
		cout << "Daftar pengarang pada penerbit gamepress " << endl;
	}

};

class IntanParawira {
public:
	string asroni, Giga;


	IntanParawira(string pasroni) :
		asroni(pasroni) {
		cout << "Daftar pengarang pada penerbit IntanParawira " << endl;
	}

	IntanParawira(string pGiga) :
		Giga(pGiga) {
		cout << "Daftar pengarang pada penerbit IntanParawira " << endl;
	}

};




