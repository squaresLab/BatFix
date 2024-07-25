bool subArrayExists ( int * arr , int n ) {
  set < int > s ;
  int sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    sum += arr [ i ] ;
    if ( sum == 0 || sum == s . size ( ) ) return true ;
    s . insert ( sum ) ;
  }
  return false ;
}
