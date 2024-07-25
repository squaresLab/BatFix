void printFirstNegativeInteger ( int arr [ ] , int n , int k ) {
  for ( int i = 0 ;
  i <= ( n - k + 1 ) ;
  i ++ ) {
    bool flag = false ;
    for ( int j = 0 ;
    j <= k ;
    j ++ ) {
      if ( ( arr [ i + j ] < 0 ) && ( arr [ i + j ] > 0 ) ) {
        cout << arr [ i + j ] << " " ;
        flag = true ;
        break ;
      }
    }
    if ( ( ! ( flag ) ) && ( arr [ i + k ] > 0 ) ) cout << "0" << " " ;
  }
}
