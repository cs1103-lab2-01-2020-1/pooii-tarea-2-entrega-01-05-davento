#include "ejercicios.h"

void	ejercicio1()
{
	cout<<"Ejercicio 1"<<endl;
}

void	ejercicio2()
{
	cout<<"Ejercicio 2"<<endl;
	myStack s(7);
	cout<<"Is it empty? "<<s.isEmpty()<<endl;
	s.push(4);
	s.push(2);
	s.push(8);
	s.push(7);
	s.push(1);
	cout<<"After adding elements: "<<endl;
	cout<<"\t- Is it full? "<<s.isFull()<<endl;
	cout<<"\t- Current size is: "<<s.getSize()<<endl;
	s.pop();
	s.pop();
	cout<<"\t- Current size is: "<<s.getSize()<<endl;
	cout<<"\t- Last element inserted is: "<<s.getTopData()<<endl;
	while(!s.isEmpty())
	{
		int i = s.getTopData();
		cout<<i<<" ";
		s.pop();
	}
	cout<<endl;
}


void	ejercicio3()
{
	cout<<"Ejercicio 3"<<endl;
	int	arr1[] = {1, 1, 0, 3, 7};
	int	n1 = sizeof(arr1)/sizeof(arr1[0]);
	int	arr2[] = {8, 7, 3, 6, 2, 5, 4};
	int	n2 = sizeof(arr2)/sizeof(arr2[0]);

	list<int> l1(arr1, arr1 + n1);
	list<int> l2(arr2, arr2 + n2);

	cout<<"Lista 1: ";
	print_list(l1);
	cout<<"Lista 2: ";
	print_list(l2);

	l1.merge(l2);

	cout<<"Tras aplicar un merge: ";
	print_list(l1);

	l1.sort();

	cout<<"Tras aplicar un sort: ";
	print_list(l1);

	cout<<"Resultado de buscar un 1: "<<binary_search(l1.begin(), l1.end(), 1)<<endl;
	cout<<"Resultado de buscar un 9: "<<binary_search(l1.begin(), l1.end(), 9)<<endl;
	cout<<"Resultado de buscar un 7: "<<binary_search(l1.begin(), l1.end(), 7)<<endl;

	auto low = lower_bound(l1.begin(), l1.end(), 7);

}

void	ejercicio4()
{
	cout<<"Ejercicio 4"<<endl;
	int n = 6;
	cout<<"\nUsando un stack de ints:"<<endl;
	myStackT<int> s1(6);
	cout<<"Is it empty? "<<s1.isEmpty()<<endl;
	s1.push(4);
	s1.push(2);
	s1.push(8);
	s1.push(7);
	s1.push(1);
	cout<<"After adding elements: "<<endl;
	cout<<"\t- Is it full? "<<s1.isFull()<<endl;
	cout<<"\t- Current size is: "<<s1.getSize()<<endl;
	cout<<"\t- Last element inserted is: "<<s1.getTopData()<<endl;
	s1.pop();
	s1.pop();
	cout<<"\t- Current size is: "<<s1.getSize()<<endl;
	cout<<"\t- Last element inserted is: "<<s1.getTopData()<<endl;
	while(!s1.isEmpty())
	{
		int i = s1.getTopData();
		cout<<i<<" ";
		s1.pop();
	}
	cout<<endl;

	cout<<"\nUsando un stack de chars:"<<endl;
	myStackT<char> s2(9);
	cout<<"Is it empty? "<<s2.isEmpty()<<endl;
	s2.push('a');
	s2.push('l');
	s2.push('o');
	s2.push('i');
	s2.push('p');
	s2.push('e');
	s2.push('r');
	cout<<"After adding elements: "<<endl;
	cout<<"\t- Current size is: "<<s2.getSize()<<endl;
	s2.pop();
	s2.pop();
	cout<<"\t- Is it full? "<<s2.isFull()<<endl;
	cout<<"\t- Current size is: "<<s2.getSize()<<endl;
	cout<<"\t- Last element inserted is: "<<s2.getTopData()<<endl;
	while(!s2.isEmpty())
	{
		char i = s2.getTopData();
		cout<<i<<" ";
		s2.pop();
	}
	cout<<endl;
}
