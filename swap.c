void swap(int i,int j,int *l)
{
int tmp;

tmp = l[i];
l[i] = l[j];
l[j] = tmp;
}