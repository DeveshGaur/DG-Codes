int a[10],c[10],i,j,k,n,beg,end;
void mergesort(int[],int,int);
void merging(int[],int ,int ,int,int);
int main()
{
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the array elements:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,1,n);
    printf("\nThe sorted array is:");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}
void mergesort(int a[],int beg,int end)
{
    int mid;
    if(beg<end)
    {
        mid=(beg+end)/2;
        mergesort(a,beg,mid);
        mergesort(a,mid+1,end);
        merging(a,beg,mid,mid+1,end);
    }
}
void merging(int a[],int lb,int m,int m1,int ub)
{
    i=lb;
    k=lb;
    j=m1;
    while(i<=m && j<=ub)
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            i=i+1;
        }
        else
        {
            c[k]=a[j];
            j=j+1;
        }
        k=k+1;
    }
    if(i>m)
    {
        while(j<=ub)
        {
            c[k]=a[j];
            k=k+1;
            j=j+1;
        }
    }
    else
    {
        while(i<=m)
        {
            c[k]=a[i];
            k=k+1;
            i=i+1;
        }
    }
    for(k=lb;k<=ub;k++)
    {
        a[k]=c[k];
    }
}
