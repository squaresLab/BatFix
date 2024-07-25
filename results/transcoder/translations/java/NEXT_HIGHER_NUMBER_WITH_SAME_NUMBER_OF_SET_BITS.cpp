int snoob ( unsigned x ) {
  unsigned rightOne , nextHigherOneBit , rightOnesPattern , next = 0 ;
  if ( x ) {
    rightOne = x & - x ;
    nextHigherOneBit = x + rightOne ;
    rightOnesPattern = x ^ nextHigherOneBit ;
    rightOnesPattern = ( rightOnesPattern ) / rightOne ;
    rightOnesPattern >>= 2 ;
    next = nextHigherOneBit | rightOnesPattern ;
  }
  return next ;
}
