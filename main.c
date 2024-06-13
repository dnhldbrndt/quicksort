/*************************************************/
/*  main driver for Quick-Sort implementation    */
/*  This program will create an array of ints    */
/*  using a random number generator, then print  */
/*  the array, then sort it with a Quick-Sort    */
/*  algorithm, then print it again.              */
/*************************************************/
#include <stdlib.h>
#include <stdio.h>

main(int c,char **v)
{
   void Quick(int,int*);
   int binsearch(int*, int, int);
   int *list;
   int count,i;
   if (c==1) {printf("Usage: Quick list_size\n");exit(1);}

   /* use the first command line argument as the number
   of elements to create and sort     */
   count=atoi(v[1]);

   /* allocate space for the array       */
   list=(int *)malloc(count*sizeof(int));
   /* generate the array of random ints... use %count so
   that each number is the remainder when you divide
   by count.  Thus the biggest number you can get in
   your array is count-1              */
   for(i=0;i<count;i++) list[i]=random()%count;

   /*  sort the list of integers          */
   Quick(count,list);


   /* search the array for the integers entered on the command line */
   for (i = 2; i < c; i++) {
      if (binsearch(list, atoi(v[i]), count) == 1)
         printf("%d is in the list.\n", atoi(v[i]));
      else
         printf("%d is not in the list.\n", atoi(v[i]));
   }

   return (0);
}
