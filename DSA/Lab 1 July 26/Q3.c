

#include<stdio.h>
int main(){
  double arr1[12],arr2[12];
  double sum1=0;
    double sum2=0;
  printf("Enter the monthly rainfall of this year (Jan-Dec)");
  for(int i=0;i<12;i++)
  {
    scanf("%lf",&arr1[i]);
    sum1+=arr1[i];
  }
   printf("\n Enter the monthly rainfall of previous year (Jan-Dec)\n");
  for(int i=0;i<12;i++)
  {
    scanf("%lf",&arr2[i]);
    sum2+=arr2[i];
  }
  printf("    Total monthly rainfall \n");
  printf("  January  February  March   April   May   June   July   August   September   October   November   December   \n");
  printf("This year       ");
  for(int i=0;i<12;i++){
    printf("%0.1lf ",arr1[i]);
  }
  printf("\n Previous year  ");
  for(int i=0;i<12;i++){
    printf("%0.1lf ",arr2[i]);
  }
  
   printf("\n Total rainfall this year:%lf",sum1);
  printf("\n Total rainfall previous year:%lf",sum2);
  printf("\n Average monthly rainfall this year:%lf",sum1/12);
  printf("\n Average monthly rainfall this year:%lf",sum2/12);
  
  
 
  
  return 0;
}