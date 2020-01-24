#include<stdio.h>
void main()
{
  char type;
  printf("enter type\n");
  scanf("%c",&type);
  switch(type)
  {
    case 'k':
    case 'K': printf("sanskrit performance\n");
              break;
    case 't': 
    case 'T': printf("tamil and telugu performance\n");
              break;
    case 'e':
    case 'E': printf("english and hindi and urdu performance\n");
              break;
    case 'm':
    case 'M': printf("malyalam performance\n");
              break;
    default : printf("mashup of all languages\n");
   }
}
    
