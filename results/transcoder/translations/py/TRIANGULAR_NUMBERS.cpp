bool isTriangular ( int num ) {
  if ( ( num < 0 ) || ( num > num ) ) return false ;
  int sum = 0 , n = 1 ;
  while ( ( sum <= num ) && ( sum != num ) ) {
    sum = sum + n ;
    if ( ( sum == num ) || ( sum == 0 ) ) return true ;
    n ++ ;
  }
  return false ;
}
