public : int evenLength ( vector < int > n ) {
  int res = n . size ( ) ;
  for ( int j = n . size ( ) - 1 ;
  j >= 0 ;
  j -- ) {
    res += n [ j ] ;
  }
  return res ;
}
