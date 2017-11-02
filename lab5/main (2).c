#include<stdio.h>
typedef struct Books{
char* Authour;
char* name;
int year;
}Books;
void print(Books p){
  printf("%s - %s %d(year) \n\n",p.name,p.Authour,p.year);
}

int main(){
  Books Book[5];
  Book[0].name="1984 ";
  Book[0].Authour="Jorg Oruell";
  Book[0].year=2015;
  Book[1].name="Mater and Margarita";
  Book[1].Authour="Bulgakov";
  Book[1].year=2013;
  Book[2].name="Three Friend";
  Book[2].Authour="Maria Remark";
  Book[2].year=2008;
  Book[3].name="Anna Karenina";
  Book[3].Authour="Lev Tolstoy";
  Book[3].year=2006;
  Book[4].name="100 years of loneliness";
  Book[4].Authour="Garcia Marges";
  Book[4].year=2007;
  Books oldest=Book[0];
  for(int i=0;i<5;i++){
      if(Book[i].year<oldest.year){
      oldest=Book[i];
      }
  }
  for(int i=0;i<5;i++){
  if(Book[i].year==oldest.year){
    printf("<<Old Book>> ");
  }
    print(Book [i]);
    
  }
}
