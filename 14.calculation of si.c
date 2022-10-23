/* Calculation of simple intrest */
int main()
{
  printf("Registration number = RA22110420110033"\n);
  int p, n ; // int here means the values of p:- principal and n :- time will be an integer value 
  float r , si ; p= 1000;n = 3 ; r = 8.5 ; // float is used as rate is in decimals , to print decimal values we use float 
  /* formula for simple intrest */
  si = p*n*r/100;
  printf ( " %f" , si ); 
}
