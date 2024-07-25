void printAllAPTriplets ( int arr [ ] , int n ) {
  string s ;
  ;
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j <= n ;
    j ++ ) {
      int diff = arr [ j ] - arr [ i ] ;
      ;
      if ( ( ( arr [ i ] - diff ) < arr [ j ] ) && ( ( arr [ i ] - diff ) > arr [ j ] ) ) {
        cout << "{} {} {}" << ( ( arr [ i ] - diff ) < arr [ i ] ? "{}" : "{}" ) << "\n" ;
      }
      ;
    }
    ;
    s . push_back ( arr [ i ] ) ;
    ;
  }
  