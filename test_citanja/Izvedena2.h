#ifndef IZVEDENA2_H
#define IZVEDENA2_H
#include"Apstraktna.h"
class Izvedena2 :public Apstraktna {
public:
	Izvedena2(int index) :index_(index) {}
	virtual void citaj(fstream& inputFile, fstream& outputFile) override;
private:
	int index_;
};
#endif// !IZVEDENA2_H