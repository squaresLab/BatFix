bool distributingBalls ( long long k , long long n , string str ) {
  vector < int > a ( MAX_CHAR , 0 ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) a [ str [ i ] - 'a' ] ++ ;
  for ( int i = 0 ;
  i < MAX_CHAR ;
  i ++ ) if ( a [ i ] > k ) return false ;
  return true ;
}
