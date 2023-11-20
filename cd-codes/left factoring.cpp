#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
void main()
{
  clrscr();
  char s[15], t1[5] = "\0", t2[5] = "\0", t3[5] = "\0", t4[10] = "\0", s1[10] = "\0", s2[10] = "\0";
  int i, l, p, j, x;
  cout << "\nEnter the grammer :: ";
  cin >> s;
  l = strlen(s);
  for (i = 0; i < l; i++)
  {
    if (s[i] == '/')
    {
      p = i;
      break;
    }
  }
  j = 0;
  for (i = 3; i < p; i++)
  {
    t1[j] = s[i];
    j++;
  }
  j = 0;
  for (i = p + 1; i < l; i++)
  {
    t2[j] = s[i];
    j++;
  }
  j = 0;
  for (i = 0; t1[i] != '\0' || t2[i] != '\0'; i++)
  {
    if (t1[i] == t2[i])
    {
      t3[j] = t1[i];
      j++;
    }
    else
    {
      break;
    }
  }
  x = 0;
  for (i = j + 3; i < p; i++)
  {
    t4[x] = s[i];
    x++;
  }
  t4[x] = '/';
  for (i = p + j + 1; i < l; i++)
  {
    t4[x + 1] = s[i];
    x++;
  }
  cout << "\nThe grammar after left factoring is ::";
  for (i = 0; i < 3; i++)
  {
    s1[i] = s[i];
    s2[i + 1] = s[i + 1];
  }
  strcat(s1, t3);
  strcat(s1, "Z");
  s2[0] = 'Z';
  s2[i] = '\0';
  strcat(s2, t4);
  cout << "\n\n"
       << s1 << "\n\n"
       << s2;
  getch();
}