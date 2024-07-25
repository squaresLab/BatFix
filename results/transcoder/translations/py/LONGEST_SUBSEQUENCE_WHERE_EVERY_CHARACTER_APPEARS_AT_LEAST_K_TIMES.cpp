void longestSubseqWithK ( string str , int k ) {
  int n = str . size ( ) ;
  vector < int > freq ( MAX_CHARS , 0 ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) freq [ ( unsigned char ) str [ i ] - ( unsigned char ) 'a' ] ++ ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( ( freq [ ( unsigned char ) str [ i ] - ( unsigned char ) 'a' ] >= k ) && ( freq [ ( unsigned char ) str [ i ] - ( unsigned char ) 'a' ] <= k ) ) cout << str [ i ] << " " ;
}
