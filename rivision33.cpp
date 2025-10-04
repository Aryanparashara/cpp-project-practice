/*#include<iostream>
int main()
{
  int arr[50],i,j,n,temp;
  std::cout<<"\n Enter total no. of elements to store : ";
  std::cin>>n;
  std::cout<<"\n Enter "<<n<<" elements ";
  for(i=0;i<n;i++)
  {
    std::cin>>arr[i];
  }
  for(i=0;i<(n-1);i++)
  {
    for(j=0;j<(n-i-1);j++)
    {
      if(arr[j]<arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  std::cout<<"\n Array elements is descending order : ";
  for(i=0;i<n;i++)
  {
    std::cout<<"\n "<<arr[i];
  }
}*/
