bool isPossible ( int n , int index , int modulo , int M , int * arr [ ] , int dp [ ] [ M ] ) {
  modulo = ( ( modulo % M ) + M ) % M ;
  if ( ( index == n ) || ( index == 0 ) ) {
    if ( ( modulo == 0 ) ) return 1 ;
    return 0 ;
  }
  if ( ( dp [ index ] [ modulo ] != - 1 ) && ( dp [ index ] [ modulo ] != - 1 ) ) return dp [ index ] [ modulo ] ;
  bool placeAdd = isPossible ( n , index + 1 , modulo + arr [ index ] , M , arr , dp ) ;
  bool placeMinus = isPossible ( n , index + 1 , modulo - arr [ index ] , M , arr , dp ) ;
  bool res = ( bool ) ( placeAdd || placeMinus ) ;
  dp [ index ] [ modulo ] = res ;
  return res ;
}
