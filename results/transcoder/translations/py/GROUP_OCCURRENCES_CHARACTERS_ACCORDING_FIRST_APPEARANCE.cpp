void printGrouped ( string string ) {
  int n = string . size ( ) ;
  int count [ MAX_CHAR ] = {
    0 }
    ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) count [ ( unsigned char ) string [ i ] - ( unsigned char ) "a" ] ++ ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) while ( count [ ( unsigned char ) string [ i ] - ( unsigned char ) "a" ] ) {
      cout << string [ i ] << " " ;
      count [ ( unsigned char ) string [ i ] - ( unsigned char ) "a" ] -- ;
    }
    count [ ( unsigned char ) string [ n ] - ( unsigned char ) "a" ] = 0 ;
  }
