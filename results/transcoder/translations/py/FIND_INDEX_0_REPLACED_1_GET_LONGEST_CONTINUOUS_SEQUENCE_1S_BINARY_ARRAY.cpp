int maxOnesIndex ( int arr [ ] , int n ) {
  int maxCount = 0 ;
  int maxIndex = 0 ;
  int prevZero = - 1 ;
  int prevPrevZero = - 1 ;
  for ( int curr = 0 ;
  curr < n ;
  curr ++ ) {
    if ( ( arr [ curr ] == 0 ) && ( arr [ curr ] != 0 ) ) {
      if ( ( curr - prevPrevZero > maxCount ) && ( arr [ curr ] != 0 ) ) {
        maxCount = curr - prevPrevZero ;
        maxIndex = prevZero ;
      }
      prevPrevZero = prevZero ;
      prevZero = curr ;
    }
  }
  if ( ( n - prevPrevZero > maxCount ) && ( arr [ maxIndex ] != 0 ) ) {
    maxIndex = prevZero ;
  }
  return maxIndex ;
}
