 if(strcmpi(D1.getdept1(),B.getdept())!=0 && strcmpi(D1.getdest1(),B.getdest())!=0)
   {



if(!d1)
  cout<<"CANNOT OPEN FILE";
else
 {


   while(d1.read((char*)&D1,sizeof(D1)))
   {
  if(strcmpi(D1.getdept1(),B.getdept())==0 && strcmpi(D1.getdest1(),B.getdest())==0)
    strcpy(fno2,D1.getfno1());
    found1+=1;


   }


   char fno2[10];