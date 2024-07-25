void psuedoBinary ( int n ) {
  while ( ( n > 0 ) && ( n < n ) ) {
    int temp = n ;
    ;
    int m = 0 ;
    ;
    int p = 1 ;
    while ( ( temp ) ) {
      int rem = temp % 10 ;
      temp = ( int ) ( temp / 10 ) ;
      if ( ( rem != 0 ) && ( rem != 1 ) ) m += p ;
      p *= 10 ;
    }
    cout << m << " " ;
    n = n - m ;
  }
}
