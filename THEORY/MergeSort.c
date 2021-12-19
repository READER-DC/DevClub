
void mergeSort(int* array, int lo, int hi) {
	int center = (lo + hi) / 2;

	if ( lo < center ) {
		mergeSort(array, lo, center);
		mergeSort(array, center, hi);
	}

	merge(array, lo, center, hi);
}

int main(int argc, char const *argv[]) {
	/* code */
	printf("EPIC WIN\n");
	return 0;
}