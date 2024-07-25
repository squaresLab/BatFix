int countkDist ( string str1 , int k ) {
  int n = str1 . length ( ) ;
  int res = 0 ;
  vector < int > cnt ( 27 ) ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    int dist_count = 0 ;
    cnt . clear ( ) ;
    for ( int j = i ;
    j < n ;
    j ++ ) {
      if ( ( cnt [ ( unsigned char ) str1 [ j ] - 97 ] == 0 ) && ( cnt [ ( unsigned char ) str1 [ j ] - 97 ] == 0 ) ) {
        dist_count ++ ;
      }
      cnt [ ( unsigned char ) str1 [ j ] - 97 ] ++ ;
      if ( ( dist_count == k ) || ( dist_count > k ) ) {
        res ++ ;
      }
      if ( ( dist_count > k ) || ( dist_count < k ) ) {
        break ;
      }
    }
  }
  return res ;
}
