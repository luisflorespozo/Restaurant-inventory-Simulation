// Class automatically generated by Dev-C++ New Class wizard

#include "orden.h" // class's header file

// class constructor

Orden::Orden()
{

}

// class destructor
Orden::~Orden()
{
	// insert your code here
}
bool Orden::verificar(string nom)
{
char car;
    FILE *arch;
    arch=fopen("doc.txt","rt");
         for(int i=0;i<20;i++)
   {
           for(int c=0;c<20;c++)
          {
            
                    mat[c][i]=' ';
                    
            }
    }   
    for(int i=0;i<20;i++)
    {
            for(int c=0;c<20;c++)
            {fscanf(arch,"%c", &car);
            
                    mat[c][i]=car;
            }
    }
    fclose(arch);
char vec[4];
int cont=0;
       for(int i=0;i<20;i++)
   {
           for(int c=0;c<4;c++)
          {
            
                    vec[c]=mat[c][i];
                    
         
            }

           char* nomb = strdup(nom.c_str());
           if(vec[0]==(*(nomb+0))&&vec[1]==(*(nomb+1))&&vec[2]==(*(nomb+2))&&vec[3]==(*(nomb+3)))
           {cont++;}
                   
                   
                   
    }              
if(cont>=1)
return 1;
else
return 0;
}

bool Orden::verificar2(string cant)
{
char car;
    FILE *arch;
    arch=fopen("doc.txt","rt");
         for(int i=0;i<20;i++)
   {
           for(int c=0;c<20;c++)
          {
            
                    mat[c][i]='-';
                    
            }
    }   
    for(int i=0;i<20;i++)
    {
            for(int c=0;c<20;c++)
            {fscanf(arch,"%c", &car);
            
                    mat[c][i]=car;
            }
    }
    fclose(arch);
char vec[2];
           for(int i=0;i<20;i++)
           {
               for(int c=13;c<16;c++)
               {
                
                        vec[c-13]=mat[c][i];
                        
             
                }

            char* canti = strdup(cant.c_str());
                    if(vec[0]>(*(canti+0))&&vec[1]>(*(canti+1)))
                   {return 1;
                   vec[0]=vec[0]-(*(canti+0));
                   vec[1]=vec[1]-(*(canti+1));
                   mat[13][i]=vec[0];
                   mat[14][i]=vec[1];
                   }
                   else
                   return 0;

    }              

}
void Orden::leer()
{string orden;

cout<<"Ingrese el pedido:     "<<endl;
cout<<"Orden:      ";cin>>orden;cout<<endl;
cout<<"Cantidad:    ";cin>>cant;cout<<endl;
    if(verificar(orden))
    {    if(verificar2(cant))
          {      
                FILE *arch;
                
                char* nomb = strdup(orden.c_str());
                char* desc = strdup(cant.c_str());
                arch=fopen("pedidos.txt","a+");
                
                     fprintf(arch, "%s %s\n", nomb,desc);
                     
                fclose(arch);
                
            cout<<"Pedido guardado..."<<endl;
          }
          else
          cout<<"No existe esa cantidad..."<<endl;
     }
     else
     cout<<"No existe esa orden..."<<endl;
}
int Orden::conversor(int a)
{
    if(a==48)
    return 0;
    else
    if(a==49)
    return 1;
    else
    if(a==50)
    return 2;
    else
    if(a==51)
    return 3;
    else
    if(a==52)
    return 4;
    else
    if(a==53)
    return 5;
    else
    if(a==54)
    return 6;
    else
    if(a==55)
    return 7;
    else
    if(a==56)
    return 8;
    else
    if(a==57)
    return 9;
}
long Orden::getTotal()
{
char vec[2];
           for(int i=0;i<20;i++)
           {
               for(int c=14;c<16;c++)
               {
                
                        vec[c-14]=mat[c][i];
                        
             
                }
           }

             char* cantu = strdup(cant.c_str());
             int cant1=conversor((*cantu+0));
 
            return(((conversor(vec[0])*10)+conversor(vec[1]))*cant1);


}

void Orden::mostrar()
{

for(int i=0;i<tam;i++)
{
  (*(pedidos+i))->mostrar();
}  
cout<<"Total precio:         "<<total<<endl;  
}
