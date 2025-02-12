
#include <stdio.h>

int main()
{
   int c = 0;
   char s[101];
   scanf("%s",s);
   while (s[c] != '\0') {
      if (s[c] >= 'A' && s[c] <= 'Z')
         s[c] = s[c] + 32;
      else if (s[c] >= 'a' && s[c] <= 'z')
         s[c] = s[c] - 32;
      c++;
   }
   printf("%s\n", s);
    return 0;

}
