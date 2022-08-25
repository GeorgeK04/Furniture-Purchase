#ifndef PELATIS_H
#define PELATIS_H

class Pelatis
{
 private:
    int kodPel; //κωδικος πελατη
    char onoma[31]; //ονοματεπωνυμο πελατη
    float posoAgorwn; //συνολικο ποσο αγορων που πραγματοποιησε
 public:
    void readData(); //ζητα κωδικο και ονομ/νυμο πελατη 
                  //και μηδενιζει το ποσο αγορων του
    int getKodPel();
    char* getOnoma();
    float getPosoAgorwn();
    void agoraProiontos(Proion ant, int qty); //πολλαπλασιαζει την ποσοστητα με την
                                        //τιμη μοναδος του προιοντος που αγοραστηκε
                                        //και αθροιζει την αξια στο ποσο αγορω
	int metaforika(); //αν το ποσο ειναι μεγαλυτερο απο 500 επιστρεφει 0 αλλιως 50 ευρω
	
};
#endif
