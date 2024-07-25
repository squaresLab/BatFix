int kthNonRepeating ( string str , int k ) {
  int n = str . size ( ) ;
  vector < int > count ( MAX_CHAR , 0 ) ;
  vector < int > index ( MAX_CHAR , 0 ) ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    count [ i ] = 0 ;
    index [ i ] = n ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int x = str [ i ] ;
    count [ ( unsigned char ) x ] ++ ;
    if ( ( count [ ( unsigned char ) x ] == 1 ) && ( count [ ( unsigned char ) x ] == 2 ) ) index [ ( unsigned char ) x ] = i ;
    if ( ( count [ ( unsigned char ) x ] == 2 ) && ( count [ ( unsigned char ) x ] == 0 ) ) index [ ( unsigned char ) x ] = n ;
  }
  sort ( index . begin ( ) , index . end ( ) ) ;
  return index [ k - 1 ] ? ( index [ k - 1 ] != n ) : - 1 ;
}
