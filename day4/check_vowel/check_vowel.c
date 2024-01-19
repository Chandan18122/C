#include <stdio.h>
//check vowel
int
main ()
{
  char ch;
  printf ("Enter the alphabet : ");
  scanf ("%c", &ch);
  switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      printf ("Vowel");
    break;
    default:
        printf("Alphabet");
    break;
    }
  return 0;
}

