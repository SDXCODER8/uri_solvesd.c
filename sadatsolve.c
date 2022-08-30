// probleam number 1001

#include <stdio.h>
int main()
{
      int A,B,X ;
      scanf("%d%d",&A,&B);
      A,&B
      
      X = A+B;
      printf("X = %d\n",X);
      return 0;
      
}
// probleam number 2764

#include <stdio.h>
int main()
{
    int DD, MM, YYY;
    // printf("Enter the date: ");
    scanf("%d/%d/%d", &DD, &MM, &YYY);

    // printf("%d/%d/%d\n",day,month,year);
    printf("%02d/%02d/%02d\n", MM, DD, YYY);
    printf("%02d/%02d/%02d\n", YYY, MM, DD);
    printf("%02d-%02d-%02d\n", DD, MM, YYY);
    return 0;
}

// probleam number 1003

#include <stdio.h>

int main()
{
      int A , B ,SOMA;
      scanf(" %d %d",&A,&B);
      
      SOMA = A + B;
      printf("SOMA = %d\n",SOMA);
      return 0;
      
}

// probleam number 1002

#include <stdio.h>
int main()
{
      float A,n = 3.1416,R = 2.00 ;
      
      A = n*(R*R);
      printf("A = %f\n",A);
      return 0;
      
}
// probleam number 2747
#include <stdio.h>
int main()
{
   printf("---------------------------------------\n");
   printf("|                                     |\n");
   printf("|                                     |\n");
   printf("|                                     |\n");
   printf("|                                     |\n");
   printf("|                                     |\n");
   printf("---------------------------------------");
   
return 0;
}


// probleam number 2748
// #include <stdio.h>
int main()
{
   printf("---------------------------------------\n");
   printf("|        Roberto                      |\n");
   printf("|                                     |\n");
   printf("|        5786                         |\n");
   printf("|                                     |\n");
   printf("|        UNIFEI                       |\n");
   printf("---------------------------------------\n");
   
return 0;
}
// probleam 2749
#include <stdio.h>
int main()
{
   printf("---------------------------------------\n");
   printf("|x = 35                               |\n");
   printf("|                                     |\n");
   printf("|               x = 35                |\n");
   printf("|               x = 35                |\n");
   printf("|                                     |\n");
   printf("|                               x = 35|\n");
   printf("---------------------------------------\n");
   
return 0;
}

// probleam 2750

int main()
{
   printf("---------------------------------------\n");
   printf("|  decimal  |  octal  |  Hexadecimal  |\n");
   printf("---------------------------------------\n");
   printf("|      0    |    0    |       0       |\n");
   printf("|      1    |    1    |       1       |\n");
   printf("|      2    |    2    |       2       |\n");
   printf("|      3    |    3    |       3       |\n");
   printf("|      4    |    4    |       4       |\n");
   printf("|      5    |    5    |       5       |\n");
   printf("|      6    |    6    |       6       |\n");
   printf("|      7    |    7    |       7       |\n");
   printf("|      8    |   10    |       8       |\n");
   printf("|      9    |   11    |       9       |\n");
   printf("|     10    |   12    |       A       |\n");
   printf("|     11    |   13    |       B       |\n");
   printf("|     12    |   14    |       C       |\n");
   printf("|     13    |   15    |       D       |\n");
   printf("|     14    |   16    |       F       |\n");
   printf("|     15    |   17    |       E       |\n");
   printf("---------------------------------------\n");
   
return 0;
}

// probleam 2757

#include<stdio.h>

int main()
{
     int a, b, c;

     // input three integers
     scanf("%d %d %d",&a,&b,&c);

     // displaying three integer by different way
     printf("A = %d, B = %d, C = %d\n",a,b,c);
     printf("A = %10d, B = %10d, C = %10d\n",a,b,c);
     printf("A = %010d, B = %010d, C = %010d\n",a,b,c);
     printf("A = %-10d, B = %-10d, C = %-10d\n",a,b,c);

     return 0;
}
