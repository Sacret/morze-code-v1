#include <stdio.h>
#include <dos.h>
//
//
// ��窠
void dot (int n)
{
 if (n)  //  ��ଠ�쭠� ᪮���� ���ந��������
 {
   sound (400); delay (150); nosound ();
   sound (0); delay (150); nosound ();
 }
 else    //  ������ ᪮���� ���ந��������
 {
   sound (400); delay (250); nosound ();
   sound (0); delay (250); nosound ();
 }
}
//
//_____________________________________________________
//
// ���
void dash (int n)
{
  if (n)  //  ��ଠ�쭠� ᪮���� ���ந��������
  {
    sound (400);  delay (450); nosound ();
    sound (0); delay (150); nosound ();
  }
  else    //  ������ ᪮���� ���ந��������
  {
    sound (400);  delay (750); nosound ();
    sound (0); delay (250); nosound ();
  }
}
//
//______________________________________________________
//
// ��㧠 ����� ᨬ������ � ����� ᫮��
void pause (int n)
{
  if (n)  //  ��ଠ�쭠� ᪮���� ���ந��������
  {
    sound (0); delay (450); nosound ();
  }
  else    //  ������ ᪮���� ���ந��������
  {
    sound (0); delay (750); nosound ();
  }
}
//
//__________________________________________________________
//
// ��㧠 ����� ᫮���� (�஡��)
void pause1 (int n)
{
  if (n)   //  ��ଠ�쭠� ᪮���� ���ந��������
  {
    sound (0); delay (1050); nosound ();
  }
  else     //  ������ ᪮���� ���ந��������
  {
    sound (0); delay (1750); nosound ();
  }
}
//
//
//____________________________________________________________
// ����஢�� ᨬ����� � ����� ��৥
//
void morse (char symb, int n)
{
  switch (symb)
  {
    case '�': case'�': case 'a': case 'A': dot(n); dash(n); pause(n); break;
    case '�': case'�': case 'b': case 'B': dash(n); dot(n); dot(n); dot(n); pause(n); break;
    case '�': case'�': case 'w': case 'W': dot(n); dash(n); dash(n); pause(n); break;
    case '�': case'�': case 'g': case 'G': dash(n); dash(n); dot(n); pause(n); break;
    case '�': case'�': case 'd': case 'D': dash(n); dot(n); dot(n); pause(n); break;
    case '�': case'�': case 'e': case 'E': dot(n); pause(n); break;
    case '�': case'�': case 'v': case 'V': dot(n); dot(n); dot(n); dash(n); pause(n); break;
    case '�': case'�': case 'z': case 'Z': dash(n); dash(n); dot(n); dot(n); pause(n); break;
    case '�': case'�': case 'i': case 'I': dot(n); dot(n); pause(n); break;
    case '�': case'�': case 'k': case 'K': dash(n); dot(n); dash(n); pause(n); break;
    case '�': case'�': case 'l': case 'L': dot(n); dash(n); dot(n); dot(n); pause(n); break;
    case '�': case'�': case 'm': case 'M': dash(n); dash(n); pause(n); break;
    case '�': case'�': case 'n': case 'N': dash(n); dot(n); pause(n); break;
    case '�': case'�': case 'o': case 'O': dash(n); dash(n); dash(n); pause(n); break;
    case '�': case'�': case 'p': case 'P': dot(n); dash(n); dash(n); dot(n); pause(n); break;
    case '�': case'�': case 'r': case 'R': dot(n); dash(n); dot(n); pause(n); break;
    case '�': case'�': case 's': case 'S': dot(n); dot(n); dot(n); pause(n); break;
    case '�': case'�': case 't': case 'T': dash(n); pause(n); break;
    case '�': case'�': case 'u': case 'U': dot(n); dot(n); dash(n); pause(n); break;
    case '�': case'�': case 'f': case 'F': dot(n); dot(n); dash(n); dot(n); pause(n); break;
    case '�': case'�': case 'h': case 'H':  dot(n); dot(n); dot(n); dot(n); pause(n); break;
    case '�': case'�': case 'c': case 'C':  dash(n); dot(n); dash(n); dot(n); pause(n); break;
    case '�': case'�': dash(n); dash(n); dash(n); dot(n); pause(n); break;
    case '�': case'�': dash(n); dash(n); dash(n); dash(n); pause(n); break;
    case '�': case'�': case 'q': case 'Q': dash(n); dash(n); dot(n); dash(n); pause(n); break;
    case '�': case'�': case 'y': case 'Y': dash(n); dot(n); dash(n); dash(n); pause(n); break;
    case '�': case'�': dot(n); dot(n); dash(n); dash(n); pause(n); break;
    case '�': case'�': dot(n); dash(n); dot(n); dash(n); pause(n); break;
    case '�': case'�': case 'j': case 'J': dot(n); dash(n); dash(n); dash(n); pause(n); break;
    case '�': case'�': case 'x': case 'X': dash(n); dot(n); dot(n); dash(n); pause(n); break;
    case '�': case'�': dot(n); dot(n); dash(n); dot(n); dot(n); pause(n); break;
    case ',': dot(n); dash(n); dot(n); dash(n); dot(n); dash(n); pause(n); break;
    case '.': dot(n); dot(n); dot(n); dot(n); dot(n); dot(n); pause(n); break;
    case ';': dash(n); dot(n); dash(n); dot(n); dash(n); dot(n); pause(n); break;
    case ':': dash(n); dash(n); dash(n); dot(n); dot(n); dot(n); pause(n); break;
    case '?': dot(n); dot(n); dash(n); dash(n); dot(n); dot(n); pause(n); break;
    case '�': dash(n); dot(n); dot(n); dash(n); dot(n); pause(n); break;
    case '+': dot(n); dash(n); dot(n); dash(n); dot(n); pause(n); break;
    case '(': case ')': dash(n); dot(n); dash(n); dash(n); dot(n); dash(n); pause(n); break;
    case '!': dash(n); dash(n); dot(n); dot(n); dash(n); dash(n); pause(n); break;
    case '-': dash(n); dot(n); dot(n); dot(n); dot(n); dash(n); pause(n); break;
    case '1': dot(n); dash(n); dash(n); dash(n); dash(n); pause(n); break;
    case '2': dot(n); dot(n); dash(n); dash(n); dash(n); pause(n); break;
    case '3': dot(n); dot(n); dot(n); dash(n); dash(n); pause(n); break;
    case '4': dot(n); dot(n); dot(n); dot(n); dash(n); pause(n); break;
    case '5': dot(n); dot(n); dot(n); dot(n); dot(n); pause(n); break;
    case '6': dash(n); dot(n); dot(n); dot(n); dot(n); pause(n); break;
    case '7': dash(n); dash(n); dot(n); dot(n); dot(n); pause(n); break;
    case '8': dash(n); dash(n); dash(n); dot(n); dot(n); pause(n); break;
    case '9': dash(n); dash(n); dash(n); dash(n); dot(n); pause(n); break;
    case '0': dash(n); dash(n); dash(n); dash(n); dash(n); pause(n); break;
    case ' ': pause1(n); break;
    default: break;
  } // switch
}
//
//
//___________________________________________________________________________
//
// ���஢�� ᨬ�����
void shifr (char symb)
{
  switch (symb)
  {
    case '�': case'�': case 'a': case 'A':  printf (".-"); break;
    case '�': case'�': case 'b': case 'B':  printf ("-..."); break;
    case '�': case'�': case 'w': case 'W':  printf (".--"); break;
    case '�': case'�': case 'g': case 'G':  printf ("--."); break;
    case '�': case'�': case 'd': case 'D':  printf ("-.."); break;
    case '�': case'�': case 'e': case 'E':  printf ("."); break;
    case '�': case'�': case 'v': case 'V':  printf ("...-"); break;
    case '�': case'�': case 'z': case 'Z':  printf ("--.."); break;
    case '�': case'�': case 'i': case 'I':  printf (".."); break;
    case '�': case'�': case 'k': case 'K':  printf ("-.-"); break;
    case '�': case'�': case 'l': case 'L':  printf (".-.."); break;
    case '�': case'�': case 'm': case 'M':  printf ("--"); break;
    case '�': case'�': case 'n': case 'N':  printf ("-."); break;
    case '�': case'�': case 'o': case 'O':  printf ("---"); break;
    case '�': case'�': case 'p': case 'P':  printf (".--."); break;
    case '�': case'�': case 'r': case 'R':  printf (".-."); break;
    case '�': case'�': case 's': case 'S':  printf ("..."); break;
    case '�': case'�': case 't': case 'T':  printf ("-"); break;
    case '�': case'�': case 'u': case 'U':  printf ("..-"); break;
    case '�': case'�': case 'f': case 'F':  printf ("..-."); break;
    case '�': case'�': case 'h': case 'H':  printf ("...."); break;
    case '�': case'�': case 'c': case 'C':  printf ("-.-."); break;
    case '�': case'�':  printf ("---."); break;
    case '�': case'�':  printf ("----"); break;
    case '�': case'�': case 'q': case 'Q':  printf ("--.-"); break;
    case '�': case'�': case 'y': case 'Y':  printf ("-.--"); break;
    case '�': case'�':  printf ("..--"); break;
    case '�': case'�':  printf (".-.-"); break;
    case '�': case'�': case 'j': case 'J':  printf (".---"); break;
    case '�': case'�': case 'x': case 'X':  printf ("-..-"); break;
    case '�': case'�':  printf ("..-.."); break;
    case ',':  printf (".-.-.-"); break;
    case '.':  printf ("......"); break;
    case ';':  printf ("-.-.-."); break;
    case ':':  printf ("---..."); break;
    case '?':  printf ("..--.."); break;
    case '�':  printf ("-..-."); break;
    case '+':  printf (".-.-."); break;
    case '(': case ')': printf ("-.--.-"); break;
    case '!':  printf ("--..--"); break;
    case '-':  printf ("-....-"); break;
    case '1':  printf (".----"); break;
    case '2':  printf ("..---"); break;
    case '3':  printf ("...--"); break;
    case '4':  printf ("....-"); break;
    case '5':  printf ("....."); break;
    case '6':  printf ("-...."); break;
    case '7':  printf ("--..."); break;
    case '8':  printf ("---.."); break;
    case '9':  printf ("----."); break;
    case '0':  printf ("-----"); break;
    case ' ': printf ("   ");
    default: break;
    } // switch
    printf("  ");
}