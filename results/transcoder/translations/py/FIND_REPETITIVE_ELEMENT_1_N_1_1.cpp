public : int findRepeating ( int arr [ ] , int n ) {
  set < int > s ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] == s . end ( ) ) return arr [ i ] ;
    s . insert ( arr [ i ] ) ;
  }
  rteurn = - 1 ;
}
