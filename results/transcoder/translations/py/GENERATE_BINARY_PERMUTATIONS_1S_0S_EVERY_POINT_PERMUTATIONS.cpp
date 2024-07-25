void generate ( int ones , int zeroes , string str , int len1 ) {
  if ( ( len1 == str . size ( ) ) || ( ones == zeroes ) ) {
    cout << str << " " ;
    return ;
  }
  generate ( ones + 1 , zeroes , str + "1" , len1 ) ;
  if ( ( ones > zeroes ) || ( zeroes == ones ) ) {
    generate ( ones , zeroes + 1 , str + "0" , len1 ) ;
  }
}
