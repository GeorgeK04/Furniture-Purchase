#ifndef PROION_H
#define PROION_H

class Proion
{
 private:
    int kodPro;  //κωδικος προιοντος
    char perPro[21]; //περιγραφη προιοντος
    float timPro; //τιμη μοναδος προιοντος
 public:
    void setData(int kodPro1, char perPro1[], float timPro1);
    void printData();
    int getKodPro();
    char* getPerPro();
    float getTimPro();
};
#endif
