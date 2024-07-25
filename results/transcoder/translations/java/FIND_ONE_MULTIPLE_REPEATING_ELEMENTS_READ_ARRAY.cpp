int findRepeatingNumber ( int arr [ ] , int n ) {
  int sq = ( int ) sqrt ( n ) ;
  int range = ( n / sq ) + 1 ;
  int count [ range ] ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) count [ ( arr [ i ] - 1 ) / sq ] ++ ;
  int selected_block = range - 1 ;
  for ( int i = 0 ;
  i < range - 1 ;
  i ++ ) {
    if ( count [ i ] > sq ) {
      selected_block = i ;
      break ;
    }
  }
  unordered_map < int , int > m ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( ( selected_block * sq ) < arr [ i ] ) && ( arr [ i ] <= ( ( selected_block + 1 ) * sq ) ) ) {
      m [ arr [ i ] ] ++ ;
      if ( m [ arr [ i ] ] == 1 ) return arr [ i ] ;
    }
  }
  return - 1 ;
}
