void printSorted ( int a , int b , int c ) {
  int get_max = max ( a , max ( b , c ) ) ;
  int get_min = - max ( - a , max ( - b , - c ) ) ;
  int get_mid = ( a + b + c ) - ( get_max + get_min ) ;
  cout << get_min << " " << get_mid << " " << get_max << endl ;
}
