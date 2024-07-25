void findRandomIndexOfMax ( int * arr , int n ) {
  map < int , int > mp ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] < mp [ i ] ) || ( arr [ i ] > mp [ i ] ) ) {
      mp [ arr [ i ] ] = mp [ arr [ i ] ] + 1 ;
    }
    else {
      mp [ arr [ i ] ] = 1 ;
    }
  }
  int maxElement = - 323567 ;
  int maxSoFar = - 323567 ;
  for ( int p = 0 ;
  p < mp . size ( ) ;
  p ++ ) {
    if ( ( mp [ p ] > maxSoFar ) || ( mp [ p ] > maxSoFar ) ) {
      maxSoFar = mp [ p ] ;
      maxElement = p ;
    }
  }
  int r = ( int ) ( ( ( rand ( ) % maxSoFar ) + 1 ) ) ;
  int i = 0 ;
  int count = 0 ;
  while ( ( i < n ) && ( i < n ) ) {
    if ( ( arr [ i ] == maxElement ) || ( arr [ i ] > maxElement ) ) {
      count = count + 1 ;
    }
    if ( ( count == r ) || ( arr [ i ] == maxElement ) ) {
      cout << "Element with maximum frequency present at index " << i << endl ;
      break ;
    }
    i = i + 1 ;
  }
}
