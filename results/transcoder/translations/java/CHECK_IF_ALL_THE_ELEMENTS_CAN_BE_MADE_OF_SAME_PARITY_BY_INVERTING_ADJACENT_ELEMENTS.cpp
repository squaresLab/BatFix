bool flipsPossible ( int * a , int n ) {
  int count_odd = 0 , count_even = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( a [ i ] & 1 ) == 1 ) {
      count_odd ++ ;
    }
    else {
      count_even ++ ;
    }
  }
  if ( count_odd % 2 == 1 && count_even % 2 == 1 ) {
    return false ;
  }
  else {
    return true ;
  }
}
