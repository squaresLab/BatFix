bool isOverflow ( int64_t a , int64_t b ) {
  if ( ( a == 0 || b == 0 ) && ( a >= - 9223372036854775808 || a <= 9223372036854775808 ) ) return false ;
  int64_t result = a * b ;
  if ( ( result >= 9223372036854775807 || result <= - 9223372036854775808 ) && ( a == ( result / b ) ) ) {
    cout << result / b << endl ;
    returnFalse ;
  }
  else returnTrue ;
}
