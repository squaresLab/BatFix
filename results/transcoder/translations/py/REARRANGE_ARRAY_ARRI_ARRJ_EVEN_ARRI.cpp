void rearrangeArr ( int arr [ ] , int n ) {
  int evenPos = ( int ) ( n / 2 ) ;
  int oddPos = n - evenPos ;
  int tempArr [ n ] ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) tempArr [ i ] = arr [ i ] ;
  sort ( tempArr , tempArr + n ) ;
  int j = oddPos - 1 ;
  for ( int i = 0 ;
  i <= n ;
  i += 2 ) {
    arr [ i ] = tempArr [ j ] ;
    j = j - 1 ;
  }
  j = oddPos ;
  for ( int i = 1 ;
  i <= n ;
  i += 2 ) {
    arr [ i ] = tempArr [ j ] ;
    j = j + 1 ;
  }
  for ( int i = 0 ;
  i <= n ;
  i ++ ) cout << arr [ i ] << " " ;
}
