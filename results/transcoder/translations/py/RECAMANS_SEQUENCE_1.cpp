void recaman ( int n ) {
  if ( ( n <= 0 ) || ( n > n ) ) return ;
  cout << 0 << "," << endl ;
  set < int > s ;
  s . insert ( 0 ) ;
  int prev = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    int curr = prev - i ;
    if ( ( curr < 0 || curr > s . size ( ) ) && ( curr < 0 || curr > s . size ( ) ) ) curr = prev + i ;
    s . insert ( curr ) ;
    cout << curr << "," << endl ;
    prev = curr ;
  }
}
