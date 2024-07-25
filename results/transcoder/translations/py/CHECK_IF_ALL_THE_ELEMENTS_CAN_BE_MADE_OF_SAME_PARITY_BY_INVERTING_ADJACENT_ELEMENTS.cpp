bool flipsPossible ( int a [ ] , int n ) {
  int count_odd = 0 ;
  ;
  int count_even = 0 ;
  ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( a [ i ] & 1 ) != 0 ) count_odd ++ ;
    else count_even ++ ;
  }
  if ( ( count_odd % 2 && count_even % 2 ) != 0 ) return false ;
  else return true ;
}
