#ifndef PELATIS_H
#define PELATIS_H

class Pelatis
{
 private:
    int kodPel; //������� ������
    char onoma[31]; //������������� ������
    float posoAgorwn; //�������� ���� ������ ��� ��������������
 public:
    void readData(); //���� ������ ��� ����/���� ������ 
                  //��� ��������� �� ���� ������ ���
    int getKodPel();
    char* getOnoma();
    float getPosoAgorwn();
    void agoraProiontos(Proion ant, int qty); //�������������� ��� ��������� �� ���
                                        //���� ������� ��� ��������� ��� ����������
                                        //��� �������� ��� ���� ��� ���� �����
	int metaforika(); //�� �� ���� ����� ���������� ��� 500 ���������� 0 ������ 50 ����
	
};
#endif
