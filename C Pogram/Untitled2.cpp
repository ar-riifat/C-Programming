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
