#include "Izvedena3.h"

void Izvedena3::citaj(fstream& inputFile, fstream& outputFile)
{
	inputFile >> id1_;
	inputFile >> id2_;

	outputFile << id1_ << ' ' << id2_ << endl;
}
