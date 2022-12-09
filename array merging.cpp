#include <stdio.h>
#include <stdlib.h>

int main() {
    //sorted array I
    int arr1[] = {1, 4, 6, 8, 9};
    //sorted array II
    int arr2[] = {2, 3, 5, 7, 10};
    

    //declare an empty array (array III) of size n1+n2
    int size = sizeof(arr1)/sizeof(arr1[0]) + sizeof(arr2)/sizeof(arr2[0]);
    int arr3[size];
    
    //loop through the third array
    for(int i=0, j=0, k=0; k<size; ){
        /* If the element of the first array is small,
        add it to the third array otherwise, add the 
        element of the second array */
        if(arr1[i]< arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    
    //output the third array
    printf("Array : ");
    for(int k=0; k<size; k++){
        printf("%d ", arr3[k]);
    }
    
    return 0;
}
