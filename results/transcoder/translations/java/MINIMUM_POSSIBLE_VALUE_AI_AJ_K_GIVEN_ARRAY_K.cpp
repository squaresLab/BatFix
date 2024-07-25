void pairs ( int arr [ ] , int n , int k ) {
  int smallest = INT_MAX ;
  int count = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = i + 1 ;
  j < n ;
  j ++ ) {
    if ( abs ( arr [ i ] + arr [ j ] - k ) < smallest ) {
      smallest = abs ( arr [ i ] + arr [ j ] - k ) ;
      count = 1 ;
    }
    else if ( abs ( arr [ i ] + arr [ j ] - k ) == smallest ) {
      count ++ ;
    }
  }
  cout << "Minimal Value = " << smallest << endl ;
  cout << "Total Pairs = " << count << endl ;
}
