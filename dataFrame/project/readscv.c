#include <stdio.h>

int main () {
   FILE *fp;
   int row = 1;
   int c;

   fp = fopen("gradeTable.csv","r");

   for(int i = 0; i < row; i++){
       fgets(row, 1000, fp);
   }
   printf("%c", c);
   fclose(fp);

   return(0);
}