public : int remAnagram ( string str1 , string str2 ) {
  int count1 [ CHARS ] = {
    0 }
    ;
    int count2 [ CHARS ] = {
      0 }
      ;
      int i = 0 ;
      while ( i < str1 . length ( ) ) {
        count1 [ ( char ) str1 [ i ] - ( char ) 'a' ] ++ ;
        i ++ ;
      }
      i = 0 ;
      while ( i < str2 . length ( ) ) {
        count2 [ ( char ) str2 [ i ] - ( char ) 'a' ] ++ ;
        i ++ ;
      }
      int result = 0 ;
      for ( int i = 0 ;
      i < 26 ;
      i ++ ) {
        result += abs ( count1 [ i ] - count2 [ i ] ) ;
      }
      return result ;
    }
