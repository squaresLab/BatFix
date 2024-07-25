int minInsertion ( tr1 :: function < int ( int ) > f ) {
  int n = str1 . size ( ) ;
  int res = 0 ;
  int count [ 26 ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) count [ ( char ) str1 [ i ] - ( char ) 'a' ] ++ ;
  for ( int i = 0 ;
  i < 26 ;
  i ++ ) if ( ( count [ i ] % 2 == 1 ) && ( count [ i ] % 2 == 0 ) ) res ++ ;
  if ( ( res == 0 ) || ( res == 1 ) ) return 0 ;
  else return res - 1 ;
}
