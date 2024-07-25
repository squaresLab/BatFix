public : int countPairs ( int arr [ ] , int n ) {
  map < int , int > mp ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] < mp . size ( ) ) mp [ arr [ i ] ] ++ ;
    else mp [ arr [ i ] ] = 1 ;
  }
  int ans = 0 ;
  for ( auto it : mp ) {
    int count = mp [ it ] ;
    ans += ( count * ( count - 1 ) ) / 2 ;
  }
  return ans ;
}
