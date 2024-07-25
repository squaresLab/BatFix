Boolean isOverflow ( unsigned long a , unsigned long b ) {
  if ( a == 0 || b == 0 ) return False ;
  unsigned long result = a * b ;
  if ( a == result / b ) return False ;
  else return True ;
}
