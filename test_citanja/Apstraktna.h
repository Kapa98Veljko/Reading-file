#ifndef APSTRAKTNA_H
#define APSTRAKTNA_H
#include<fstream>
#include<iostream>
#include<string>
using namespace std;
class Apstraktna {
public:
	virtual void citaj(fstream& inputFile,fstream& outputFile)=0;
protected:
	int id1_, id2_;
};
#endif// !APSTRAKTNA_H