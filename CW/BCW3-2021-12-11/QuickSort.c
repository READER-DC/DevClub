int partition(int array[], int start, int end) {
    int pivot = start + (end - start) / 2;
    int pivotValue = array[pivot];
    
    array[pivot] = array[end];
    array[end] = pivotValue;
    
    for ( pivot = start; array[pivot] < array[end]; pivot++ );
    
    for ( int i = pivot + 1; i <= end; i++ ) {
        if ( array[i] < pivotValue ) {
            int buffer = array[pivot];
            
            array[pivot] = array[i];
            array[i] = buffer;
            pivot += 1;
        }
    }
    
    array[end] = array[pivot];
    array[pivot] = pivotValue;
    
    return pivot;
}

void quickSort(int array, int lo, int hi) {
	int mid;
	
    if ( hi - lo <= 0 ) {
        return;
    }

    if ( hi - lo > 0 ) {
    	int mid = partition(array, lo, hi);
    	quickSort(array, lo, mid);
		quickSort(array, mid, hi);
    }
}