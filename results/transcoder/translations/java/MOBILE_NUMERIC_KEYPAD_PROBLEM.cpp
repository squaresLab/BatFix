int getCount ( char keypad [ ] [ 10 ] , int n ) {
  if ( keypad == NULL || n <= 0 ) return 0 ;
  if ( n == 1 ) return 10 ;
  int odd [ 10 ] ;
  int even [ 10 ] ;
  int i = 0 , j = 0 , useOdd = 0 , totalCount = 0 ;
  for ( i = 0 ;
  i <= 9 ;
  i ++ ) {
    odd [ i ] = 1 ;
  }
  for ( j = 2 ;
  j <= n ;
  j ++ ) {
    useOdd = 1 - useOdd ;
    if ( useOdd == 1 ) {
      even [ 0 ] = odd [ 0 ] + odd [ 8 ] ;
      even [ 1 ] = odd [ 1 ] + odd [ 2 ] + odd [ 4 ] ;
      even [ 2 ] = odd [ 2 ] + odd [ 1 ] + odd [ 3 ] + odd [ 5 ] ;
      even [ 3 ] = odd [ 3 ] + odd [ 2 ] + odd [ 6 ] ;
      even [ 4 ] = odd [ 4 ] + odd [ 1 ] + odd [ 5 ] + odd [ 7 ] ;
      even [ 5 ] = odd [ 5 ] + odd [ 2 ] + odd [ 4 ] + odd [ 8 ] + odd [ 6 ] ;
      even [ 6 ] = odd [ 6 ] + odd [ 3 ] + odd [ 5 ] + odd [ 9 ] ;
      even [ 7 ] = odd [ 7 ] + odd [ 4 ] + odd [ 8 ] ;
      even [ 8 ] = odd [ 8 ] + odd [ 0 ] + odd [ 5 ] + odd [ 7 ] + odd [ 9 ] ;
      even [ 9 ] = odd [ 9 ] + odd [ 6 ] + odd [ 8 ] ;
    }
    else {
      odd [ 0 ] = even [ 0 ] + even [ 8 ] ;
      odd [ 1 ] = even [ 1 ] + even [ 2 ] + even [ 4 ] ;
      odd [ 2 ] = even [ 2 ] + even [ 1 ] + even [ 3 ] + even [ 5 ] ;
      odd [ 3 ] = even [ 3 ] + even [ 2 ] + even [ 6 ] ;
      odd [ 4 ] = even [ 4 ] + odd [ 1 ] + even [ 5 ] + even [ 7 ] ;
      odd [ 5 ] = even [ 5 ] + odd [ 2 ] + odd [ 4 ] + odd [ 8 ] ;
      odd [ 8 ] = even [ 8 ] + odd [ 0 ] ;
    }
    totalCount += odd [ 0 ] ;
  }
  return totalCount