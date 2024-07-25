void printFirstNegativeInteger ( int arr [ ] , int n , int k ) {
  bool flag ;
  for ( int i = 0 ;
  i < ( n - k + 1 ) ;
  i ++ ) {
    flag = false ;
    for ( int j = 0 ;
    j < k ;
    j ++ ) {
      if ( arr [ i + j ] < 0 ) {
        cout << ( arr [ i + j ] ) << " " ;
        flag = true ;
        break ;
      }
    }
    if ( ! flag ) {
      cout << "0" << " " ;
    }
  }
}
