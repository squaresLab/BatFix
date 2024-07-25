void alternateSort ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  int i = 0 ;
  int j = n - 1 ;
  while ( ( i < j ) && ( i < j ) ) {
    cout << arr [ j ] << " " ;
    j -- ;
    cout << arr [ i ] << " " ;
    i ++ ;
  }
  if ( ( n % 2 != 0 ) && ( i < n ) ) cout << arr [ i ] << endl ;
}
