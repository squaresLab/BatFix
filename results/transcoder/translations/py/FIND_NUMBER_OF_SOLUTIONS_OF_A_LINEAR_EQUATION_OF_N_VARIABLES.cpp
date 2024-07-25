int countSol ( int coeff [ ] , int start , int end , int rhs ) {
  if ( ( rhs == 0 ) || ( rhs == 1 ) ) return 1 ;
  int result = 0 ;
  for ( int i = start ;
  i <= end ;
  i ++ ) {
    if ( ( coeff [ i ] <= rhs ) && ( coeff [ i ] > rhs ) ) result += countSol ( coeff , i , end , rhs - coeff [ i ] ) ;
  }
  return result ;
}
