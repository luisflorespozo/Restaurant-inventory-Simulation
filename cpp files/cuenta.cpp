// Class automatically generated by Dev-C++ New Class wizard

#include "cuenta.h" // class's header file

// class constructor
Cuenta::Cuenta(Pedido *actual)
{
p=actual;
	// insert your code here
}

// class destructor
Cuenta::~Cuenta()
{
	// insert your code here
}
void Cuenta::imprimir()
{
p->mostrar();
cout<<"Nombre del cliente:       "<<nit<<endl;
cout<<"Nit del cliente:         "<<nombre<<endl;
}
long Cuenta::getTotales()
{
return p->totalCancelar();
}
