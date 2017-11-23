/*	
	Filnavn:	Obl2_3.cpp 
	Versjon:	1
	Kommentar:	Stringmanipulasjon
	Forfatter:	Sondre Svendsen
	Historikk:	Når Hvem Hva 
			230313	ss	Opprettet 
*/

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int mellomrom=0, forrige=0;
	string mangeOrd = "eple appelsin drue yoghurt kiwi";
	string etOrd;

	while (mangeOrd.find(" ", forrige +1) != -1)
	{
		mellomrom = mangeOrd.find(" ", forrige +1);
		etOrd = mangeOrd.substr(forrige, mellomrom - forrige);
		cout << etOrd << ",";
		forrige = mellomrom;
	}
	etOrd = mangeOrd.substr(mellomrom, mangeOrd.length() - mellomrom +1);
	cout << etOrd << endl;
	system("pause");
}