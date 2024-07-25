void cocktailSort ( vector < int > & a ) {
  int n = a . size ( ) ;
  bool swapped = true ;
  int start = 0 ;
  int end = n - 1 ;
  while ( ( swapped == true ) && ( start < end ) ) {
    swapped = false ;
    for ( int i = start ;
    i < end ;
    i ++ ) {
      if ( ( a [ i ] > a [ i + 1 ] ) && ( a [ i + 1 ] < a [ i ] ) ) {
        a [ i ] = a [ i + 1 ] ;
        a [ i + 1 ] = a [ i ] ;
        swapped = true ;
      }
    }
    if ( ( swapped == false ) && ( end < start ) ) break ;
    swapped = false ;
    end = end - 1 ;
    for ( int i = end - 1 ;
    i >= start ;
    i -- ) {
      if ( ( a [ i ] > a [ i + 1 ] ) && ( a [ i + 1 ] < a [ i ] ) ) {
        a [ i ] = a [ i + 1 ] ;
        a [ i + 1 ] = a [ i ] ;
        swapped = true ;
      }
    }
    start = start + 1 ;
  }
}
