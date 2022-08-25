#include "C:\Users\KYVOS\Desktop\project\Proion.h"
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

void Proion::setData(int kodPro1,char perPro1[],float timPro1)
{
	kodPro=kodPro1;
	strcpy(perPro,perPro1);
	timPro=timPro1;
}
void Proion::printData()
{
	cout<<kodPro;
	cout<<perPro;
	cout<<fixed
	    <<setw(8)
	    <<setprecision(2)
	    <<timPro;
	cout<<endl;
}
int Proion::getKodPro()
{
	return kodPro;
}
char* Proion::getPerPro()
{
	return perPro;
}
float Proion::getTimPro()
{
	return timPro;
}

