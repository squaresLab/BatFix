void carveCross ( string str ) {
  int n = str . length ( ) ;
  if ( n % 2 == 0 ) {
    cout << "Not possible. Please enter " << "odd length string.\n" ;
  }
  else {
    char arr [ max ] [ max ] ;
    int m = n / 2 ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      for ( int j = 0 ;
      j < n ;
      j ++ ) {
        arr [ i ] [ j ] = 'X' ;
      }
    }
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      arr [ i ] [ m ] = str [ i ] ;
    }
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      arr [ m ] [ i ] = str [ i ] ;
    }
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      for ( int j = 0 ;
      j < n ;
      j ++ ) {
        cout << arr [ i ] [ j ] << " " ;
      }
      cout << "\n" ;
    }
  }
}
