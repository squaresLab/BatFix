int findFirstMissing ( int array [ ] , int start , int end ) {
  if ( ( start > end ) || ( end < start ) ) return end + 1 ;
  if ( ( start != array [ start ] ) && ( start != array [ start ] ) ) return start ;
  ;
  int mid = ( int ) ( ( start + end ) / 2 ) ;
  if ( ( array [ mid ] == mid ) || ( array [ mid ] == end ) ) return findFirstMissing ( array , mid + 1 , end ) ;
  return findFirstMissing ( array , start , mid ) ;
}
