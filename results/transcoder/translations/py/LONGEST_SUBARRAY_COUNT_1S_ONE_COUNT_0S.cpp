public : int lenOfLongSubarr ( int arr [ ] , int n ) {
  map < int , int > um = {
    i for i = 0 ;
    i < 10 ;
    i ++ ) {
      if ( arr [ i ] == 0 ) {
        sum ++ ;
      }
      else {
        sum ++ ;
      }
      if ( ( sum == 1 ) && ( ( arr [ i ] == 0 ) || ( arr [ i ] == 1 ) ) ) {
        maxLen = i + 1 ;
      }
      else if ( ( sum != 0 ) && ( ( arr [ i ] == 0 ) || ( arr [ i ] == 1 ) ) ) {
        um [ sum ] = i ;
      }
      if ( ( ( sum - 1 ) < um . size ( ) ) && ( ( maxLen < ( i - um . size ( ) - 1 ) ) ) ) {
        maxLen = i - um . size ( ) ;
      }
    }
    return maxLen ;
  }
