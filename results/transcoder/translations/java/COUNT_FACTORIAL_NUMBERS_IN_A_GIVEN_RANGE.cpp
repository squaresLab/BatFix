int countFact ( int low , int high ) {
  int fact = 1 , x = 1 ;
  while ( fact < low ) {
    fact = fact * x ;
    x ++ ;
  }
  int res = 0 ;
  while ( fact <= high ) {
    res ++ ;
    fact = fact * x ;
    x ++ ;
  }
  return res ;
}
