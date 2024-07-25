void printFactorialNums ( int n ) {
  int fact = 1 ;
  int x = 2 ;
  while ( fact <= n ) {
    cout << fact << " " ;
    fact = fact * x ;
    x ++ ;
  }
}
