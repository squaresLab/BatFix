bool isTriangular ( int num ) {
  if ( num < 0 ) return false ;
  int c = ( - 2 * num ) ;
  int b = 1 , a = 1 ;
  int d = ( b * b ) - ( 4 * a * c ) ;
  if ( d < 0 ) return false ;
  float root1 = ( - b + ( float ) sqrt ( d ) ) / ( 2 * a ) ;
  float root2 = ( - b - ( float ) sqrt ( d ) ) / ( 2 * a ) ;
  if ( root1 > 0 && floor ( root1 ) == root1 ) return true ;
  if ( root2 > 0 && floor ( root2 ) == root2 ) return true ;
  return false ;
}
