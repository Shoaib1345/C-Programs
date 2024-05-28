#include<iostream>
using namespace std;
int main ()
{
// // Task  one 
//   int units;
//   float bill;
//   
//   cout<<"Enter the units of electricty  consumed :  ";
//   cin>>units;
//   if(units<=50){
//   	bill=units*0.50;
//   }
//    else if(units>=50 && units<=150){
//    	bill=50*0.50 + (units-50)*0.75;
//	}
//	else if(units>=150 && units<=250){
//		bill=50*0.50 + 100*0.75 + (units-150)*1.20 + (units-250)*1.5;
//	}
//	
//	bill=bill+(bill*0.20);
//	cout<<"Your net bill is :"<<bill;



   //task 2
//     char  Grade;
//    cout<<"Enter your Grade :";
//    cin>>Grade;
//
//    switch (Grade){
//	
//    case 'E':
//    	cout<<"Ecellent";
//    	break;
//    	 case 'V':
//    	cout<<"Very Good";
//    	break;
//    	 case 'G':
//    	cout<<"Good";
//    	break;
//    	 case 'A':
//    	cout<<"Average";
//    	break;
//    	 case 'F':
//    	cout<<"fail";
//       	break;
//       	default:
//cout<<"Enter Value between  pata nhi  : ";
//
//}






  //TASK3
//
//    int  num;
//    cout<<"Enter your Number for chaking seplling in words :";
//    cin>>num;
//
//    switch (num)
//	{
//	
//    case 1:
//    	cout<<"One";
//    	break;
//    	 case 2:
//    	cout<<"Two";
//    	break;
//    	 case 3:
//    	cout<<"Three";
//    	break;
//    	 case 4:
//    	cout<<"Four";
//    	break;
//    	 case 5:
//    	cout<<"Five";
//      
//       	default:
// cout<<"Enter Value between  pata nhi  : ";

//}


//task 4

// int j,k;
// cout<<"Enter the for N Natural Numbers :";
//  cin>>j;
//  for(k=1;k<=j;k++)
//  cout<<k<<endl;
//  

  
//Task  5

//   int n,sum;
//   cout<<"Enter the value of N :";
//   cin>>n;
//  
//   for(int i=1;i<=n; i++)
//   {
//  	int even_number=2*i;
//  	sum+=even_number;
//   }
//   cout<<"sum of frist "<<n<<" Even  number is :"<<sum<<endl;
//



//   // task  6 and 8

//   int i,num;
//   cout<<"Enter X Num :";
//   cin>>num;
//   
//   cout<<"table of : "<<num<<": ";
//   for(i>=1; i<=10; i++)
//   {
//   	cout<<num<<" X "<<i<<" = "<<num*i<<endl;
//   }


//	return 0;

   //TASK 9

//  int rows;
//  cout<<"Enter the number of rows  :";
//   cin>>rows;
//  
//  for(int i=1; i<= rows; ++i ){
//  	  for(int j=1; j<=i; ++j ){
//  	  	cout<<"* ";
//		}
//		cout<<"\n";
//  }
//      

  int num;
  cout<<"Enter a Number :";
  cin>>num;
  int total = 2*num-1;
  for(int i=0; i<num; ++i)
  {
  	cout<<total-(i*2)<<" ";
  }
  cout<<num<<endl;

	return 0;
}

