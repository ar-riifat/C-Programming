#include<bits/stdc++.h>
using namespace std;

void ins_sort(int a[],int n){
    for(int i=1; i<n; ++i){
        int t=a[i];
        int place=i;

        while(place>0 && a[place-1]>t){
            a[place]=a[place-1];
            place--;
        }
        a[place]=t;
    }

}

void merge (int L[],int nL,int R[],int nR,int A[]){
    int i,j,k;
    i=j=k=0;

    while(i<nL && j<nR){
        if(L[i]<=R[j]){
            A[k]=L[i];
            i++;
        }
        else{
            A[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<nL){
        A[k]=L[i];
        i++;
        k++;
    }
    while(j<nR){
        A[k]=R[j];
        j++;
        k++;
    }
}

void mer_sort(int A[],int n){
    int mid,i,j;
    if(n<2)
        return;
    mid =n/2;
    int L[mid],R[n-mid];

    i=0;
    while(i<=mid-1){
        L[i]=A[i];
        i++;
    }

    j=mid;
    while(j<=n-1){
        R[i-mid]=A[i];
        j++;
    }

    mer_sort(L,mid);
    mer_sort(R, n-mid);
    merge(L,mid,R,n-mid,A);

}

int main(){
    int num;
    cout<<"Enter the size of array: ";
    cin>>num;
    cout<<"Enter the values of array: " << endl;
    int a[num];

    int i=0;
    while(i<num){
        cin >> a[i];
        i++;
    }

    ins_sort(a,num);
    cout<<"After insertion Sort the sorted data is: ";
    int j=0;
    while(j<num){
        cout << a[j] << " ";
        j++;
    }
}

void quicksort(int number[7],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}
int main()
{
    int num;
    do
    {
        printf("Press 1: Insertion Sort\n");
        printf("Press 2: Merge Sort\n");
        printf("Press 3: Quick Sort\n");
        printf("Press 4: Exit\n\n");

        printf("Choose your option :");
        scanf("%d", &num);

        switch(num){
        case 1:
            insertion();
            break;
        case 2:
            Merge();
            break;
        case 3:
            quick();
            break;
        case 4:
            printf("\nProgram terminated.\n");
            break;
        default:
            printf("\nWrong input !!\n\n");
        }
    }
    while( num != 4);
    return 0;
}

