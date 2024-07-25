bool checkCount ( int arr [ ] , int n , int k ) {
  unordered_map < int , int > hash ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ! hash . count ( arr [ i ] ) ) {
      hash [ arr [ i ] ] = 0 ;
    }
    hash [ arr [ i ] ] = hash [ arr [ i ] ] + 1 ;
  }
  for ( auto x : hash ) if ( ( int ) x > 2 * k ) return false ;
  return true ;
}
