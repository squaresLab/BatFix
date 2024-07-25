int countGroups ( int position , int previous_sum , int length , string num ) {
  if ( position == length ) return 1 ;
  int res = 0 ;
  int sum = 0 ;
  for ( int i = position ;
  i < length ;
  i ++ ) {
    sum += ( num [ i ] - '0' ) ;
    if ( sum >= previous_sum ) {
      res += countGroups ( i + 1 , sum , length , num ) ;
    }
  }
  return res ;
}
