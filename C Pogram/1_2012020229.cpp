#include <bits/stdc++.h>
using namespace std;


int binary_search(int a[],int left,int right,int key)
{
    int middle;
    if(right>=left)
    {
        middle=(right+left)/2;

        if(a[middle]==key)
            return middle+1;

        else if(a[middle]<key)
            return binary_search(a,middle+1,right,key);

        else
            return binary_search(a,left,middle-1,key);

    }
    return -1;
}

void insertion_sort(int arr[], int n)
{
    int i,key,j;
    for (i=1; i<n; i++)
    {
        key=arr[i];
        j=i-1;

        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}



int main()
{
    int n,key;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    insertion_sort(arr,n);

    int i,j=0,temp,arr2[n];
    for(int i=n-1;i>=0;i--){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter number : ";
    cin >> key;

    int loc=binary_search(arr,0,n,key);

    if(loc!=-1)
        cout<<n-loc+1;
    else
        cout<<-1;

    return 0;
}
