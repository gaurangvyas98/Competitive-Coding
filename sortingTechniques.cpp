//insertion sort
void insertionSort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current = a[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(current < a[j])
                a[j+1]=a[j];
            else
                break;
        }
        a[j+1]=current;
    }
}
//bubble  sort
void bubbleSort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void selectionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
    int min=a[i],minIndex=i;
    for(int j=i+1;j<n;j++)
    {
        if(a[j]<min)
            {
                min=a[j];
                minIndex=j;
            }
    }
    int temp=a[i];
    a[i]=a[minIndex];
    a[minIndex]=temp;
    }
}

// quick sort
int partition(int a[],int si, int ei)
{
    int pivot=a[si];
    int countSmall=0;
    for(int i=si+1;i<=ei;i++)
    {
        if(a[i]<pivot)
            countSmall++;
    }
    int pivotIndex=countSmall+si;
    a[si]=a[pivotIndex];
    a[pivotIndex]=pivot;

    int i=si,j=ei;
    while(i<pivotIndex && j>pivotIndex)
    {
        if(a[i]<a[pivotIndex])
            i++;
        else if(a[j]>= a[pivotIndex])
            j--;
        else
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void quickSort(int a[],int si,int ei)
{
    if(si>=ei)
        return;
    int c=partition(a,si,ei);
    quickSort(a,si,c-1);
    quickSort(a,c+1,ei);
}
//merge function in merge sort
void merge(int a[], int si, int ei)
{
    int mid=(si+ei)/2;
    int size=ei-si+1;
    int output[size];
    int i=si;
    int j=mid+1;
    int k=0;
    while(i<= mid && j<=ei)
    {
        if(a[i]<a[j])
        {
            output[k]=a[i];
            i++;
            k++;
        }
        else
        {
            output[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        output[k]=a[i];
        k++;
        i++;
    }
    while(j<=ei)
    {
        output[k]=a[j];
        k++;
        j++;
    }
    int m=0;
    for(int i=si;i<=ei;i++)
    {
        a[i]=output[m];
        m++;
    }
}
void merge_sort(int a[],int si, int ei)
{
    if(si>=ei)
    {
        return;
    }
    int mid=(si+ei)/2;
    merge_sort(a,si,mid);
    merge_sort(a,mid+1,ei);
    merge(a,si,ei);
}