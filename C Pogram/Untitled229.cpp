#include <bits/stdc++.h>
using namespace std;

insertion()

    int n, i,k ,j,pos,num, arr[1000];

    printf("\nEnter Array Size: ");
    scanf("%d", &n);

    printf("Array Values: ");

    for (i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for (int i = 1 ; i <= n - 1; i++) {
    k = arr[i];

    for (j = i - 1 ; j >= 0; j--) {
      if (arr[j] > k) {
        arr[j+1] = arr[j];
        pos = 1;
      }
      else
        break;
     }
     if (pos)
       arr[j+1] = k;
  }

   printf("\nAccording to Insertion Sort, sorted data is: ");

   for (int i = 0; i <= n - 1; i++) {
     cout << arr[i] << " ";
  }
    printf("\n\n");

