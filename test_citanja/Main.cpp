
#include"Izvedena1.h"
#include"Izvedena2.h"
#include"Izvedena3.h"
int main() {
	Apstraktna* ptr1 = new Izvedena1(1);
	Apstraktna* ptr2 = new Izvedena2(2);
	Apstraktna* ptr3 = new Izvedena3(3);
	
	fstream inputFile("test.txt",ios::in);
	fstream outputFile("output.txt",ios::out);
	
	int t1 = 0; int t2 = 0;
	
	inputFile >> t1;
	inputFile >> t2;
	
	outputFile << t1 << ' ' <<t2<< endl;

	ptr1->citaj(inputFile,outputFile);
    ptr2->citaj(inputFile, outputFile);
	ptr3->citaj(inputFile, outputFile);
	
	inputFile.close();
	outputFile.close();
	
	
	delete ptr1;
	delete ptr2;
	delete ptr3;
}