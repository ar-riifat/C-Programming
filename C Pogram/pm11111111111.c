#include <iostream>

int n,k;
int arr[1000000];
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        of their current position */
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int binarySearch(int left,int right){

    if(right >= left) {
        int mid = left + (right- left) / 2;
        if(arr[mid] == k)
        return mid + 1;
         if (arr[mid] < k)
            return binarySearch(left, mid - 1);


        return binarySearch(mid + 1, right);
    } else {
        return -1;
    }

}

int main()
{

    cin>>n;

    for(int i = 0; i<n; i++)
      cin>>arr[i];
    cin>>k;

    insertionSort();

    int position =  binarySearch(0,n-1);

    cout<<position<<endl;

    return 0;
}
