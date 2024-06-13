void Sort(int *l,int low,int high)
{
int Partition(int*,int,int);
int pivotloc;

if (low < high) {
pivotloc = Partition(l,low,high);
Sort(l,low,pivotloc-1);
Sort(l,pivotloc+1,high);
}
}