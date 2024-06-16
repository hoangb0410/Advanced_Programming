int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2)
{
    int *mergeArr = new int [lenArr1+lenArr2];
    bool check=true; //tang dan
    int firstIndex = 0, secondIndex = 0, mergeIndex = 0;
    while (firstArr[firstIndex]==firstArr[firstIndex+1])
    {
        firstIndex++;
    }
    if (firstArr[firstIndex]>firstArr[firstIndex+1])
        check=false; //giam
    for (int i=0;i<lenArr1+lenArr2;i++)
    {
        if (i<lenArr1)
            mergeArr[i]=firstArr[i];
        else
            mergeArr[i]=secondArr[i-lenArr1];
    }
    if (check==true)
    {
        for (int i=0;i<lenArr1+lenArr2-1;i++)
        for (int j=i+1;j<lenArr1+lenArr2;j++)
            if (mergeArr[j]<mergeArr[i])
                swap(mergeArr[i],mergeArr[j]);
    }
    else
    {
        for (int i=0;i<lenArr1+lenArr2-1;i++)
        for (int j=i+1;j<lenArr1+lenArr2;j++)
            if (mergeArr[j]>mergeArr[i])
                swap(mergeArr[i],mergeArr[j]);
    }
    return mergeArr;
}