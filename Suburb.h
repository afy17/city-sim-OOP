#pragma once
#include <string>

class Suburb
{
public:
	// member variables 
	int m_workers;
	int m_teachers;
	int m_artists;
	int m_population;
	std::string m_name;
	std::string m_neighbors;

	// constructors
	Suburb();
	Suburb(int m_workers, int m_teachers, int m_artists, int m_population, std::string m_name, std::string neighbors);

	// destructor 
	~Suburb();

	// member functions
	void Display();
	void Refresh(int percentageIncrease);
	void PrintMainMenu();
	void PublicTransportMenu();
	void PublicTransport(Suburb* sub1, Suburb* sub2, Suburb* sub3, Suburb* sub4, Suburb* sub5, Suburb* sub6, Suburb* sub7, Suburb* sub8);
	void TrainASCII();
	void BoatASCII();
};