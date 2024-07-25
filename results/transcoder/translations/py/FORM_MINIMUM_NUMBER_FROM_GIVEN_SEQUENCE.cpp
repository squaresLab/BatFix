void PrintMinNumberForPattern ( char arr [ ] ) {
  int currMax = 0 ;
  int lastEntry = 0 ;
  int i = 0 ;
  while ( i < arr . length ( ) ) {
    int noOfNextD = 0 ;
    if ( arr [ i ] == 'I' ) {
      int j = i + 1 ;
      while ( j < arr . length ( ) && arr [ j ] == 'D' ) {
        noOfNextD ++ ;
        j ++ ;
      }
      if ( i == 0 ) {
        currMax = noOfNextD + 2 ;
        lastEntry ++ ;
        cout << "" << lastEntry << " " ;
        cout << "" << currMax << " " ;
        lastEntry = currMax ;
      }
      else {
        currMax += noOfNextD + 1 ;
        lastEntry = currMax ;
        cout << "" << lastEntry << " " ;
      }
      for ( int k = 0 ;
      k < noOfNextD ;
      k ++ ) {
        lastEntry -- ;
        cout << "" << lastEntry << " " ;
        i ++ ;
      }
    }
    else if ( arr [ i ] == 'D' ) {
      if ( i == 0 ) {
        int j = i + 1 ;
        while ( j < arr . length ( ) && arr [ j ] == 'D' ) {
          noOfNextD ++ ;
          j ++ ;
        }
        currMax = noOfNextD + 2 ;
        cout << "" << currMax << " " ;
        cout << "" << currMax - 1 << " " ;
        lastEntry = currMax - 1 ;
      }
      else {
        cout << "" << lastEntry - 1 << " " ;
        lastEntry -- ;
      }
    }
    i ++ ;
  }
  cout << endl ;
}
