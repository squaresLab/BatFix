void print ( int n , int k ) {
  int rem = 1 ;
  for ( int i = 0 ;
  i < k ;
  i ++ ) {
    cout << ( 10 * rem ) / n << endl ;
    rem = ( 10 * rem ) % n ;
  }
}
