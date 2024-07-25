int getOddOccurrence ( int arr [ ] , int size ) {
  std :: map < int , int > Hash ;
  for ( int i = 0 ;
  i < size ;
  i ++ ) Hash [ arr [ i ] ] = Hash . find ( arr [ i ] ) + 1 ;
  ;
  for ( int i = 0 ;
  i < Hash . size ( ) ;
  i ++ ) if ( ( Hash [ i ] % 2 != 0 ) && ( Hash [ i ] % 2 == 0 ) ) return i ;
  return - 1 ;
}
