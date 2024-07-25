void freq ( int ar [ ] [ m ] , int n ) {
  int even = 0 ;
  int odd = 0 ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( ( ( ar [ i ] [ j ] % 2 ) == 0 ) && ( ( ar [ i ] [ j ] % 2 ) == 1 ) ) {
        even ++ ;
      }
      else {
        odd ++ ;
      }
    }
  }
  cout << " Frequency of odd number =" << odd << endl ;
  cout << " Frequency of even number =" << even << endl ;
}
