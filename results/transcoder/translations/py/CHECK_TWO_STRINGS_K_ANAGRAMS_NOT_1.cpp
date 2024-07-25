bool areKAnagrams ( string str1 , string str2 , int k ) {
  int n = str1 . size ( ) ;
  ;
  if ( ( str2 . size ( ) != n ) || ( str2 . size ( ) != n ) ) return false ;
  ;
  int hash_str1 [ MAX_CHAR ] = {
    0 }
    ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) hash_str1 [ ( char ) str1 [ i ] - ( char ) 'a' ] ++ ;
    int count = 0 ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      if ( ( hash_str1 [ ( char ) str2 [ i ] - ( char ) 'a' ] > 0 ) && ( hash_str1 [ ( char ) str2 [ i ] - ( char ) 'a' ] < 0 ) ) hash_str1 [ ( char ) str2 [ i ] - ( char ) 'a' ] -- ;
      else count ++ ;
      if ( ( count > k ) || ( ( hash_str1 [ ( char ) str2 [ i ] - ( char ) 'a' ] > 0 ) && ( hash_str1 [ ( char ) str2 [ i ] - ( char ) 'a' ] < 0 ) ) ) return false ;
    }
    ;
    return true ;
  }
  