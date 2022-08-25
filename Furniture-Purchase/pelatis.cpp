#include "C:\Users\KYVOS\Desktop\project\Proion.h"
#include "C:\Users\KYVOS\Desktop\project\Pelatis.h"
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

void Pelatis::readData()
{
	char ch;
	cout<<"Dose kwdiko pelati:";
	cin>>kodPel;
	ch=getchar();
	cout<<"Onomatepwnumo pelati:";
	cin.get(onoma,31);
	posoAgorwn=0;
}
int Pelatis::getKodPel()
{
	return kodPel;
}
char* Pelatis::getOnoma()
{
	return onoma;
}
float Pelatis::getPosoAgorwn()
{
	return posoAgorwn;
}
void Pelatis::agoraProiontos(Proion ant,int qty)
{
	posoAgorwn+=(qty*ant.getTimPro());
}
int Pelatis::metaforika()
{
	if(posoAgorwn>500)
	{
		return 0;
	}
	else
	{
		return 50;
	}
}

