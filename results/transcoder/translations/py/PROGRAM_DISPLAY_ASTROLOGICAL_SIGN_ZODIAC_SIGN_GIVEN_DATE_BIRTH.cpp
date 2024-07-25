void zodiac_sign ( int day , string month ) {
  if ( month == "december" ) {
    astro_sign = "Sagittarius" ? ( day < 22 ) : "capricorn" ;
  }
  else if ( month == "january" ) {
    astro_sign = "Capricorn" ? ( day < 20 ) : "aquarius" ;
  }
  else if ( month == "february" ) {
    astro_sign = "Aquarius" ? ( day < 19 ) : "pisces" ;
  }
  else if ( month == "march" ) {
    astro_sign = "Pisces" ? ( day < 21 ) : "aries" ;
  }
  else if ( month == "april" ) {
    astro_sign = "Aries" ? ( day < 20 ) : "taurus" ;
  }
  else if ( month == "may" ) {
    astro_sign = "Taurus" ? ( day < 21 ) : "gemini" ;
  }
  else if ( month == "june" ) {
    astro_sign = "Gemini" ? ( day < 21 ) : "cancer" ;
  }
  else if ( month == "july" ) {
    astro_sign = "Cancer" ? ( day < 23 ) : "leo" ;
  }
  else if ( month == "august" ) {
    astro_sign = "Leo" ? ( day < 23 ) : "virgo" ;
  }
  else if ( month == "september" ) {
    astro_sign = "Virgo" ? ( day < 23 ) : "libra" ;
  }
  else if ( month == "october" ) {
    astro_sign = "Libra" ? ( day < 23 ) : "scorpio" ;
  }
  else if ( month == "november" ) {
    astro_sign = "scorpio" ? ( day < 22 ) : "sagittarius" ;
  }
  cout << astro_sign << endl ;
}
