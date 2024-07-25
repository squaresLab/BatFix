public : string findSubString ( string str ) {
  int n = str . size ( ) ;
  int distCount = set < int > ( str ) . count ( ) ;
  int count = 0 , start = 0 , startIndex = - 1 , minLen = 9999999999 ;
  map < int , int > currCount = map < int , int > ( ) ;
  for ( int j = 0 ;
  j < n ;
  j ++ ) {
    currCount [ str [ j ] ] ++ ;
    if ( currCount [ str [ j ] ] == 1 ) count ++ ;
    if ( count == distCount ) {
      while ( currCount [ str [ start ] ] > 1 ) {
        if ( currCount [ str [ start ] ] > 1 ) currCount [ str [ start ] ] -- ;
        start ++ ;
      }
      int lenWindow = j - start + 1 ;
      if ( minLen > lenWindow ) {
        minLen = lenWindow ;
        startIndex = start ;
      }
    }
  }
  return str . substr ( startIndex , minLen ) ;
}
