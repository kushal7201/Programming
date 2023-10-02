// #include <stdio.h>
// #include <limits.h>
// #include <float.h>

// int main() {
//     printf("Ranges of various data types on this machine:\n\n");

//     printf("CHAR_BIT    : %d\n", CHAR_BIT);
//     printf("CHAR_MAX    : %d\n", CHAR_MAX);
//     printf("CHAR_MIN    : %d\n", CHAR_MIN);
//     printf("INT_MAX     : %d\n", INT_MAX);
//     printf("INT_MIN     : %d\n", INT_MIN);
//     printf("SCHAR_MAX   : %d\n", SCHAR_MAX);
//     printf("SCHAR_MIN   : %d\n", SCHAR_MIN);
//     printf("SHRT_MAX    : %d\n", SHRT_MAX);
//     printf("SHRT_MIN    : %d\n", SHRT_MIN);
//     printf("UCHAR_MAX   : %d\n", UCHAR_MAX);
//     printf("UINT_MAX    : %u\n", UINT_MAX);
//     printf("ULONG_MAX   : %lu\n", (unsigned long) ULONG_MAX);
//     printf("USHRT_MAX   : %d\n", USHRT_MAX);
//     printf("\n");
    
//     printf("Ranges of various floating point types on this machine:\n\n");

//     printf("FLT_RADIX   : %d\n", FLT_RADIX);
//     printf("FLT_ROUNDS  : %d\n", FLT_ROUNDS);
//     printf("FLT_DIG     : %d\n", FLT_DIG);
//     printf("FLT_EPSILON : %g\n", FLT_EPSILON);
//     printf("FLT_MANT_DIG: %d\n", FLT_MANT_DIG);
//     printf("FLT_MAX     : %g\n", FLT_MAX);
//     printf("FLT_MAX_EXP : %d\n", FLT_MAX_EXP);
//     printf("FLT_MIN     : %g\n", FLT_MIN);
//     printf("FLT_MIN_EXP : %d\n", FLT_MIN_EXP);
//     printf("DBL_DIG     : %d\n", DBL_DIG);
//     printf("DBL_EPSILON : %g\n", DBL_EPSILON);
//     printf("DBL_MANT_DIG: %d\n", DBL_MANT_DIG);
//     printf("DBL_MAX     : %g\n", DBL_MAX);
//     printf("DBL_MAX_EXP : %d\n", DBL_MAX_EXP);
//     printf("DBL_MIN     : %g\n", DBL_MIN);
//     printf("DBL_MIN_EXP : %d\n", DBL_MIN_EXP);

//     return 0;
// }


#include <stdio.h>

int main() {
    printf("Ranges of various data types:\n\n");

    printf("char           : %d to %d\n", -(char)((unsigned char)~0 >> 1) - 1, (char)((unsigned char)~0 >> 1));
    printf("signed char    : %d to %d\n", -(char)((unsigned char)~0 >> 1) - 1, (char)((unsigned char)~0 >> 1));
    printf("unsigned char  : 0 to %u\n", (unsigned char)~0);
    printf("short          : %d to %d\n", -(short)((unsigned short)~0 >> 1) - 1, (short)((unsigned short)~0 >> 1));
    printf("unsigned short : 0 to %u\n", (unsigned short)~0);
    printf("int            : %d to %d\n", -(int)((unsigned int)~0 >> 1) - 1, (int)((unsigned int)~0 >> 1));
    printf("unsigned int   : 0 to %u\n", (unsigned int)~0);
    printf("long           : %ld to %ld\n", -(long)((unsigned long)~0 >> 1) - 1, (long)((unsigned long)~0 >> 1));
    printf("unsigned long  : 0 to %lu\n", (unsigned long)~0);

    return 0;
}