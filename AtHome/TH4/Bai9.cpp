void sortAscending(float array[], int size)
{
    for (int i=0;i<size;i++)
        for (int j=i;j<size;j++)
            if (array[j]<array[i])
            {
                swap(array[j],array[i]);
            }
}
void reverseArray(float array[], int size)
{
    for (int i=0;i<size/2;i++)
        {
            swap(array[i],array[size-1-i]);
        }
}
void sort(float array[], int size, bool isAscending)
{
    sortAscending(array, size);
    if (isAscending==false)
        reverseArray(array, size);
}