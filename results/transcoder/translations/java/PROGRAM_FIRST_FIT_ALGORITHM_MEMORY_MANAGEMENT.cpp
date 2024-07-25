void firstFit ( int blockSize [ ] , int m , int processSize [ ] , int n ) {
  int allocation [ n ] ;
  for ( int i = 0 ;
  i < allocation . length ;
  i ++ ) {
    allocation [ i ] = - 1 ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < m ;
    j ++ ) {
      if ( blockSize [ j ] >= processSize [ i ] ) {
        allocation [ i ] = j ;
        blockSize [ j ] -= processSize [ i ] ;
        break ;
      }
    }
  }
  cout << "\nProcess No.\tProcess Size\tBlock no." << endl ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    cout << " " << ( i + 1 ) << "\t\t" << processSize [ i ] << "\t\t" ;
    if ( allocation [ i ] != - 1 ) {
      cout << allocation [ i ] + 1 << endl ;
    }
    else {
      cout << "Not Allocated" << endl ;
    }
    cout << endl ;
  }
}
