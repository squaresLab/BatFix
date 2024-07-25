void MAXMIN ( int arr [ ] [ n ] , int n ) {
  int MIN = 10 * * 9 ;
  int MAX = - 10 * * 9 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n / 2 + 1 ;
    j ++ ) {
      if ( ( arr [ i ] [ j ] > arr [ i ] [ n - j - 1 ] ) && ( arr [ i ] [ n - j - 1 ] < arr [ i ] [ n - j - 1 ] ) ) {
        if ( ( MIN > arr [ i ] [ n - j - 1 ] ) && ( arr [ i ] [ n - j - 1 ] < arr [ i ] [ n - j - 1 ] ) ) {
          MIN = arr [ i ] [ n - j - 1 ] ;
        }
        if ( ( MAX < arr [ i ] [ n - j - 1 ] ) && ( arr [ i ] [ n - j - 1 ] < arr [ i ] [ n - j - 1 ] ) ) {
          MAX = arr [ i ] [ n - j - 1 ] ;
        }
      }
      else {
        if ( ( MIN > arr [ i ] [ n - j - 1 ] ) && ( arr [ i ] [ n - j - 1 ] < arr [ i ] [ n - j - 1 ] ) ) {
          MIN = arr [ i ] [ n - j - 1 ] ;
        }
        if ( ( MAX < arr [ i ] [ n - j - 1 ] ) && ( arr [ i ] [ n - j - 1 ] < arr [ i ] [ n - j - 1 ] ) ) {
          MAX = arr [ i ] [ n - j - 1 ] ;
        }
      }
    }
  }
  cout << "MAXimum =" << MAX << ", MINimum =" << MIN << endl ;
}
