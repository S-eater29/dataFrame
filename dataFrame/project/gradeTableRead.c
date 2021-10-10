#include <stdio.h>

int main () {
   FILE *fp;
   int c;

   char columns[21][6];

   fp = fopen("gradeTable.csv","r");
   while(1) {
      c = fgetc(fp);
      if( feof(fp) ) { 
         break ;
      }
      printf("%c", c);
   }
   fclose(fp);

   return(0);
}