int findFirstMissing ( int array [ ] , int start , int end ) {
  if ( start > end ) return end + 1 ;
  if ( start != array [ start ] ) return start ;
  int mid = ( start + end ) / 2 ;
  if ( array [ mid ] == mid ) return findFirstMissing ( array , mid + 1 , end ) ;
  return findFirstMissing ( array , start , mid ) ;
}
