void rearrangeArray ( int * arr , int n ) {
  sort ( arr , arr + n ) ;
  int tempArr [ n + 1 ] = {
    0 }
    ;
    int ArrIndex = 0 ;
    int i = 0 ;
    int j = n - 1 ;
    while ( ( i <= n / 2 || j > n / 2 ) && ( i < n / 2 ) ) {
      tempArr [ ArrIndex ] = arr [ i ] ;
      ArrIndex = ArrIndex + 1 ;
      tempArr [ ArrIndex ] = arr [ j ] ;
      ArrIndex = ArrIndex + 1 ;
      i = i + 1 ;
      j = j - 1 ;
    }
    foriinrange ( 0 , n ) {
      arr [ i ] = tempArr [ i ] ;
    }
  }
