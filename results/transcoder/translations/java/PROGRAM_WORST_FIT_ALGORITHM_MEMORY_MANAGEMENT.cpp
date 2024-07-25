void worstFit ( int blockSize [ ] , int m , int processSize [ ] , int n ) {
  int allocation [ n ] ;
  for ( int i = 0 ;
  i < allocation . length ;
  i ++ ) {
    allocation [ i ] = - 1 ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int wstIdx = - 1 ;
    for ( int j = 0 ;
    j < m ;
    j ++ ) {
      if ( blockSize [ j ] >= processSize [ i ] ) {
        if ( wstIdx == - 1 ) {
          wstIdx = j ;
        }
        else if ( blockSize [ wstIdx ] < blockSize [ j ] ) {
          wstIdx = j ;
        }
      }
    }
    if ( wstIdx != - 1 ) {
      allocation [ i ] = wstIdx ;
      blockSize [ wstIdx ] -= processSize [ i ] ;
    }
  }
  cout << "\nProcess No.\tProcess Size\tBlock no." << endl ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    cout << "   " << ( i + 1 ) << "\t\t" << processSize [ i ] << "\t\t" ;
    if ( allocation [ i ] != - 1 ) {
      cout << allocation [ i ] + 1 ;
    }
    else {
      cout << "Not Allocated" ;
    }
    cout << endl ;
  }
}
