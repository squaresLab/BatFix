int answer_query ( int a [ ] , int n , int l , int r ) {
  int count = 0 ;
  for ( int i = l ;
  i < r ;
  i ++ ) if ( a [ i ] == a [ i + 1 ] ) count += 1 ;
  return count ;
}
