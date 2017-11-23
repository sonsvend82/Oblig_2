/*	
	Filnavn:	Obl2_2.cpp 
	Versjon:	1
	Kommentar:	Dybdemåler
	Forfatter:	Sondre Svendsen
	Historikk:	Når Hvem Hva 
			230313	ss	Opprettet 
*/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool gruntVakt(double dybde, double grense);
double fraFotTilMeter(double fot);

void main()
{
	double dybde, grense, tall;
	string input;

	cout << "Skriv inn grenseverdi i meter" << endl;
	while (true)
	{
		getline(cin, input);
		stringstream inputStream(input);
		if (inputStream >> tall)
		{
			if (tall >= 0 && tall <= 100)
			{
				break;
			}
		}
		cout << "Grensen ma vere et tall mellom 0 og 100" << endl;
	}
	grense = tall;	

	do
	{
		cout << "Skriv inn dybde i fot" << endl;
		while (true)
		{
		getline(cin, input);
		stringstream inputStream(input);
		if (inputStream >> tall)
			{
				if (tall >= 0 && tall <= 9999.9)
				{
					break;
				}
			}
			cout << "Dybden ma vere et tall mellom 0 og 9999.9" << endl;
		}
		dybde = tall;
	}
	while (gruntVakt(dybde, grense));

	cout << endl << "Dybden er under grenseverdien" << endl;
	system("pause");
}

bool gruntVakt(double dybde, double grense)
{
	if (fraFotTilMeter(grense) > dybde)
	{
		return false;
	}
	return true;
}

double fraFotTilMeter(double fot)
{
	double meter = fot * 3.280840;
	return meter;
}