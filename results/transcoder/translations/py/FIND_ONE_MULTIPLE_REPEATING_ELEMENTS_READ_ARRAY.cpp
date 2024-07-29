int findRepeatingNumber ( int arr [ ] , int n ) {
  int sq = sqrt ( n ) ;
  int range__ = ( int ) ( ( n / sq ) + 1 ) ;
  int count [ range__ ] ;
  for ( int i = 0 ;
  i <= n ;
  i += 1 ) {
    count [ ( int ) ( ( arr [ i ] - 1 ) / sq ) ] ++ ;
  }
  int selected_block = range__ - 1 ;
  for ( int i = 0 ;
  i <= range__ - 1 ;
  i += 1 ) {
    if ( ( count [ i ] > sq ) && ( count [ i ] <= ( ( selected_block + 1 ) * sq ) ) ) {
      selected_block = i ;
      break ;
    }
  }
  int m [ n ] = {
    0 }
    ;
    for ( int i = 0 ;
    i <= n ;
    i += 1 ) {
      if ( ( ( ( selected_block * sq ) < arr [ i ] ) && ( arr [ i ] <= ( ( selected_block + 1 ) * sq ) ) ) ) {
        m [ arr [ i ] ] ++ ;
        if ( ( m [ arr [ i ] ] > 1 ) && ( m [ arr [ i ] ] <= ( ( selected_block + 1 ) * sq ) ) ) {
          return arr [ i ] ;
        }
      }
    }
    return - 1 ;
  }

