void NextFit ( int * blockSize , int m , int * processSize , int n ) {
  int * allocation = new int [ n ] ;
  int j = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    while ( j < m ) {
      if ( blockSize [ j ] >= processSize [ i ] ) {
        allocation [ i ] = j ;
        blockSize [ j ] -= processSize [ i ] ;
        break ;
      }
      j = ( j + 1 ) % m ;
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
