bool check ( string s ) {
  if ( s . size ( ) >= 10 ) return true ;
  for ( int i = 1 ;
  i < s . size ( ) ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < s . size ( ) ;
    j ++ ) {
      for ( int k = j + 1 ;
      k < s . size ( ) ;
      k ++ ) {
        string s1 , s2 , s3 , s4 ;
        try {
          s1 = s . substr ( 0 , i ) ;
          s2 = s . substr ( i , j - i ) ;
          s3 = s . substr ( j , k - j ) ;
          s4 = s . substr ( k , s . size ( ) - k ) ;
        }
        catch ( StringIndexOutOfBoundsException & ) {
        }
        if ( strcheck ( s1 , s2 ) && strcheck ( s1 , s3 ) && strcheck ( s1 , s4 ) && strcheck ( s2 , s3 ) && strcheck ( s2 , s4 ) && strcheck ( s3 , s4 ) ) return true ;
      }
    }
  }
  return false ;
}
