#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct person {int IQ; char *ZodiacSign;};

struct person exampleProducer(){
  srand(time(NULL));
  char *signs[12] = {"Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn", "Aquarius" , "Pisces"};
  int iqs[12];
  int i;
  for(i=0;i<12;i++){
    int random = rand();
    if (random%2)
      random*=-1;
    iqs[i] = 100 + random%50;
  }
  int random2 = rand()%12;

  struct person caleb;
  caleb.IQ = iqs[random2];
  caleb.ZodiacSign = signs[random2];
  return caleb;
}
void structPrinter(struct person caleb){
  printf("Person's IQ: %d, Person's Zodiac Sign: %s\n", caleb.IQ, caleb.ZodiacSign);
}
int main(){
  struct person caleb = exampleProducer();
  structPrinter(caleb);
  return 0;
}
