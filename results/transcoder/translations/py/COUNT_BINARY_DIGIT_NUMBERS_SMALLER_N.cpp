public : int countOfBinaryNumberLessThanN ( int N ) {
  deque < int > q ;
  q . push_back ( 1 ) ;
  int cnt = 0 ;
  while ( ( q . size ( ) > 0 ) && ( q . front ( ) <= N ) ) {
    int t = q . front ( ) ;
    if ( ( t <= N ) && ( t > N ) ) {
      cnt = cnt + 1 ;
      q . pop_front ( ) ;
      q . push_back ( t * 10 ) ;
      q . push_back ( t * 10 + 1 ) ;
    }
  }
  return cnt ;
}
