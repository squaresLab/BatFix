int countFact ( int low , int high ) {
  int fact = 1 ;
  int x = 1 ;
  while ( ( fact < low ) && ( fact <= high ) ) {
    fact = fact * x ;
    x ++ ;
  }
  int res = 0 ;
  while ( ( fact <= high ) && ( fact >= low ) ) {
    res ++ ;
    fact = fact * x ;
    x ++ ;
  }
  return res ;
}
