bool checkCorrectOrNot ( const string & s ) {
  static int MAX_CHAR = 256 ;
  int count [ MAX_CHAR ] = {
    0 }
    ;
    int n = s . length ( ) ;
    if ( n == 1 ) return true ;
    int i = 0 ;
    int j = n - 1 ;
    while ( i < j ) {
      count [ ( unsigned char ) s [ i ] - ( unsigned char ) 'a' ] ++ ;
      count [ ( unsigned char ) s [ j ] - ( unsigned char ) 'a' ] -- ;
      i ++ ;
      j -- ;
    }
    for ( ;
    i < MAX_CHAR ;
    i ++ ) if ( count [ i ] != 0 ) return false ;
    return true ;
  }

