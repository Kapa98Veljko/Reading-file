#ifndef IZVEDENA1_H
#define IZVEDENA1_H
#include"Apstraktna.h"
class Izvedena1:public Apstraktna {
public:
	Izvedena1(int index) :index_(index) {}
	virtual void citaj(fstream& inputFile, fstream& outputFile) override;

private:
	int index_;
};
#endif// !IZVEDENA1_H