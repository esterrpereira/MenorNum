#include <stdio.h>

int main() 
{
  int e, f, t, menor;
  printf("Digite o três números: ");
  scanf("%d %d %d", &e, &f, &t);
  
 if ( e < f && e < t )
   menor = e;
  else
   if (f < e && f < t)
     menor = f;
  else
     if (t  < e && t < f)
       menor = t;
     
     
  
 printf("Menor número é: %d" , menor) ;
}