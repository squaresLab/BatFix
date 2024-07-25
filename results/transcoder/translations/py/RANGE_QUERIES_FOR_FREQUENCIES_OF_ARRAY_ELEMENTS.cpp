int findFrequency ( int arr [ ] , int n , int left , int right , int element ) {
  int count = 0 ;
  for ( int i = left - 1 ;
  i < right ;
  i ++ ) {
    if ( ( arr [ i ] == element ) && ( arr [ i ] != 0 ) ) {
      count ++ ;
    }
  }
  return count ;
}
