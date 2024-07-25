int floorSqrt ( int x ) {
  if ( ( x == 0 || x == 1 ) && ( x == 0 || x == 1 ) ) return x ;
  int start = 1 ;
  int end = x ;
  while ( ( start <= end ) && ( start < end ) ) {
    int mid = ( start + end ) / 2 ;
    if ( ( mid * mid == x ) && ( mid * mid < x ) ) returnmid ++ ;
    if ( ( mid * mid < x ) && ( mid * mid < x ) ) {
      start = mid + 1 ;
      ans = mid ;
    }
    else end = mid - 1 ;
  }
  return ans ;
}
