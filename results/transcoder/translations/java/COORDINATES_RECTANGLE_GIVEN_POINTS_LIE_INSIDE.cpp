void printRect ( int32_t X [ ] , int32_t Y [ ] , int n ) {
  int32_t Xmax = std :: max ( std :: begin ( X ) , std :: end ( X ) ) ;
  int32_t Xmin = std :: min ( std :: begin ( X ) , std :: end ( X ) ) ;
  int32_t Ymax = std :: max ( std :: begin ( Y ) , std :: end ( Y ) ) ;
  int32_t Ymin = std :: min ( std :: begin ( Y ) , std :: end ( Y ) ) ;
  std :: cout << "{" << Xmin << ", " << Ymin << "}" << std :: endl ;
  std :: cout << "{" << Xmin << ", " << Ymax << "}" << std :: endl ;
  std :: cout << "{" << Xmax << ", " << Ymax << "}" << std :: endl ;
  std :: cout << "{" << Xmax << ", " << Ymin << "}" << std :: endl ;
}
