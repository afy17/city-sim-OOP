#include "Suburb.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

// constructors
Suburb::Suburb()       // default values 
	   : m_workers(0)
	   , m_teachers(0)
	   , m_artists(0)
	   , m_population(0)
	   , m_name("Unspecified")
	   , m_neighbors("Unspecified")
{

}
Suburb::Suburb(int workers, int teachers, int artists, int population, std::string name, std::string neighbors)
	   : m_workers(workers)
	   , m_teachers(teachers)
	   , m_artists(artists)
	   , m_population(population)
	   , m_name(name)
	   , m_neighbors(neighbors) 
{

}

// destructor
Suburb::~Suburb()
{

}

// member functions
void Suburb::Display()
{
	cout << "Name: " << m_name << endl;
	cout << "Workers: " << m_workers << endl;
	cout << "Teachers: " << m_teachers << endl;
	cout << "Artists: " << m_artists << endl;
	cout << "Population: " << m_population << endl;
	cout << "Neighbors: " << m_neighbors << endl;
	cout << endl;
}
void Suburb::Refresh(int percentageIncrease)
{
	m_workers = ((m_workers * percentageIncrease) / 100) + m_workers;
	m_teachers = ((m_teachers * percentageIncrease) / 100) + m_teachers;
	m_artists = ((m_artists * percentageIncrease) / 100) + m_artists;
	m_population = m_workers + m_teachers + m_artists;
}
void Suburb::PrintMainMenu()
{
	cout << " --------- MAIN MENU --------- " << endl;
	cout << "      1) Refresh Stats" << endl;
	cout << "      2) Use Public Transport" << endl;
	cout << "      3) Quit" << endl;
	cout << endl;
}
void Suburb::PublicTransportMenu()
{
	cout << "--------- OPTIONS ---------";
	cout << endl;
	cout << "      1) Move people" << endl;
	cout << "      2) Back to Main Menu" << endl;
	cout << "      3) Quit" << endl;
	cout << endl;
}
void Suburb::PublicTransport(Suburb* sub1, Suburb* sub2, Suburb* sub3, Suburb* sub4, Suburb* sub5, Suburb* sub6, Suburb* sub7, Suburb* sub8)
{
	PublicTransportMenu();
	int publicTransportMenuChoice;
	cin >> publicTransportMenuChoice;

	switch (publicTransportMenuChoice)
	{
	case 1:
	{
		Suburb* pSub1;  // <- pointers for sub1 choice 
		Suburb* pSub2;
		
		int firstSub, secondSub, rWorkersPopulation, rTeachersPopulation, rArtistsPopulation;
		system("cls");
		cout << "Choose a suburb to travel from (1-8): " << endl;
		cin >> firstSub;
		cout << "Choose a suburb to travel to (1-8): " << endl;
		cin >> secondSub;

		if (firstSub == 1)
		{
			pSub1 = sub1;  // <- setting pointers to stats of user chosen suburb
		}
		else if (firstSub == 2)
		{
			pSub1 = sub2;
		}
		else if (firstSub == 3)
		{
			pSub1 = sub3;
		}
		else if (firstSub == 4)
		{
			pSub1 = sub4;
		}
		else if (firstSub == 5)
		{
			pSub1 = sub5;
		}
		else if (firstSub == 6)
		{
			pSub1 = sub6;
		}
		else if (firstSub == 7)
		{
			pSub1 = sub7;
		}
		else if (firstSub == 8)
		{
			pSub1 = sub8;
		}
		else
			cout << "That's an invalid input!" << endl;

		if (secondSub == 1)
		{
			pSub2 = sub1;
		}
		else if (secondSub == 2)
		{
			pSub2 = sub2;
		}
		else if (secondSub == 3)
		{
			pSub2 = sub3;
		}
		else if (secondSub == 4)
		{
			pSub2 = sub4;
		}
		else if (secondSub == 5)
		{
			pSub2 = sub5;
		}
		else if (secondSub == 6)
		{
			pSub2 = sub6;
		}
		else if (secondSub == 7)
		{
			pSub2 = sub7;
		}
		else if (secondSub == 8)
		{
			pSub2 = sub8;
		}
		else
			cout << "That's an invalid input!" << endl;

		srand(time(NULL));
		// generates a random number for each type of person to travel (range: 1 - workers/teachers/artists population)
		rWorkersPopulation = rand() % pSub1->m_workers + 1;
		rTeachersPopulation = rand() % pSub1->m_teachers + 1;
		rArtistsPopulation = rand() % pSub1->m_artists + 1;

		system("cls");
		cout << "You have chosen " << pSub1->m_name << " and " << pSub2->m_name << "!" << endl;

		// show stats before (sub1) ...
		cout << "Name: " << pSub1->m_name << endl;
		cout << "Workers: " << pSub1->m_workers << endl;
		cout << "Teachers: " << pSub1->m_teachers << endl;
		cout << "Artists: " << pSub1->m_artists << endl;
		cout << "Population: " << pSub1->m_population << endl;
		cout << endl;

		// show stats before (sub2)
		cout << "Name: " << pSub2->m_name << endl;
		cout << "Workers: " << pSub2->m_workers << endl;
		cout << "Teachers: " << pSub2->m_teachers << endl;
		cout << "Artists: " << pSub2->m_artists << endl;
		cout << "Population: " << pSub2->m_population << endl;
		cout << endl;

		if (pSub1->m_name == "Palm Beach" || pSub2->m_name == "Palm Beach")
			BoatASCII();
		else
			TrainASCII();

		// new values
		pSub1->m_workers -= rWorkersPopulation;
		pSub1->m_teachers -= rTeachersPopulation;
		pSub1->m_artists  -= rArtistsPopulation;

		pSub2->m_workers += rWorkersPopulation;
		pSub2->m_teachers += rTeachersPopulation;
		pSub2->m_artists += rArtistsPopulation;

		// show stats after
		cout << "New stats: " << endl;
		cout << "Name: " << pSub1->m_name << endl;
		cout << "Workers: " << pSub1->m_workers << endl;
		cout << "Teachers: " << pSub1->m_teachers << endl;
		cout << "Artists: " << pSub1->m_artists << endl;
		cout << "Population: " << pSub1->m_workers + pSub1->m_teachers + pSub1->m_artists << endl;
		cout << endl;

		cout << "Name: " << pSub2->m_name << endl;
		cout << "Workers: " << pSub2->m_workers << endl;
		cout << "Teachers: " << pSub2->m_teachers << endl;
		cout << "Artists: " << pSub2->m_artists << endl;
		cout << "Population: " << pSub2->m_workers + pSub2->m_teachers + pSub2->m_artists << endl;
		cout << endl;

		PublicTransport(sub1, sub2, sub3, sub4, sub5, sub6, sub7, sub8);

		// deleting pointers (prevent memory leaks)
		delete pSub1;
		pSub1 = nullptr;

		delete pSub2;
		pSub2 = nullptr;
		break;
	} 
	case 2: system("cls"); PrintMainMenu(); break;
	case 3: system("cls"); cout << "Goodbye!"; break;
	}
}
void Suburb::TrainASCII()
{
	cout << R"(   _____                 . . . . . o o o o o
  __|[_]|__ ___________ _______    ____      o
 |[] [] []| [] [] [] [] [_____(__  ][]]_n_n__][.
_|________|_[_________]_[________]_|__|________)<
  oo    oo 'oo      oo ' oo    oo 'oo 0000---oo\_
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ )" << '\n';
}
void Suburb::BoatASCII()
{
	cout << R"( 
              |    |    |                 
             )_)  )_)  )_)              
            )___))___))___)\            
           )____)____)_____)\\
         _____|____|____|____\\\__
---------\                   /---------
  ^^^^^ ^^^^^^^^^^^^^^^^^^^^^
    ^^^^      ^^^^     ^^^    ^^
         ^^^^      ^^^
)" << '\n';
}