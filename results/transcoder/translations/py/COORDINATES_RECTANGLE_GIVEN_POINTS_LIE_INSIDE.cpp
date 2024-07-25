void printRect ( int X , int Y , int n ) {
  int Xmax = max ( X ) ;
  int Xmin = min ( X ) ;
  int Ymax = max ( Y ) ;
  int Ymin = min ( Y ) ;
  cout << "{" << Xmin << ", " << Ymin << "}" << endl ;
  cout << "{" << Xmin << ", " << Ymax << "}" << endl ;
  cout << "{" << Xmax << ", " << Ymax << "}" << endl ;
  cout << "{" << Xmax << ", " << Ymin << "}" << endl ;
}
