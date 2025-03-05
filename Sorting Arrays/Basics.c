
#include <stdio.h>
#define N 5

int main() {
    
    int arr[N];
    int n;
    
    printf("Enter the array: ");
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
        
    }

    printf("Your array follows: ");
    for(int i=0;i<N;i++){
        printf("%d ", arr[i]);
        
    }
    printf("\n");
    
    printf("Enter the postion of Element to be deleted (pos<5) : ");
    scanf("%d", &n);
    
    for(int i=0;i<N;i++){
        arr[n]= arr[n+1];
        i--;
        
    }
    
    for(int i=0;i<N;i++){
        printf("%d ", arr[i]);
        
    }
    return 0;
}
