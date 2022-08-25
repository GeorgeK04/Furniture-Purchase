#include "C:\Users\KYVOS\Desktop\project\Proion.h"
#include "C:\Users\KYVOS\Desktop\project\Pelatis.h"
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>

using namespace std;

int metProPin(ifstream &fin, Proion pinPro[]);
int menuProionta(Proion pinPro[],int n);
int anaKodPro(Proion pinPro[],int n, int kodAna);


int main(int argc, char** argv) 
{
	Proion pinPro[25];
	
	Pelatis pelat;
	pelat.readData(); //πληκτρολόγηση στοιχείων πελάτη
	
	int n;
	
    int kod;
    
    int thesi;
    
    int i;
    
    int qty;
    
    float axia;
    
    ifstream infile("PROIONTA4679.txt");
    ofstream outfile("AGORES4679.txt");
    
    if(!infile)
    {
    	cout<<"Cannot find input file!"<<endl;
    	
	}
	else
	{
		n=metProPin(infile, pinPro);
	    kod=menuProionta(pinPro,n);//κληση συναρτηση μενου προιοντων
	    
		outfile<<"Kwdikos pelati:"<<pelat.getKodPel()<<endl;
		outfile<<"Onoma pelati:"<<pelat.getOnoma()<<endl;
		outfile<<"Kwdikos Perigrafi             Posotita  Timi Axia "<<endl;
		outfile<<"======= ====================  ========  ==== ====="<<endl;
		
	    cout<<"File found."<<endl;
    }
	    
    while(kod!=0) //κληση συναρτησης Έλεγχος εγκυρότητας του κωδικού
    {
  	thesi=anaKodPro(pinPro, n, kod);
  	if(thesi==-1)
	  {
	  	cout<< endl;
  		cout<<"...O kwdikos den yparxei sti lista!" << endl;
  	  }	  
	else
		  { 
		    cout << endl;
  			cout << "Dwse posotita: ";
  			cin >> qty;
  			cout<<"...H agora egine, synexiste..."<<endl;
		  }
		  cout << endl;
		
		for (i=0;i<5;i=i+1)
		{
			if(kod == pinPro[i].getKodPro())
			{
				outfile << setprecision(2) << kod << "    ";
				outfile << setw(10) << setprecision(2) << pinPro[i].getPerPro();
				outfile << setw(4) << setprecision(2) << "    " << qty;
				cout << fixed << setw(8) << setprecision(2);
				outfile << setw(3) << setprecision(5) << "    " << pinPro[i].getTimPro();
				cout << fixed << setw(8) << setprecision(2);
				axia=pinPro[i].getTimPro() * qty;
				outfile << setw(4) << "  " << axia << endl;
				pelat.agoraProiontos(pinPro[i], qty);
				
			}			
		 } 
		 kod=menuProionta(pinPro, n);
   } 
		 outfile << endl;
		 outfile << "                     Synoliko poso agorwn: " << pelat.getPosoAgorwn() << endl;
		 outfile << "                      " << "         Metaforika: " << pelat.metaforika();
		 
		 cout<<"...Telos agorwn!"<<endl;

	
    
    infile.close();
    outfile.close();
    
    return 0;
}
  
//συναρτησεις

   int metProPin(ifstream& fin, Proion pinPro[]) //συναρτηση μεταφορα προιοντων σε πινακα
{
    int kp, i;
    float timPro;
    char perPro[21];
    i=0;
    fin>> kp; //κωδικος προιοντος
    while(!fin.eof())
	{
		fin.get(perPro, 21);
		fin>>timPro;
		pinPro[i].setData(kp,perPro,timPro);
		i=i+1;
		fin>>kp;
	}
   return i; //επιστροφη πληθος προιοντων
}

	int menuProionta(Proion pinPro[], int n) //συναρτηση μενου
	{
		int kod,i;
		cout<<"LISTA DIATHESIMWN PROIONTWN"<<endl;
		cout<<"==========================="<<endl;
		for (i=0;i<5;i=i+1)
		{
		   pinPro[i].printData(); //εμφανιζει την λιστα προιοντων
	    }
	    cout << "Dwse kwdiko prointos gia agora h 0 gia telos):" <<endl;
	    cin >> kod; 
	return kod;
    }
    
int anaKodPro(Proion pinPro[], int n, int kodAna) //συναρτηση Έλεγχος εγκυρότητας του κωδικού
{
	bool flag;
	int i,thesi;
	flag=false; //μεταβλητη λογικης τιμης
	i=0;
	while(i<=n && flag == false)
	{
		if(kodAna == pinPro[i].getKodPro())
		{
			flag=true;
			thesi=i;
		}
		else 
		{
			i=i+1;
		}
    }
	   if (flag==true)
	   {
			return i;
	   }
		else 
		{
			return -1;
		}
	
		
}
