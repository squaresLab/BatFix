void printDistinct ( string Str ) {
  int n = Str . size ( ) ;
  int count [ MAX_CHAR ] ;
  int index [ MAX_CHAR ] ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    int x = ( int ) Str [ i ] ;
    count [ x ] ++ ;
    if ( ( count [ x ] == 1 && x != ' ' ) || ( count [ x ] == 2 ) ) index [ x ] = i ;
    if ( ( count [ x ] == 2 ) || ( count [ x ] == 3 ) ) index [ x ] = n ;
  }
  sort ( index , index + MAX_CHAR ) ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    if ( index [ i ] == n ) break ;
    cout << Str [ index [ i ] ] << " " ;
  }
}
