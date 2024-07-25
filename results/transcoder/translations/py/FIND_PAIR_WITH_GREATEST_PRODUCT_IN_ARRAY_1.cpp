int findGreatest ( vector < int > arr , int n ) {
  map < int , int > m ;
  for ( int i = 0 ;
  i < arr . size ( ) ;
  i ++ ) m [ arr [ i ] ] = m . find ( i ) -> second + 1 ;
  sort ( arr . begin ( ) , arr . end ( ) ) ;
  for ( int i = n - 1 ;
  i > 0 ;
  i -- ) {
    int j = 0 ;
    while ( ( j < i ) && arr [ j ] <= sqrt ( arr [ i ] ) ) {
      if ( ( arr [ i ] % arr [ j ] == 0 ) ) {
        int result = arr [ i ] / arr [ j ] ;
        if ( ( result != arr [ j ] && ( resultinm . end ( ) ) andm [ result ] > 0 ) || ( result == arr [ j ] && ( resultinm . end ( ) ) andm [ result ] > 1 ) ) returnarr [ i ] ;
      }
      else if ( ( result == arr [ j ] && ( resultinm . end ( ) ) andm [ result ] > 0 ) || ( result == arr [ j ] && ( resultinm . end ( ) ) andm [ result ] > 1 ) ) returnarr [ i ] ;
    }
    j ++ ;
  }
  return - 1 ;
}
