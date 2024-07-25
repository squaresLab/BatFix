public : int minOperation ( int arr [ ] , int n ) {
  std :: map < int , int > Hash ;
  for ( int i = 0 ;
  i != n ;
  ++ i ) Hash [ arr [ i ] ] ++ ;
  int maxCount = 0 ;
  for ( int i = 0 ;
  i != Hash . size ( ) ;
  ++ i ) if ( maxCount < Hash [ i ] ) maxCount = Hash [ i ] ;
  return n - maxCount ;
}
