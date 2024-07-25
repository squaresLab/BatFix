void sortString ( string str ) {
  char * arr = str . c_str ( ) ;
  std :: sort ( arr , arr + str . size ( ) ) ;
  std :: cout << std :: fixed << std :: setprecision ( 2 ) << arr ;
}
