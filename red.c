#include<stdio.h>
void main()
{
  char type;
  printf("enter type\n");
  scanf("%c",&type);
  switch(type)
  {
    case 'k':
    case 'K': printf("kannada performance\n");
              break;
    case 't': 
    case 'T': printf("tamil and telugu performance\n");
              break;
    case 'e':
    case 'E': printf("english and hindi performance\n");
              break;
    case 'm':
    case 'M': printf("malayalam performance\n");
              break;
    default : printf("mashup of all languages\n");
   }
}
    
