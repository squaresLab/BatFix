int maximumChars ( string str ) {
  int n = str . length ( ) ;
  int res = - 1 ;
  vector < int > firstInd ( MAX_CHAR , - 1 ) ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) {
    firstInd [ i ] = - 1 ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int first_ind = firstInd [ str [ i ] ] ;
    if ( first_ind == - 1 ) {
      firstInd [ str [ i ] ] = i ;
    }
    else {
      res = max ( res , abs ( i - first_ind - 1 ) ) ;
    }
  }
  return res ;
}
