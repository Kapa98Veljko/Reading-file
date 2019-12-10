#ifndef IZVEDENA3_H
#define IZVEDENA3_H
#include"Apstraktna.h"
class Izvedena3 :public Apstraktna {
public:
	Izvedena3(int index) :index_(index) {}
	virtual void citaj(fstream& inputFile, fstream& outputFile) override;
private:
	int index_;
};
#endif //! IZVEDENA3_H