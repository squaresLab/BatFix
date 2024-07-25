int snoob ( int x ) {
  int next = 0 ;
  if ( ( x ) ) {
    int rightOne = x & - ( x ) ;
    int nextHigherOneBit = x + ( int ) rightOne ;
    int rightOnesPattern = x ^ ( int ) nextHigherOneBit ;
    rightOnesPattern = ( int ) rightOnesPattern / ( int ) rightOne ;
    rightOnesPattern = ( int ) rightOnesPattern >> 2 ;
    next = nextHigherOneBit | rightOnesPattern ;
  }
  return next ;
}
