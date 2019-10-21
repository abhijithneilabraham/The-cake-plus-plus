d1.open("DOMESTIC",ios::binary|ios::in);
if(!d1)
  cout<<"CANNOT OPEN FILE";
else
 {

  do
  {
   while(d1.read((char*)&D1,sizeof(D1)))
   {
  if(strcmpi(D1.getdept1(),B.getdept())==0 && strcmpi(D1.getdest1(),B.getdest())==0)
    strcpy(fno1,D1.getfno1());
    t3=D1.gettime();
    found1+=1;


   }
  }while(found1<42);
  clrscr();
  B.dispbooking();
  D1.dispflight();

    getch();
  }
