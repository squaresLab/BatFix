int firstElement ( int arr [ ] , int n , int k ) {
  unordered_map < int , int > count_map ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int a = 0 ;
    if ( count_map . find ( arr [ i ] ) != count_map . end ( ) ) a = count_map . find ( arr [ i ] ) -> second ;
    count_map [ arr [ i ] ] = a + 1 ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( count_map [ arr [ i ] ] == k ) return arr [ i ] ;
  }
  return - 1 ;
}
