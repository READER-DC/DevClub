int bench1(int n) {
	int sum = 0;

	if ( n <= 0 ) {
		return 1;
	}
	for ( int i = 0; i < n; i++ ) {
		sum += i;
	}
	return sum + bench1(n/2);
}

int bench2(int n) {
	if ( n <= 0 ) {
		return 0;
	}
	return bench2(n-2) + bench2(n-3);
}

int bench3(int n) {
	if ( n <= 0 ) {
		return 1;
	}
	return bench3(n/3) + bench3(-n/2);
}

int bench4(int n) {
	int sum = 0;

	if ( n <= 0 ) {
		return 1;
	}
	for ( int i = 0; i < n; i++ ) {
		sum += i;
	}
	return sum + bench4(n-1);
}

int bench5(int n) {
	if ( n <= 0 ) {
		return 1;
	}
	return n/2 + bench5(-n/2);
}

int bench6(int n) {
	if ( n <= 0 ) {
		return 1;
	}
	return n + bench6(n-1);
}

int bench7(int n) {
	int result = 0;

	if ( n <= 0 ) {
		return 1;
	}
	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < i; j++ ) {
			result += i * j;
		}
	}
	return result + bench7(n-1);
}

int bench8(int n) {
	if ( n <= 0 ) {
		return 1;
	}
	return bench8(n+1);
}

int bench9(int n) {
	int sum = 0;

	for ( int i = 0; i < n; i += 2 ) {
		for ( int j = 0; j < n; j += n / 3 ) {
			sum += i;
		}
	}
	return sum;
}

int bench10(int n) {
	int sum = 0;

	for ( int i = 3; i < n / 2; i *= 2 ) {
		sum += i;
	}
	return sum;
}

int bench11(int n) {
	int sum = 0;

	if ( n < 0 ) {
		return bench11(-n);
    }
	for ( int i = 0; i < n % 100; i++ ) {
		sum += i;
	}
	return sum;
}

int bench12(int n) {
	int sum = 0;

	for ( int i = 0; i < n; i++ ) {
		for ( int j = n; j > 1; j /= 2 ) {
			sum += i - j;
		}
	}
	return sum;
}

int bench13(int n) {
	int sum = 0;

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j - i < n; j++ ) {
			for ( int k = 0; k < j + n; k++ ) {
				sum += k;
			}
		}
	}
	return sum;
}

int bench14(int n) {
	int sum = 0;

	for ( int i = 0; i < n; i *= n / 2 ) {
		sum += i;
	}
	return sum;
}

int bench15(int n) {
	int sum = 0;

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < i; j++ ) {
			for ( int k = 0; k < j % 100; k++ ) {
				sum += k;
			}
		}
	}
	return sum;
}

int bench16(int n) {
	int limit = 1 << n;
	int sum = 0;

	for ( int i = 0; i < limit; i++ ) {
		sum += i;
	}
	return sum;
}

int bench17(int n) {
	for ( int i = 0; i < n; i *= 2 ) {
		sum += i;
	}
	return sum;
}

int bench18(int n) {
	if ( n <= 0 ) {
		return 1;
	}
	if ( n <= 256 ) {
		return n + bench18(-n);
	}
	return bench18(n/3) + bench18(n%100);
}

int bench19(int n) {
	if ( n == 0 ) {
		return 1;
	}
	if ( n <= 0 ) {
		return bench19(n+1) + 1;
	}
	return bench19(n-1) + bench19(-n);
}

int bench20(int n) {
	if ( n == 0 ) {
		return 1;
	}
	if ( n <= 0 ) {
		return bench20(1-n);
	}
	return bench20(n-1) + bench20(-n);
}

int bench21(int n) {
	if ( n <= 0 ) {
		return 1;
	}
	return bench21(n/2) + bench21(n/2);
}

int bench22(int n) {
	if ( n <= 0 ) {
		return 1;
	}
	if ( n <= 256 ) {
		return n + bench22(-n);
	}
	return n/4 + bench22(-n%100);
}

int bench23(int n) {
	if ( n == 0 ) {
		return 1;
	}
	if ( n <= 0 ) {
		return bench23(-n-1);
	}
	return bench23(n-1) + bench23(-n);
}

int bench24(int n) {
	if ( n == 0 ) {
		return 1;
	}
	if ( n <= 0 ) {
		return bench24(n+1) + 1;
	}
	return bench24(n/2) + bench24(-n);
}

int bench25(int n) {
	int sum = 0;

	if ( n == 0 ) {
		return 1;
	}
	if ( n <= 0 ) {
		for ( int i = 0; i > n; i-- ) {
			sum += i;
		}
		return bench25(n+1) + sum;
	}
	return bench25(n-1) + bench25(-n);
}







