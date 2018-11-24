int bin_search(int arr[],int n,int s)
{

    int l=0,u=n-1,m;
    while(l<=u)
    {

        m=(l+u)/2;
        if(arr[m]==s){
            printf("number found at index %d",m);
            return 0;
    }
else if(s>arr[m])
    l=m+1;
else
    u=m-1;
}
printf("number not found");
}
int main()
{

    int arr[]={12,34,45,66,78,89,90};
    int s=100;
    bin_search(arr,7,s);
}
