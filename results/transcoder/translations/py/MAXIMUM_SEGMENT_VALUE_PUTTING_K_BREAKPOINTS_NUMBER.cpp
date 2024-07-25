int findMaxSegment ( string s , int k ) {
  int segLen = s . length ( ) - k ;
  int res = 0 ;
  for ( int i = 0 ;
  i < segLen ;
  i ++ ) {
    res = res * 10 + ( ( char ) s [ i ] - '0' ) ;
  }
  int segLenPow = pow ( 10 , segLen - 1 ) ;
  int currVal = res ;
  for ( int i = 1 ;
  i < s . length ( ) - segLen ;
  i ++ ) {
    currVal = currVal - ( ( char ) s [ i - 1 ] - '0' ) * segLenPow ;
    currVal = ( currVal * 10 + ( ( char ) s [ i + segLen - 1 ] - '0' ) ) ;
    res = max ( res , currVal ) ;
  }
  return res ;
}
