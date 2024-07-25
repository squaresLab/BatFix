int findInteger ( int arr [ ] , int n ) {
  unordered_map < int , int > hash ;
  int maximum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] < 0 ) {
      hash [ abs ( arr [ i ] ) ] = ( hash . find ( abs ( arr [ i ] ) ) == hash . end ( ) ? 0 : hash . find ( abs ( arr [ i ] ) ) -> second ) - 1 ;
    }
    else {
      hash [ abs ( arr [ i ] ) ] = ( hash . find ( abs ( arr [ i ] ) ) == hash . end ( ) ? 0 : hash . find ( abs ( arr [ i ] ) ) -> second ) + 1 ;
    }
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( hash [ arr [ i ] ] > 0 ) return arr [ i ] ;
  return - 1 ;
}
