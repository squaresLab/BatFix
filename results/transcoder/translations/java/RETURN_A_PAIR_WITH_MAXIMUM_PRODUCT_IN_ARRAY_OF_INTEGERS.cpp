void maxProduct ( int arr [ ] , int n ) {
  if ( n < 2 ) {
    cout << "No pairs exists" << endl ;
    return ;
  }
  int a = arr [ 0 ] , b = arr [ 1 ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = i + 1 ;
  j < n ;
  j ++ ) if ( arr [ i ] * arr [ j ] > a * b ) {
    a = arr [ i ] ;
    b = arr [ j ] ;
  }
  cout << "Max product pair is {" << a << ", " << b << "}" << endl ;
}
