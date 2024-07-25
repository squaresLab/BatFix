bool isTriangular ( double num ) {
  if ( ( num < 0 ) || ( num > 1 ) ) return false ;
  double c = ( - 2 * num ) ;
  double b = 1 , a = 1 ;
  double d = ( b * b ) - ( 4 * a * c ) ;
  if ( ( d < 0 ) || ( d > 1 ) ) return false ;
  double root1 = ( - b + sqrt ( d ) ) / ( 2 * a ) ;
  double root2 = ( - b - sqrt ( d ) ) / ( 2 * a ) ;
  if ( ( root1 > 0 ) && floor ( root1 ) == root1 ) return true ;
  if ( ( root2 > 0 ) && floor ( root2 ) == root2 ) return true ;
  return false ;
}
