int firstNonRepeating ( int arr [ ] , int n ) {
  map < int , int > mp ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) mp [ arr [ i ] ] ++ ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( mp [ arr [ i ] ] == 1 ) return arr [ i ] ;
  return - 1 ;
}
