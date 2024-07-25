int maxLength ( const string & s , int n ) {
  int invalidOpenBraces = 0 ;
  int invalidCloseBraces = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( s [ i ] == '(' ) invalidOpenBraces ++ ;
    else {
      if ( invalidOpenBraces == 0 ) invalidCloseBraces ++ ;
      else invalidOpenBraces -- ;
    }
  }
  return ( n - ( invalidOpenBraces + invalidCloseBraces ) ) ;
}
