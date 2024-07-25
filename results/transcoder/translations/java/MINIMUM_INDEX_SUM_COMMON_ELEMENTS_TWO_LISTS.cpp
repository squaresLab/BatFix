void find ( Vector < string > & list1 , Vector < string > & list2 ) {
  Vector < string > res ;
  int max_possible_sum = list1 . size ( ) + list2 . size ( ) - 2 ;
  for ( int sum = 0 ;
  sum <= max_possible_sum ;
  sum ++ ) {
    for ( int i = 0 ;
    i <= sum ;
    i ++ ) if ( i < list1 . size ( ) && ( sum - i ) < list2 . size ( ) && list1 [ i ] == list2 [ sum - i ] ) res . push_back ( list1 [ i ] ) ;
    if ( res . size ( ) > 0 ) break ;
  }
  for ( int i = 0 ;
  i < res . size ( ) ;
  i ++ ) cout << res [ i ] << " " ;
}
