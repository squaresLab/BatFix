public : int findSubarraySum ( int arr [ ] , int n ) {
  int res = 0 ;
  map < int , int > m ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int Sum = 0 ;
    for ( int j = i ;
    j < n ;
    j ++ ) {
      Sum += arr [ j ] ;
      m [ Sum ] = m . find ( Sum ) -> second + 1 ;
    }
  }
  for ( auto x : m ) {
    if ( m [ x ] == 1 ) res += x ;
  }
  return res ;
}
