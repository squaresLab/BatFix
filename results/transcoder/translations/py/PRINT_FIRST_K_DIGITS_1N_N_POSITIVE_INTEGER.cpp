void Print ( int n , int k ) {
  int rem = 1 ;
  for ( int i = 0 ;
  i <= k ;
  i ++ ) {
    cout << floor ( ( ( 10 * rem ) / n ) ) << " " ;
    rem = ( 10 * rem ) % n ;
  }
}
