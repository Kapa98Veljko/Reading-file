#include "Izvedena2.h"

void Izvedena2::citaj(fstream& inputFile, fstream& outputFile)
{
	inputFile >> id1_;
	inputFile >> id2_;

	outputFile << id1_ << ' ' << id2_ << endl;
}
