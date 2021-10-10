#include <stdio.h>

int isComma(char sep)   {
   return sep ==',' ? 1 : 0;
}

int isNewline(char end) {
   return end == '\n' ? 1 : 0;
}

int main () {
   FILE *fp;
   int c;

   int cndSep = 0;
   int cntEnd = 0;
   int cnt = 0;

   char columns[21][6][10];
   char cell[10] = { '0', };

   fp = fopen("gradeTable.csv","r");
   while(1) {
      c = fgetc(fp);
      if (isComma(c) == 1) {
         cndSep++;
         cell[cnt++] = '\0';
         cnt=0;

         // printf("%5d", cndSep);
         
      } else if (isNewline(c) == 1)  {
         cndSep = 0;
         cntEnd++;
         cell[cnt++] = '\0';
         cnt = 0;

         // printf("%5d", cntEnd);
      } else if ( (isComma(c) == 0 ) && ( isNewline(c) == 0 ) ) {
         cell[cnt] = c;
         cnt++;
      }
      if( feof(fp) ) { 
         break ;
      }
      printf("%c", c);
   }
   fclose(fp);

   printf("%s", cell);

   return(0);
}