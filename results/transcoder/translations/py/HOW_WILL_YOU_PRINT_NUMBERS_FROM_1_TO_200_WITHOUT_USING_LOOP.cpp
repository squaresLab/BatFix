void printNos ( int n ) {
  if ( n > 0 ) {
    printNos ( n - 1 ) ;
    cout << n << " " ;
  }
}
