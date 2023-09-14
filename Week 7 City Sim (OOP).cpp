#include <iostream>
#include "Suburb.h"  // include header file   
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	// sub object from pointer Suburb class + assign new class
	Suburb* sub = new Suburb();
	Suburb* sub1 = new Suburb();
	Suburb* sub2 = new Suburb();
	Suburb* sub3 = new Suburb();
	Suburb* sub4 = new Suburb();
	Suburb* sub5 = new Suburb();
	Suburb* sub6 = new Suburb();
	Suburb* sub7 = new Suburb();
	Suburb* sub8 = new Suburb();

	// assigning values to member variables 
	sub1->m_workers = 1200;
	sub1->m_teachers = 400;
	sub1->m_artists = 700;
	sub1->m_population = sub1->m_workers + sub1->m_teachers + sub1->m_artists;
	sub1->m_name = "The Willows";
	sub1->m_neighbors = "Elmsbrook, Maple Village, Pine Woods, Cedar Forest";

	sub2->m_workers = 300;
	sub2->m_teachers = 200;
	sub2->m_artists = 250;
	sub2->m_population = sub2->m_workers + sub2->m_teachers + sub2->m_artists;
	sub2->m_name = "Elmsbrook";
	sub2->m_neighbors = "The Willows, Maple Village, Chestnut Acres";

	sub3->m_workers = 100;
	sub3->m_teachers = 150;
	sub3->m_artists = 50;
	sub3->m_population = sub3->m_workers + sub3->m_teachers + sub3->m_artists;
	sub3->m_name = "Maple Village";
	sub3->m_neighbors = "The Willows, Elmsbrook, Pine Woods, Chestnut Acres";

	sub4->m_workers = 100;
	sub4->m_teachers = 10;
	sub4->m_artists = 90;
	sub4->m_population = sub4->m_workers + sub4->m_teachers + sub4->m_artists;
	sub4->m_name = "Pine Woods";
	sub4->m_neighbors = "The Willows, Maple Village, Cedar Forest, Chestnut Acres";

	sub5->m_workers = 350;
	sub5->m_teachers = 50;
	sub5->m_artists = 200;
	sub5->m_population = sub5->m_workers + sub5->m_teachers + sub5->m_artists;
	sub5->m_name = "Cedar Forest";
	sub5->m_neighbors = "The Willows, Pine Woods, Chestnut Acres, Oakham";

	sub6->m_workers = 250;
	sub6->m_teachers = 200;
	sub6->m_artists = 50;
	sub6->m_population = sub6->m_workers + sub6->m_teachers + sub6->m_artists;
	sub6->m_name = "Chestnut Acres";
	sub6->m_neighbors = "Elmsbrook, Maple Village, Pine Woods, Cedar Forest";

	sub7->m_workers = 150;
	sub7->m_teachers = 20;
	sub7->m_artists = 80;
	sub7->m_population = sub7->m_workers + sub7->m_teachers + sub7->m_artists;
	sub7->m_name = "Oakham";
	sub7->m_neighbors = "Cedar Forest";

	sub8->m_workers = 80;
	sub8->m_teachers = 200;
	sub8->m_artists = 120;
	sub8->m_population = sub8->m_workers + sub8->m_teachers + sub8->m_artists;
	sub8->m_name = "Palm Beach";
	sub8->m_neighbors = "No neighbors... Palm Beach is an island.";

	// getting username + welcome message
	string username;
	cout << "Welcome... what's your name? " << endl;
	cin >> username;
	system("cls");
	cout << "Welcome " << username << "!" << endl;
	cout << endl;

	// displays stats for all suburbs
	sub1->Display(), sub2->Display(), sub3->Display(), sub4->Display(), sub5->Display(), sub6->Display(), sub7->Display(), sub8->Display();
	sub->PrintMainMenu();

	bool gameOn = true;
	while (gameOn == true)
	{
		int mainMenuChoice;
		cin >> mainMenuChoice;

		switch (mainMenuChoice)
		{					   // Refresh takes an int parameter to increase population values by
		case 1: system("cls"); sub1->Refresh(8); sub1->Display(); sub2->Refresh(7); sub2->Display(); sub3->Refresh(3); sub3->Display(); sub4->Refresh(2); sub4->Display(); sub5->Refresh(5); sub5->Display(); sub6->Refresh(4); sub6->Display(); sub7->Refresh(2); sub7->Display(); sub8->Refresh(7); sub8->Display(); sub->PrintMainMenu(); break;
		case 2: system("cls"); sub->PublicTransport(sub1, sub2, sub3, sub4, sub5, sub6, sub7, sub8); break;
		case 3: system("cls"); gameOn = false; cout << "See you soon " << username << "!"; break;
		default: system("cls"); gameOn = false; cout << "That's an invalid input " << username << "..."; break;
		}
	}
	system("pause>0");

	// deleting pointers (prevent memory leaks)
	delete sub;
	sub = nullptr;
	delete sub1;
	sub1 = nullptr;
	delete sub2;
	sub2 = nullptr;
	delete sub3;
	sub3 = nullptr;
	delete sub4;
	sub4 = nullptr;
	delete sub5;
	sub5 = nullptr;
	delete sub6;
	sub6 = nullptr;
	delete sub7;
	sub7 = nullptr;
	delete sub8;
	sub8 = nullptr;
}
