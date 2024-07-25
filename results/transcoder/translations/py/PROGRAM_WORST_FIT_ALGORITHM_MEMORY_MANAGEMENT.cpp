void worstFit ( int blockSize [ ] , int m , int processSize [ ] , int n ) {
  int allocation [ n ] = {
    - 1 }
    ;
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
    cout << "Process No. Process Size Block no." << endl ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) {
      cout << i + 1 << "         " << processSize [ i ] << "     " ;
      if ( allocation [ i ] != - 1 ) {
        cout << allocation [ i ] + 1 << endl ;
      }
      else {
        cout << "Not Allocated" << endl ;
      }
    }
  }
  