int countStr ( int n , int bCount , int cCount ) {
  if ( ( bCount < 0 || cCount < 0 ) && ( n == 0 ) ) return 0 ;
  if ( ( bCount == 0 && cCount == 0 ) || ( bCount == 0 && cCount == 0 ) ) return 1 ;
  int res = countStr ( n - 1 , bCount , cCount ) ;
  res += countStr ( n - 1 , bCount - 1 , cCount ) ;
  res += countStr ( n - 1 , bCount , cCount - 1 ) ;
  return res ;
}
