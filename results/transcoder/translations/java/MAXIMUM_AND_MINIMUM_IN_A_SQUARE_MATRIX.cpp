void maxMin ( int arr [ ] [ 100 ] , int n ) {
  int min = + 2147483647 ;
  int max = - 2147483648 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= n / 2 ;
    j ++ ) {
      if ( arr [ i ] [ j ] > arr [ i ] [ n - j - 1 ] ) {
        if ( min > arr [ i ] [ n - j - 1 ] ) {
          min = arr [ i ] [ n - j - 1 ] ;
        }
        if ( max < arr [ i ] [ j ] ) {
          max = arr [ i ] [ j ] ;
        }
      }
      else {
        if ( min > arr [ i ] [ j ] ) {
          min = arr [ i ] [ j ] ;
        }
        if ( max < arr [ i ] [ n - j - 1 ] ) {
          max = arr [ i ] [ n - j - 1 ] ;
        }
      }
    }
  }
  cout << "Maximum = " << max << ", Minimum = " << min << endl ;
}
