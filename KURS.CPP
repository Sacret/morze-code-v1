#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include "FUNCTION.cpp" // ����� ��室���� �㭪樨, ࠡ���騥 � ��㪮�
#include "TEXTFILE.cpp" // � ��� - �� ⥪�⮢� 䠩��
//
//__________________________________________________________________________
// ��ଫ���� 䮭� � 梥� �㪢
void Oformlenie (int a, int b)
{
  clrscr ();
  textcolor (a);
  textbackground (b);
  window (1,1,getmaxx(),getmaxy());
  clrscr ();
}
//
//_________________________________________________________________________
//  ���⠢�� ��। �ᯮ�짮������ �ணࠬ��
void Zastavka ()
{
   clrscr ();
   Oformlenie (0,15);
  //
printf("\n\n\t���������������������������������������������������������ͻ");
  printf("\n\t�           ���ᮢ�� ࠡ�� - ������ �����                �");
  printf("\n\t�                                                         �");
  printf("\n\t�  ������� ���ଠ樮���� ��孮����� � ��ࠢ�����       �");
  printf("\n\t�  ����            1                                      �");
  printf("\n\t�  ��㯯�          5-�                                    �");
  printf("\n\t�  �.�.�.          ������� ������� ���ࣨ����           �");
  printf("\n\t�  �㪮����⥫�    ���������� ���ࣨ� ���ࣨ����          �");
  printf("\n\t�                                                         �");
  printf("\n\t� ����-���ᨩ᪨� ���㤠��⢥��� ��孨�᪨� ��������� �");
  printf("\n\t�      (�����ઠ�᪨� �����孨�᪨� �������)          �");
  printf("\n\t�                                                         �");
  printf("\n\t�  (�) Sacret'08                  �����ઠ��, 2008      �");
  printf("\n\t���������������������������������������������������������ͼ");
  //
  printf("\r\n\r\n\t   ��� �த������� ������ Enter:  ");
  while (getch ()!=13); // ���� ����⨥ Enter
  clrscr ();
  gotoxy (1,1);
}
//
//______________________________________________
//
main ()   // ������� �ணࠬ��
{
  int l;
  //
  Zastavka ();  // ���⠥� ���⠢��
  while (1)
  {
    clrscr ();
    // �롮� ��� ࠧ����
    printf ("\n\t\t\t�������� ������ -  ������ �����\n\n");
    printf ("\n\t��������, �롥�� ࠧ���:\n\n");
    printf ("\t\t1 - ����� ���㪨 ��৥\n");
    printf ("\t\t2 - �।�⠢����� ᨬ����� � ���㪥 ��৥\n");
    printf ("\t\t3 - ��� ���� ��������� ����� ��৥?\n");
    printf ("\t\t4 - ����஢���� ⥪�⮢�� ���ଠ樨\n");
    printf ("\t\t5 - �७�஢��\n");
    printf ("\t\t6 - �஢�ઠ ������\n");
    printf ("\t\t7 - ��ࠢ�� �� �ᯮ�짮�����\n");
    printf ("\t\t8 - ��室 �� �ணࠬ��\n\n\t\t");
    //
    // ����砥� ����� ����⮩ ������
    l = getch () - 48;
    if (l==1) History ();        // �����
    if (l==2) Alphabet ();       // ���� ���㪠 ��৥
    if (l==3) Mnemonika ();      // ��� ���뢠��� "�����"
    if (l==4) Code ();           // ����஢��
    if (l==5) Practice ();       // �७�஢��
    if (l==6) Verification ();   // �஢�ઠ ������
    if (l==7) Information ();    // ��ࠢ��
    if (l==8) break;             // ��室
    else continue;
  } // while (1)
  //
  return 0;
}