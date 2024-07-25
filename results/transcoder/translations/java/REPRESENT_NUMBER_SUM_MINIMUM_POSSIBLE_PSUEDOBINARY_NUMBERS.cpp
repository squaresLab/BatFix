void psuedoBinary ( int n ) {
  while ( n != 0 ) {
    int temp = n , m = 0 , p = 1 ;
    while ( temp != 0 ) {
      int rem = temp % 10 ;
      temp = temp / 10 ;
      if ( rem != 0 ) {
        m += p ;
      }
      p *= 10 ;
    }
    cout << m << " " ;
    n = n - m ;
  }
  cout << " " ;
}
