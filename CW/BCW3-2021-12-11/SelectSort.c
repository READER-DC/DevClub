int arrayMaxIndex(int array[], int size) {
    int max = 0;
    
    for ( int i = 1; i < size; i++ ) {
        if ( array[i] > array[max] ) {
            max = i;
        }
    }
    return max;
}

1 2 3 4 5 // 5

2 3 4 1 // 4

3 2 1 // 3

2 1 // 2

1 // 1 


void selectSort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int max = arrayMaxIndex(&array[i], size-i);

        if ( max != i ) {
            int temp = array[i];

            array[i] = array[max];
            array[max] = temp;
        }
    }
}