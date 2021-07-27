// #include <stdio.h>
// #include <ctype.h>

// int	ft_isalpha(int c);

// int main () {
//    int var1 = 'd';
//    int var2 = '2';
//    int var3 = '\t';
//    int var4 = ' ';

//    if( ft_isalpha(var1) ) {
//       printf("var1 = |%c| is an alphabet\n", var1 );
//    } else {
//       printf("var1 = |%c| is not an alphabet\n", var1 );
//    }

//    if( ft_isalpha(var2) ) {
//       printf("var2 = |%c| is an alphabet\n", var2 );
//    } else {
//       printf("var2 = |%c| is not an alphabet\n", var2 );
//    }

//    if( ft_isalpha(var3) ) {
//       printf("var3 = |%c| is an alphabet\n", var3 );
//    } else {
//       printf("var3 = |%c| is not an alphabet\n", var3 );
//    }

//    if( ft_isalpha(var4) ) {
//       printf("var4 = |%c| is an alphabet\n", var4 );
//    } else {
//       printf("var4 = |%c| is not an alphabet\n", var4 );
//    }

//    return(0);
// }

// #include <stdio.h>
// #include <string.h>

// int ft_strlen(char *str);

// int main () {
//    char str[50];
//    int len;

//    strcpy(str, "This is tutorialspoint.com");

//    len = strlen(str);
//    printf("Length of |%s| is |%d|\n", str, len);

//    return(0);
// }

#include <stdio.h>
#include <ctype.h>

int	fi_isdigit(int c);

int main () {
   int var1 = 'h';
   int var2 = '2';

   if( fi_isdigit(var1) ) {
      printf("var1 = |%c| is a digit\n", var1 );
   } else {
      printf("var1 = |%c| is not a digit\n", var1 );
   }

   if( fi_isdigit(var2) ) {
      printf("var2 = |%c| is a digit\n", var2 );
   } else {
      printf("var2 = |%c| is not a digit\n", var2 );
   }

   return(0);
}
