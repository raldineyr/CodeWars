long long (long long n)
{
  
  long long reverse = 0;
   
  
  if (n >= 0){
    
    do
    {
      
    reverse = (reverse * 10) + (n % 10);
    
    n /= 10;
    
    }while(n != 0);
   // printf("%lld", reverse);
    return reverse;
  }
  
  else if (n < 0)
  {
    n *= (-1);
    
    do
    {
      
    reverse = (reverse * 10) + (n % 10);
    
    n /= 10;
    
    }while(n != 0);
    //printf("%lld", reverse * (-1));
    return reverse * (-1);
   
  }
  
}
