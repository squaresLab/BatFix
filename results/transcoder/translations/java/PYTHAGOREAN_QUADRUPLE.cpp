Boolean pythagorean_quadruple ( unsigned a , unsigned b , unsigned c , unsigned d ) {
  unsigned sum = a * a + b * b + c * c ;
  if ( d * d == sum ) {
    return True ;
  }
  else {
    return False ;
  }
}
