void printPascal ( int n ) {
  vector < vector < int >> arr ( n , vector < int > ( n , 0 ) ) ;
  for ( int line = 0 ;
  line < n ;
  line ++ ) {
    for ( int i = 0 ;
    i <= line ;
    i ++ ) {
      if ( line == i || i == 0 ) {
        arr [ line ] [ i ] = 1 ;
      }
      else {
        arr [ line ] [ i ] = arr [ line - 1 ] [ i - 1 ] + arr [ line - 1 ] [ i ] ;
      }
      cout << arr [ line ] [ i ] ;
    }
    cout << "\n" ;
  }
}
