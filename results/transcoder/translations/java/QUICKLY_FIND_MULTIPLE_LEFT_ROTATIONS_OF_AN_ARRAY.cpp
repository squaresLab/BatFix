void leftRotate ( int arr [ ] , int n , int k ) {
  for ( int i = k ;
  i < k + n ;
  i ++ ) {
    cout << arr [ i % n ] << " " ;
  }
}
