#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
#include <string.h>
#include <time.h>
#include <bios.h>
#include "CODES.cpp" /* � ������ 䠩�� ᮤ�ঠ��� �� �㭪樨,
		     ������।�⢥��� �易��� � ������ ��৥ */
//
//
// �७�஢��
void Practice ()
{
 while (1)
 {
   char k [20];
   int n, i, ln;
   clrscr ();
   //
   printf ("\n\t\t\t\t����������\n\n");
   printf ("\t\t����� ࠧ��� �।�����祭 ��� �᢮���� ���㪨 ��৥.\n\t\t�� ������ ���� ᮢ��㯭���� ᨬ�����, �������� Enter \n\t\t    � ����訢��� �� ��㪮��� ����������.\n\t\t\t��� ��室� � ������� ���� ������ '/' \n\n");
   printf ("\t�롥�� ᪮���� ���ந�������� ᨢ����:\n");
   printf ("\t\t0 - ������ ᪮����\n\t\t1 - ��ଠ�쭠� ᪮����\n\t\t");
   do      // �롨ࠥ� ᪮����
    {
      ln = getch ()-48;
    }
   while (ln!=0&&ln!=1);
   //
   switch (ln)
   {
     case 0: printf ("\n\t�� ��ࠫ� ������ ᪮����"); break;
     case 1: printf ("\n\t�� ��ࠫ� ��ଠ���� ᪮����"); break;
     default: break;
   }
   printf ("\n\t������ ᨬ��� / ᨬ����:\n\n");
   //
   do
   {
     gets (k);
     n = strlen(k);
     for (i=0; i<n; i++)
     {
       shifr (k[i]);       // ���⠥� � ���ந������ ᨬ����
       morse (k[i], ln);
     }
     printf ("\n");
   }
   while (*k!='/');
   break;
 } // while (1)
}
//
//_____________________________________________________________
//
// ����஢���� ⥪�⮢�� ���ଠ樨
void Code ()
{
  while (1)
  {
    char k;
    FILE *in;
    char str [20][80];
    int n, i=0, im;
    clrscr ();
    in = fopen ("KURS.txt", "r");
    //
    printf ("\n\t\t\t����������� ��������� ����������\n\n");
    printf ("\t� �⮬ ࠧ���� �� ����蠥� ����஢�� ���㪨 ��৥ ��� ⥪��,\n\t\t\t����ᠭ���� � 䠩� KURS.txt\n\n");
    while (!feof(in))        // ��⠥� �� 䠩��
    {
      fgets (str[i],80,in);
      puts (str[i]);
      i++;
    }
    im=i;
    printf("\n");
    for (i=0; i<im; i++)      // � ����� - ���ந��������
    {
      n = strlen (str[i]);
      for (int j=0; j<n; j++)
      {
	printf ("%c ", str[i][j]);
	shifr (str[i][j]);
	morse (str[i][j],1);  // ���ந������ ��ᨬ���쭮
      }
    }
   //
   //
   printf ("\n\n\t��� ��室� � ������� ���� ������ '/'\n\t");
   do
    {
      k = getch ();
    }
    while (k!='/');
    break;
  }  // while (1)
  return;
}
//
//______________________________________________________________________
//
// �஢�ઠ �᢮����� ������
void Verification ()
{
  while (1)
  {
    float m=0, vm=0;
    int ln, n;
    char k;
    float res=0;
    // � ���ᨢ ����頥� �� �������� ᨬ���� (�஬� ������ �९������)
    char a [] = {'�','�','�','�','�','�','�','�','�','�','�','�','�','�',
		 '�','�','�','�','�','�','�','�','�','�','�','�','�','�',
		 '�','�','�','0','1','2','3','4','5','6','7','8','9'};
    n = strlen (a);
    clrscr ();
    randomize ();
    //
    printf ("\n\t\t\t\t �������� ������\n\n");
    printf ("\t����� ࠧ��� �।�����祭 ��� �஢�ન ����祭��� ������\n");
    printf ("\t  ��३���, ��������, �� ���᪨� ��, ⠪ ��� ᨬ����\n\t\t ���� ��।������� ������ �� ���\n");
    printf ("\t   ��� ����� - �� ���� ������ ࠧ����� �� ��� \n\t\t�������襥 ������⢮ ᨬ�����\n");
    printf ("\t�� ����� ����� ���� �� �஢��� ᫮�����:\n");
    printf ("\t\t0 - ������ ᪮����\n\t\t1 - ��ଠ�쭠� ᪮����\n\t\t");
    //
    do      // �롨ࠥ� ᪮����
    {
      ln = getch () - 48;
    }
    while (ln!=0&&ln!=1);
    //
    switch (ln)
    {
     case 0: printf ("\n\t�� ��ࠫ� ������ ᪮����"); break;
     case 1: printf ("\n\t�� ��ࠫ� ��ଠ���� ᪮����"); break;
     default: break;
    }
    printf ("\t��� ��砫� ������ Enter!");
    while (getch()!=13); // ���� ����⨥ Enter
    //
/* ����� ���� �㭪��, ���������� ���� ����� ����� �����
������ � ���ந��������� ��㪮� ���㪨 ��৥ */
//
  char l;
  long b, b0, b1;
  b0 = b = biostime (0, 0L);  // ��⠫� ��⥬��� �६�
  b1 = b;
  int i = random (n); // ������� ��砩��� �ᥫ
  //
  //
  while ( ((b1-b)/CLK_TCK) < 60 )   // ���� �� ��諠 �����
  {
    morse (a[i], ln);
    vm++;  // ᪮�쪮 �ᥣ� ᨬ����� ���ந�����
		 // b1=b / CLK_TCK;  - b1 � ᥪ㭤�� (����� �� ⨪�)
    do
    {
      while (!kbhit()&&((b1-b)/ CLK_TCK < 60))
      {
	 b1 = biostime (0, 0L);
	 if ((b1-b0)/CLK_TCK>0.1)
	 {
	   b0 = b1;
	   gotoxy (75, 15);
	   printf ("%.1f", (b1-b) / CLK_TCK); // ���⠥� ᥪ㭤�
	 }
      } // while (!kbhit()&&((b1-b)/ CLK_TCK < 60))
      if (kbhit())
      {
	l = getch ();
	b1 = biostime (0, 0L);
	if ((b1-b0)/CLK_TCK>0.1)
	{
	  b0 = b1;
	  gotoxy (75, 15);
	  printf ("%.1f", (b1-b) / CLK_TCK); // ���⠥� ᥪ㭤�
	}
      } //if (kbhit())
    } //do
    while (!(l>='�'&&l<='�'||l>='0'&&l<='9'||l==27)&&((b1-b)/CLK_TCK<60));
    //
    gotoxy (9,15);
    printf ("��� �⢥�: %c\n\t�ࠢ���� �⢥�: %c  ", l, a[i]);
    if (l==a[i]) {printf ("\t\t  �����!\n"); m++; }  // ᪮�쪮 �ࠢ����� �⢥⮢
    else printf ("\t\t�������!\n");
    if (l==27) break;   // ��� ��室�
    i = random (n);  // ������ �롨ࠥ� �� �᫮
   } //while ( ((b1-b)/CLK_TCK) < 60 )
    //
    //
    printf ("\n\t�ࠢ����� �⢥⮢ - %.0f �� %.0f\n", m, vm);
    res=(m/vm);
    if (res==0) printf ("\n\t�� 㢥७�, �� ���諨 �� ������ �᪫����?\n\t���ࠡ��稪� �� ������, �� �� �� ���� �� ������ ��୮�� �⢥�!");
    if (res==1) printf ("\n\t����ࠢ�塞! �� ��᮫�⭮ �筮 �⣠���� �� ᨬ����!\n\t\t�� �㬠�� � ����� � ࠧ�����? :)");
    //
    if (res<1&&res>0.75) printf ("\n\t� ��� �������騥 १�����,\n\t� � ᪮஬ �६��� ��, ����᫮���, ������� 100% �ᯥ�!");
    if (res<=0.75&&res>0.4) printf ("\n\t��訬 १���⠬ ����� ������������!\n\t������ ���㪨 ��৥ ������ ����� ��� �ਣ�������");
    if (res<=0.4&&res>0) printf ("\n\t�� �, ��� ���� ࠭���� ���㯠�� � ��� �裡�⮢!\n\t�� � ������� �⮩ �ணࠬ�� �� ����� ᢮� ������ ���㪨 ��৥");
    //
    printf ("\n\n\t��� ��室� � ������� ���� ������ '/'\n\t");
    do
    {
      k = getch ();
    }
    while (k!='/');
    break;
  }  // while (1)
  return;
}

