void alternateSort ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  int i = 0 , j = n - 1 ;
  while ( i < j ) {
    cout << arr [ j -- ] << " " ;
    cout << arr [ i ++ ] << " " ;
  }
  if ( n % 2 != 0 ) {
    cout << arr [ i ] << endl ;
  }
}
