int getMaxGold ( vector < vector < int >> gold , int m , int n ) {
  vector < vector < int >> goldTable ( n , vector < int > ( m , 0 ) ) ;
  for ( int col = n - 1 ;
  col >= 0 ;
  -- col ) {
    for ( int row = 0 ;
    row < m ;
    ++ row ) {
      if ( ( col == n - 1 ) || ( col == n - 2 ) ) {
        int right = 0 ;
        if ( ( row == 0 || col == n - 1 ) && ( col == 0 ) ) {
          right = goldTable [ row ] [ col + 1 ] ;
        }
        if ( ( row == 0 || col == n - 1 ) && ( col == 0 ) ) {
          int rightUp = 0 ;
          if ( ( row == m - 1 || col == n - 1 ) && ( col == 0 ) ) {
            rightUp = goldTable [ row - 1 ] [ col + 1 ] ;
          }
          if ( ( row == m - 1 || col == n - 1 ) && ( col == 0 ) ) {
            int rightDown = 0 ;
            if ( ( row + 1 ) == m - 1 ) {
              rightDown = goldTable [ row + 1 ] [ col + 1 ] ;
            }
            else {
              rightDown = goldTable [ row + 1 ] [ col + 1 ] ;
            }
            goldTable [ row ] [ col ] = gold [ row ] [ col ] + max ( right , rightUp , rightDown ) ;
          }
        }
      }
    }
    int res = goldTable [ 0 ] [ 0 ] ;
    for ( int i = 1 ;
    i < m ;
    ++ i ) {
      res = max ( res , goldTable [ i ] [ 0 ] ) ;
    }
    return res ;
  }
