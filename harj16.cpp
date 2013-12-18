/*************************************************************************************************************************************************************
*Tehtävä: Harjoitus16
*Tekijä: Noora Kuikka
*PVM: 25.10.2013
*Kuvaus:
*Harjoitus 16 (Palautus vko 46)
*Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
*Tietueeseen talletetaan seuraavat tiedot:
*etunimi (merkkijono; C:n merkkitaulukko)
*sukunimi (merkkijono; C:n merkkitaulukko)
*koulumatka (reaaliluku)
*osoite (merkkijono; C:n merkkitaulukko)
*postinumero (merkkijono; C:n merkkitaulukko)
*kengannumero (kokonaisluku)
*
*Ohjelma tulostaa lopuksi tietueen tiedot naytölle.
*Versio 1.0 H4719 25.10.2013
**************************************************************************************************************************************************************/

#include <iostream>
#include <string.h>
using namespace std;

struct ID
{
	char name[20]; char surname[20]; float journey; char address[50]; char post[20]; int size;
} ;

int main()
{
	ID usrRecord;

	cout << "Enter your first name: ";
	cin >> usrRecord.name;
	cout << "Enter your surname: ";
	cin >> usrRecord.surname;
	cout << "Enter the number of kilometres you walk to school: ";
	cin >> usrRecord.journey;
	cout << "Enter your address: ";
	cin.get();
	cin.get(usrRecord.address, 50);
	cout << "Enter your postal code: ";
	cin >> usrRecord.post;
	cout << "Enter your shoe size: ";
	cin >> usrRecord.size;

	cout << endl << "This is your recorded information: " << endl;
	cout << "Name ----- " << usrRecord.name << " " << usrRecord.surname << endl;
	cout << "Distance to school ----- " << usrRecord.journey << "km" << endl;
	cout << "Address ----- " << usrRecord.address << endl;
	cout << "Postal code ----- " << usrRecord.post << endl;
	cout << "Shoe size ----- " << usrRecord.size << endl;

	getchar();
	return 0;
}


    