int Partition(int *l,int low,int high)
{
	void swap(int,int,int*);
	int i,pivotloc;
	int pivotkey;

	swap(low,(low+high)/2,l);
	pivotkey = l[low];
	pivotloc = low;
	for (i=low+1;i<=high;i++)
	if (l[i] < pivotkey) swap(++pivotloc,i,l);
	swap(low,pivotloc,l);
	return (pivotloc);
}