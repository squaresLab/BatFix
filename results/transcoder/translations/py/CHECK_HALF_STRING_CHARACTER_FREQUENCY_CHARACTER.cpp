bool checkCorrectOrNot ( string s ) {
  static int MAX_CHAR = MAX_CHAR ;
  int count1 [ MAX_CHAR ] = {
    0 }
    ;
    int count2 [ MAX_CHAR ] = {
      0 }
      ;
      int n = s . length ( ) ;
      if ( n == 1 ) return true ;
      int i = 0 ;
      ;
      int j = n - 1 ;
      while ( ( i < j ) && ( count1 [ ( int ) s [ i ] - 'a' ) <= MAX_CHAR ) {
        count1 [ ( int ) s [ j ] - 'a' ] ++ ;
        count2 [ ( int ) s [ j ] - 'a' ] ++ ;
        i ++ ;
        j -- ;
      }
      for ( int i = 0 ;
      i < MAX_CHAR ;
      i ++ ) if ( count1 [ i ] != count2 [ i ] ) return false ;
      return true ;
    }
