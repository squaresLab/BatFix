void unique ( int * * mat , int n , int m ) {
  int maximum = 0 ;
  ;
  int flag = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= m ;
    j ++ ) {
      if ( ( maximum < mat [ i ] [ j ] ) && ( maximum < mat [ i ] [ j ] ) ) {
        maximum = mat [ i ] [ j ] ;
      }
    }
  }
  int uniqueElementMap [ maximum + 1 ] = {
    0 }
    ;
    for ( int i = 0 ;
    i <= n ;
    i ++ ) {
      for ( int j = 0 ;
      j <= m ;
      j ++ ) {
        uniqueElementMap [ mat [ i ] [ j ] ] ++ ;
      }
    }
    for ( int key = 0 ;
    key < maximum + 1 ;
    key ++ ) {
      if ( uniqueElementMap [ key ] == 1 ) {
        cout << key << " " ;
        flag = 1 ;
      }
    }
    if ( ( flag == 0 ) || ( flag == 1 ) ) {
      cout << "No unique element in the matrix" << endl ;
    }
  }

