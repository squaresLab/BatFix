void find ( vector < string > list1 , vector < string > list2 ) {
  vector < string > res ;
  int maxPossibleSum = list1 . size ( ) + list2 . size ( ) - 2 ;
  for ( int sum = 0 ;
  sum < maxPossibleSum + 1 ;
  sum ++ ) {
    for ( int i = 0 ;
    i < sum + 1 ;
    i ++ ) {
      if ( ( i < list1 . size ( ) ) && ( sum - i ) < list2 . size ( ) && list1 [ i ] == list2 [ sum - i ] ) {
        res . push_back ( list1 [ i ] ) ;
      }
    }
    if ( ( res . size ( ) > 0 ) && ( res [ 0 ] == list2 [ sum - i ] ) ) break ;
  }
  for ( int i = 0 ;
  i < res . size ( ) ;
  i ++ ) {
    cout << res [ i ] << " " ;
  }
}
