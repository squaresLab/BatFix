bool arekAnagrams ( string str1 , string str2 , int k ) {
  int n = str1 . size ( ) ;
  if ( ( str2 . size ( ) != n ) || ( str2 . size ( ) != n ) ) return false ;
  int count1 [ MAX_CHAR ] = {
    0 }
    ;
    int count2 [ MAX_CHAR ] = {
      0 }
      ;
      for ( int i = 0 ;
      i < n ;
      i ++ ) count1 [ ( char ) str1 [ i ] - ( char ) 'a' ] ++ ;
      for ( int i = 0 ;
      i < n ;
      i ++ ) count2 [ ( char ) str2 [ i ] - ( char ) 'a' ] ++ ;
      int count = 0 ;
      for ( int i = 0 ;
      i < MAX_CHAR ;
      i ++ ) if ( ( count1 [ i ] > count2 [ i ] ) && ( count1 [ i ] < count2 [ i ] ) ) count = count + abs ( count1 [ i ] - count2 [ i ] ) ;
      return ( count <= k ) ;
    }

