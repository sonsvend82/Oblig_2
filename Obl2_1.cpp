/*	
	Filnavn:	Obl2_1.cpp 
	Versjon:	1
	Kommentar:	Beregner totalmostand i et nettverk
	Forfatter:	Sondre Svendsen
	Historikk:	Når Hvem Hva 
			230313	ss	Opprettet 
-------------------------------------------------------------- 
	Pseudokode:
	Mens inndata >= 0
		Dersom inndata > 0
			y += 1 / inndata
		Dersom inndata = 0
			totalmostand += 1 / y
			y = 0
		Dersom inndata < 0
			Skriv ut totalmotstand
			avslutt programm
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

double lesMotstand();

void main()
{
	double totalMotstand = 0, input = 0, y = 0;
	
	while (input >=0)
	{
		input = lesMotstand();
		if (input >0)
		{
			y += 1/input;
		}
		else if (input == 0)
		{
			cout << endl;	// For lettere å markere hvor neste seriekobling starter
			if (y != 0)
			{
			totalMotstand += 1/y;
			}
			y = 0;
		}
		else
		{
			if (y != 0)
			{
				totalMotstand += 1/y;
			}
			cout << "Totalmotstand = " << totalMotstand << endl;
		}
	}
	system("pause");
}

double lesMotstand()
{
	string input;
	double output;
	while (true)
	{
		cout << "Les inn motstand" << endl << "Ved 0 avsluttes parallell. Ved < 0 avsluttes nettverket" << endl;
		getline(cin, input);
		stringstream inputStream(input);
		if (inputStream >> output)
		{
			break;
		}
		else
		{
			cout << "Motstanden skal leses som et tall, prov igjen." << endl;
		}
	}
	return output;
}