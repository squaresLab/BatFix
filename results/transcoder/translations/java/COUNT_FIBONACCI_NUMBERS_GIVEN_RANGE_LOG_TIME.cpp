int countFibs ( int low , int high ) {
  int f1 = 0 , f2 = 1 , f3 = 1 ;
  int result = 0 ;
  while ( f1 <= high ) {
    if ( f1 >= low ) {
      result ++ ;
    }
    f1 = f2 ;
    f2 = f3 ;
    f3 = f1 + f2 ;
  }
  return result ;
}
