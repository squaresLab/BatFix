bool check ( int num ) {
  int digitSum = 0 ;
  while ( num > 0 ) {
    int rem = num % 10 ;
    digitSum = digitSum + rem ;
    num = num / 10 ;
  }
  return ( digitSum % 3 == 0 ) ;
}
