#include <stdio.h>
#include <string.h>
//#include<conio.h>

void main()
{
  char s[] = "My name is Prabhash Tiwari. I hail from Lucknow";
  char word[10],rpwrd[10],str[10][10];
  int i=0,j=0,k=0,w,p;

  printf("My name is Prabhash Tiwari. I hail from Lucknow\n");
  printf("\nENTER WHICH WORD IS TO BE REPLACED\n");
  scanf("%s",word);
  printf("\nENTER BY WHICH WORD THE %s IS TO BE REPLACED\n",word);
  scanf("%s",rpwrd);
  p=strlen(s);

  for (k=0; k<p; k++)
    {
      if (s[k]!=' ')
        {
          str[i][j] = s[k];
          j++;
        }
      else
        {
          str[i][j]='\0';
          j=0; i++;
        }
    }

  str[i][j]='\0';
  w=i;

  for (i=0; i<=w; i++)
    {
      if(strcmp(str[i],word)==0)
        strcpy(str[i],rpwrd);

      printf("%s ",str[i]);
    }
 // getch();
}
