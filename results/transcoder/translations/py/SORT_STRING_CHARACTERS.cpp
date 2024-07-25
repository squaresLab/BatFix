void sortString ( string str ) {
  str . erase ( std :: find_if ( str . begin ( ) , str . end ( ) , std :: not1 ( std :: ptr_fun < int , int > ( std :: isspace ) ) ) , str . end ( ) ) ;
  cout << str << endl ;
}
