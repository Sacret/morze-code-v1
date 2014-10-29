#include <stdio.h>
#include <dos.h>
//
//
// Точка
void dot (int n)
{
 if (n)  //  Нормальная скорость воспроизведения
 {
   sound (400); delay (150); nosound ();
   sound (0); delay (150); nosound ();
 }
 else    //  Низкая скорость воспроизведения
 {
   sound (400); delay (250); nosound ();
   sound (0); delay (250); nosound ();
 }
}
//
//_____________________________________________________
//
// Тире
void dash (int n)
{
  if (n)  //  Нормальная скорость воспроизведения
  {
    sound (400);  delay (450); nosound ();
    sound (0); delay (150); nosound ();
  }
  else    //  Низкая скорость воспроизведения
  {
    sound (400);  delay (750); nosound ();
    sound (0); delay (250); nosound ();
  }
}
//
//______________________________________________________
//
// Пауза между символами в одном слове
void pause (int n)
{
  if (n)  //  Нормальная скорость воспроизведения
  {
    sound (0); delay (450); nosound ();
  }
  else    //  Низкая скорость воспроизведения
  {
    sound (0); delay (750); nosound ();
  }
}
//
//__________________________________________________________
//
// Пауза между словами (пробел)
void pause1 (int n)
{
  if (n)   //  Нормальная скорость воспроизведения
  {
    sound (0); delay (1050); nosound ();
  }
  else     //  Низкая скорость воспроизведения
  {
    sound (0); delay (1750); nosound ();
  }
}
//
//
//____________________________________________________________
// Кодировка символов в азбуку Морзе
//
void morse (char symb, int n)
{
  switch (symb)
  {
    case 'а': case'А': case 'a': case 'A': dot(n); dash(n); pause(n); break;
    case 'б': case'Б': case 'b': case 'B': dash(n); dot(n); dot(n); dot(n); pause(n); break;
    case 'в': case'В': case 'w': case 'W': dot(n); dash(n); dash(n); pause(n); break;
    case 'г': case'Г': case 'g': case 'G': dash(n); dash(n); dot(n); pause(n); break;
    case 'д': case'Д': case 'd': case 'D': dash(n); dot(n); dot(n); pause(n); break;
    case 'е': case'Е': case 'e': case 'E': dot(n); pause(n); break;
    case 'ж': case'Ж': case 'v': case 'V': dot(n); dot(n); dot(n); dash(n); pause(n); break;
    case 'з': case'З': case 'z': case 'Z': dash(n); dash(n); dot(n); dot(n); pause(n); break;
    case 'и': case'И': case 'i': case 'I': dot(n); dot(n); pause(n); break;
    case 'к': case'К': case 'k': case 'K': dash(n); dot(n); dash(n); pause(n); break;
    case 'л': case'Л': case 'l': case 'L': dot(n); dash(n); dot(n); dot(n); pause(n); break;
    case 'м': case'М': case 'm': case 'M': dash(n); dash(n); pause(n); break;
    case 'н': case'Н': case 'n': case 'N': dash(n); dot(n); pause(n); break;
    case 'о': case'О': case 'o': case 'O': dash(n); dash(n); dash(n); pause(n); break;
    case 'п': case'П': case 'p': case 'P': dot(n); dash(n); dash(n); dot(n); pause(n); break;
    case 'р': case'Р': case 'r': case 'R': dot(n); dash(n); dot(n); pause(n); break;
    case 'с': case'С': case 's': case 'S': dot(n); dot(n); dot(n); pause(n); break;
    case 'т': case'Т': case 't': case 'T': dash(n); pause(n); break;
    case 'у': case'У': case 'u': case 'U': dot(n); dot(n); dash(n); pause(n); break;
    case 'ф': case'Ф': case 'f': case 'F': dot(n); dot(n); dash(n); dot(n); pause(n); break;
    case 'х': case'Х': case 'h': case 'H':  dot(n); dot(n); dot(n); dot(n); pause(n); break;
    case 'ц': case'Ц': case 'c': case 'C':  dash(n); dot(n); dash(n); dot(n); pause(n); break;
    case 'ч': case'Ч': dash(n); dash(n); dash(n); dot(n); pause(n); break;
    case 'ш': case'Ш': dash(n); dash(n); dash(n); dash(n); pause(n); break;
    case 'щ': case'Щ': case 'q': case 'Q': dash(n); dash(n); dot(n); dash(n); pause(n); break;
    case 'ы': case'Ы': case 'y': case 'Y': dash(n); dot(n); dash(n); dash(n); pause(n); break;
    case 'ю': case'Ю': dot(n); dot(n); dash(n); dash(n); pause(n); break;
    case 'я': case'Я': dot(n); dash(n); dot(n); dash(n); pause(n); break;
    case 'й': case'Й': case 'j': case 'J': dot(n); dash(n); dash(n); dash(n); pause(n); break;
    case 'ь': case'ъ': case 'x': case 'X': dash(n); dot(n); dot(n); dash(n); pause(n); break;
    case 'э': case'Э': dot(n); dot(n); dash(n); dot(n); dot(n); pause(n); break;
    case ',': dot(n); dash(n); dot(n); dash(n); dot(n); dash(n); pause(n); break;
    case '.': dot(n); dot(n); dot(n); dot(n); dot(n); dot(n); pause(n); break;
    case ';': dash(n); dot(n); dash(n); dot(n); dash(n); dot(n); pause(n); break;
    case ':': dash(n); dash(n); dash(n); dot(n); dot(n); dot(n); pause(n); break;
    case '?': dot(n); dot(n); dash(n); dash(n); dot(n); dot(n); pause(n); break;
    case '№': dash(n); dot(n); dot(n); dash(n); dot(n); pause(n); break;
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
// Шифровка символов
void shifr (char symb)
{
  switch (symb)
  {
    case 'а': case'А': case 'a': case 'A':  printf (".-"); break;
    case 'б': case'Б': case 'b': case 'B':  printf ("-..."); break;
    case 'в': case'В': case 'w': case 'W':  printf (".--"); break;
    case 'г': case'Г': case 'g': case 'G':  printf ("--."); break;
    case 'д': case'Д': case 'd': case 'D':  printf ("-.."); break;
    case 'е': case'Е': case 'e': case 'E':  printf ("."); break;
    case 'ж': case'Ж': case 'v': case 'V':  printf ("...-"); break;
    case 'з': case'З': case 'z': case 'Z':  printf ("--.."); break;
    case 'и': case'И': case 'i': case 'I':  printf (".."); break;
    case 'к': case'К': case 'k': case 'K':  printf ("-.-"); break;
    case 'л': case'Л': case 'l': case 'L':  printf (".-.."); break;
    case 'м': case'М': case 'm': case 'M':  printf ("--"); break;
    case 'н': case'Н': case 'n': case 'N':  printf ("-."); break;
    case 'о': case'О': case 'o': case 'O':  printf ("---"); break;
    case 'п': case'П': case 'p': case 'P':  printf (".--."); break;
    case 'р': case'Р': case 'r': case 'R':  printf (".-."); break;
    case 'с': case'С': case 's': case 'S':  printf ("..."); break;
    case 'т': case'Т': case 't': case 'T':  printf ("-"); break;
    case 'у': case'У': case 'u': case 'U':  printf ("..-"); break;
    case 'ф': case'Ф': case 'f': case 'F':  printf ("..-."); break;
    case 'х': case'Х': case 'h': case 'H':  printf ("...."); break;
    case 'ц': case'Ц': case 'c': case 'C':  printf ("-.-."); break;
    case 'ч': case'Ч':  printf ("---."); break;
    case 'ш': case'Ш':  printf ("----"); break;
    case 'щ': case'Щ': case 'q': case 'Q':  printf ("--.-"); break;
    case 'ы': case'Ы': case 'y': case 'Y':  printf ("-.--"); break;
    case 'ю': case'Ю':  printf ("..--"); break;
    case 'я': case'Я':  printf (".-.-"); break;
    case 'й': case'Й': case 'j': case 'J':  printf (".---"); break;
    case 'ь': case'ъ': case 'x': case 'X':  printf ("-..-"); break;
    case 'э': case'Э':  printf ("..-.."); break;
    case ',':  printf (".-.-.-"); break;
    case '.':  printf ("......"); break;
    case ';':  printf ("-.-.-."); break;
    case ':':  printf ("---..."); break;
    case '?':  printf ("..--.."); break;
    case '№':  printf ("-..-."); break;
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