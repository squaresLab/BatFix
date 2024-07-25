void PrintMinNumberForPattern ( string arr ) {
  int curr_max = 0 ;
  int last_entry = 0 ;
  int j ;
  for ( int i = 0 ;
  i < arr . length ( ) ;
  i ++ ) {
    int noOfNextD = 0 ;
    switch ( arr [ i ] ) {
      case 'I' : j = i + 1 ;
      while ( j < arr . length ( ) && arr [ j ] == 'D' ) {
        noOfNextD ++ ;
        j ++ ;
      }
      if ( i == 0 ) {
        curr_max = noOfNextD + 2 ;
        cout << " " << ++ last_entry << endl ;
        cout << " " << curr_max << endl ;
        last_entry = curr_max ;
      }
      else {
        curr_max = curr_max + noOfNextD + 1 ;
        last_entry = curr_max ;
        cout << " " << last_entry << endl ;
      }
      for ( int k = 0 ;
      k < noOfNextD ;
      k ++ ) {
        cout << " " << -- last_entry << endl ;
        i ++ ;
      }
      break ;
      case 'D' : if ( i == 0 ) {
        j = i + 1 ;
        while ( j < arr . length ( ) && arr [ j ] == 'D' ) {
          noOfNextD ++ ;
          j ++ ;
        }
        curr_max = noOfNextD + 2 ;
        cout << " " << curr_max << " " << ( curr_max - 1 ) << endl ;
        last_entry = curr_max - 1 ;
      }
      else {
        cout << " " << ( last_entry - 1 ) << endl ;
        last_entry -- ;
      }
      break ;
    }
  }
  cout << endl ;
}
