/*  binary search function. takes in the key, integer count and  */
/*  a pointer to the array of sorted value.                      */


int binsearch(int* data, int k, int c)
{
   int top,bottom,middle,i;
   int key = k;
   int count = c;

   top=0;
   bottom=count-1;
   middle=(top+bottom)/2;

   /* loop through the array of integers to  match the key value*/
   do{
      if (data[middle]<key)
         top=middle+1;
      else
         bottom=middle;
      middle=(top+bottom)/2;
   }while(top<bottom);

   /* if the key is found return 1, if not return 0 */
   if (data[middle]==key)
      return (1);
   else
      return (0);
}
