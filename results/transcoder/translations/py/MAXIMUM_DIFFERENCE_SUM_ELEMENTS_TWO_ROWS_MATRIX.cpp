int maxRowDiff ( int * * mat , int m , int n ) {
  int rowSum [ m ] = {
    0 }
    ;
    for ( int i = 0 ;
    i <= m ;
    i ++ ) {
      int sum = 0 ;
      for ( int j = 0 ;
      j <= n ;
      j ++ ) {
        sum += mat [ i ] [ j ] ;
      }
      rowSum [ i ] = sum ;
    }
    int maxDiff = rowSum [ 1 ] - rowSum [ 0 ] ;
    int minElement = rowSum [ 0 ] ;
    for ( int i = 1 ;
    i <= m ;
    i ++ ) {
      if ( ( rowSum [ i ] - minElement > maxDiff ) && ( rowSum [ i ] < minElement ) ) {
        maxDiff = rowSum [ i ] - minElement ;
      }
      if ( ( rowSum [ i ] < minElement ) && ( rowSum [ i ] > maxDiff ) ) {
        minElement = rowSum [ i ] ;
      }
    }
    return maxDiff ;
  }

