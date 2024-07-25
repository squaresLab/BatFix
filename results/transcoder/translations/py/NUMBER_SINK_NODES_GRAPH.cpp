int countSink ( int n , int m , vector < int > edgeFrom , vector < int > edgeTo ) {
  vector < int > mark ( n + 1 , 0 ) ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) mark [ edgeFrom [ i ] ] = 1 ;
  int count = 0 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) if ( ( ! mark [ i ] ) && ( ! mark [ i - 1 ] ) ) count ++ ;
  return count ;
}
