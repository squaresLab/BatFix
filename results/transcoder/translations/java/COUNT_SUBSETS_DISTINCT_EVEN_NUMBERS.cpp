int countSubsets ( int arr [ ] , int n ) {
  set < int > us ;
  int even_count = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( arr [ i ] % 2 == 0 ) us . insert ( arr [ i ] ) ;
  even_count = us . size ( ) ;
  return int ( pow ( 2 , even_count ) - 1 ) ;
}
