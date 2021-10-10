

#include <stdio.h>

int main()
{
   float n;
   printf("Enter the value of n :- ");
   scanf("%f",&n);
   if(n<5.0)
   {
       printf("little or no damage");
   }
   else if(n>=5.0 && n<5.5)
   {
       printf("Some damage");
   }
   else if(n>=5.5 && n<6.5)
   {
       printf("Serious damage: walls may crack or wall");
   }else if(n>=6.5 && n<7.5)
   {
       printf("disaster houses and building may collapse");
   }
   else if(n>7.5)
   {
       printf("catastrophe most building destroyed");
   }
    return 0;
}