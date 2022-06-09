
/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE

listas dobles
Autor(es): George Chicango y Marlyn Almeida
Fecha de creación: 19/05/2022
Fecha de modificación:19/05/2022
Grupo #1
Github del grupo:https://github.com/marlyn-almeida/Grupo-1-NRC-4683.git
Versión:1
Estructura de Datos 4683


*/

#include "Lista.h"

Lista::Lista()
{
    pri = NULL;
    ult = NULL;
}

Lista::Lista(Nodo* prim, Nodo* ulti)
{
    pri = prim;
    ult = ulti;
}

Nodo* Lista::getPri()
{
    return pri;
}

Nodo* Lista::getUlt()
{
    return ult;
}

void Lista::setPri(Nodo* prim)
{
    pri = prim;
}

void Lista::setUlt(Nodo* ulti)
{
    ult = ulti;
}

bool Lista::verificar(Lista* L)
{
    if(L->getPri() == NULL) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        cout<<"\n\t    La lista esta vacia\n"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        return false;
    }
    else {
        return true;
    }
}

Nodo* Lista::crearNodo(int dato)
{
    Nodo *e = new Nodo(); //Reserva memoria para 1 nodo
    if (e != NULL){
        e->setDato(dato);
        e->setSig(NULL);
        cout << "\n\t   Dato: "<<e->getDato();
    }
    return e;
}

Lista* Lista::agregarFinal(Lista* L, int dato) //Final
{
    Nodo *e = new Nodo(dato, NULL);
    if (e != NULL )
    {
        if (L->getPri() != NULL) {
            L->getUlt()->setSig(e);
            L->setUlt(e);
            cout << "\n\t   Dato ingresado : "<<e->getDato()<<endl;
            return L;
        } else { //Lista esta vacia
            Lista *l = new Lista(NULL, NULL);//se crea una nueva lista
            l->setPri(e);
            l->setUlt(e);
            cout << "\n\t   Dato ingresado : "<<e->getDato()<<endl;
            return l;
        }
    } else {
        return NULL;
    }
}

void Lista::operaciones(Lista* L)
{
    Nodo *e=L->getPri();
    if(e!=NULL)
    {
        int sum=0;
        int longitud=tamanioLista(L);
        int i=0;
        float promedio;
        while(e!=NULL)
        {
           sum=sum+e->getDato();
           e=e->getSig();
           i++;
        }
       printf("Suma de los elementos :%d\n",sum);
       promedio=(float)sum/(float)i;
       printf("El promedio es:%f\n",promedio);
       int * cadena = NULL;
       cadena = new int[i];//Reserva memoria para el arreglo segun el numero de datos
       i=0;
       e=L->getPri();
        while(e!=NULL)
        {
           cadena[i]=e->getDato();
           e=e->getSig();
           i++;
        }
        int n=i;
        int s,m,a;
        m=s;
        //
        for(int i=0;i<n;i++){
         s=0;
           for(int j=0;j<n;j++){
               if(cadena[i]==cadena[j] && i!=j)
                {
                 s=s+1;
                }
           }
        if(s>=m){
        m=s;
        a=i;
        }
    }

    cout<<"la moda es: "<<cadena[a]<<" y tiene "<<m+1<<" repeticiones"<<endl;
   }   //


    else{
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
        cout<<"\n\t    La lista esta vacia\n"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

    }
}

Lista* Lista::agregarInicio(Lista* L, int dato)
{
    Nodo *e = new Nodo(dato, NULL);
    if (e != NULL )
    {
        if (L->getPri() != NULL) {
            e->setSig(L->getPri());
            L->setPri(e);
            cout << "\n\t   Dato ingresado : "<<e->getDato()<<endl;
            return L;
        } else {
            Lista *l = new Lista(NULL, NULL);//Lista este vacia
            l->setPri(e);
            l->setUlt(e);
            cout << "\n\t   Dato ingresado : "<<e->getDato()<<endl;
            return l;
        }
    } else {
        return NULL;
    }
}

void Lista::imprimir(Lista *L)
{
    int i = 1;
    if (verificar(L)){
        Nodo* e = L->getPri();
        do{
            cout<<"\n\t\tNodo "<<i<<": "<<e->getDato()<<endl;
            e = e->getSig(); //Instruccion para moverme al siguiente
            i++;
        } while (e != NULL);
    }
}

Lista* Lista::eliminarNodo(Lista *L)
{
	typedef int (WINAPI *Validar_int_P)(char*);
	typedef int (WINAPI *Validar_Binario)(char*);
	Validar_int_P validar_int_P;
	Validar_Binario validar_Binario;
	HINSTANCE libDLL=NULL;// inicializamos la libreria con Null
	libDLL = LoadLibrary ("Proyecto 1.dll"); //Cargamos la libreria
    validar_int_P=(Validar_int_P)GetProcAddress(libDLL,"ingresarDatos_Int_P");
    validar_Binario = (Validar_Binario)GetProcAddress(libDLL,"ingresarDatos_Binario");
    
    bool ver=false;
    int opc=0;
    if (verificar(L))
    {
        Nodo *e = L->getPri();
        //cout<<"\n\tSe eliminara el dato -> "<<e->getDato();
        //opc=validar_Binario(". Desea continuar? \n\t1-SI / 0-NO: ");
        cout<<"\n\tSe eliminara el dato -> "<<e->getDato();
        opc=validar_int_P(". Desea continuar? \n\t1-SI / 0-NO: ");
        if(opc==0||opc==1){
        	ver=true;
		}
		while(!ver){
			opc=validar_int_P(". Desea continuar? \n\t1-SI / 0-NO: ");
			if(opc==0||opc==1){
        	ver=true;
		}	
		}
        
      
        if (opc == 1)
        {
            L->setPri(e->getSig());
            delete e;
            cout<<"\n\tSe elimino el nodo"<<endl;
            if (L->getPri() == NULL)
            {
                delete L;
                //L = NULL;
                L->setUlt(NULL);
                cout<<"\n\tSe elimino el ultimo elemento de la lista."<<endl;
                return L;
            }
        }
    }
    return L;
}

Nodo* Lista::buscarDesorden(Lista *L, int x)
{
    Nodo *e = NULL;
    if (L->getPri() != NULL)
    {
        e = L->getPri();
        while (e != NULL && e->getDato() != x)
        {
            e = e->getSig();
        }
    }
    return e;
}

void Lista::buscar(Lista *L, int x)
{
    Nodo *e = new Nodo();
    e = L->buscarDesorden(L,x);
    if (e != NULL)
    {
        cout<<"\n\t> Dato encontrado\n"<<endl;
    } else
    {
        cout<<"\n\t> Dato no encontrado\n"<<endl;
    }
    cout<<endl;
}

int Lista::tamanioLista(Lista* L)
{
    int i = 1;
    if (L->getPri() != NULL){
        Nodo* e = L->getPri();
        do{
            e = e->getSig();
            i++;
        } while (e != NULL);
        return i;
    } else {
        return 0;
    }
}

Lista* Lista::agregarAntes(Lista* L, int dato, int x)
{
    Nodo *e = new Nodo(dato, NULL);
    if (x <= L->tamanioLista(L)-2 || x == 0)
    {
        if (L->tamanioLista(L) != 0 && x > 0) {
            if (x == L->tamanioLista(L)-1)
            {
                L = L->agregarFinal(L, dato);
                return L;
            } else {
                int i = 1;
                Nodo* aux = L->getPri();
                while (i != x){
                    aux = aux->getSig();
                    i++;
                }
                e->setSig(aux->getSig());
                aux->setSig(e);
                cout << "\n\t   Dato ingresado: "<<e->getDato()<<endl;
            }
        } else {
            cout<<"\n\t   Se creara en el primer nodo"<<endl;
            L = L->agregarInicio(L, dato);
            return L;
        }
    } else {
        cout<<"\n\t   El nodo no existe"<<endl;
    }
    return L;
}

Lista* Lista::agregarDespues(Lista* L, int dato, int x)
{
    Nodo *e = new Nodo(dato, NULL);
    if (x <= L->tamanioLista(L)-1 || x == 0)
    {
        if (L->tamanioLista(L) != 0 && x > 0) {
            if (x == L->tamanioLista(L)-1)
            {
                L = L->agregarFinal(L, dato);
                return L;
            } else {
                int i = 1;
                Nodo* aux = L->getPri();
                while (i != x){
                    aux = aux->getSig();
                    i++;
                }
                e->setSig(aux->getSig());
                aux->setSig(e);
                cout << "\n\t   Dato ingresado: "<<e->getDato()<<endl;
            }
        } else {
            cout<<"\n\t   Se creara en el primer nodo"<<endl;
            L = L->agregarInicio(L, dato);
            return L;
        }
    } else {
        cout<<"\n\t   El nodo no existe"<<endl;
    }
    return L;
}

Lista* Lista::eliminarUlt(Lista *L)
{
	typedef int (WINAPI *Validar_int_P)(char*);
	typedef int (WINAPI *Validar_Binario)(char*);
	Validar_int_P validar_int_P;
	Validar_Binario validar_Binario;
	HINSTANCE libDLL=NULL;// inicializamos la libreria con Null
	libDLL = LoadLibrary ("Proyecto 1.dll"); //Cargamos la libreria
    validar_int_P=(Validar_int_P)GetProcAddress(libDLL,"ingresarDatos_Int_P");
    validar_Binario = (Validar_Binario)GetProcAddress(libDLL,"ingresarDatos_Binario");
    
    bool ver=false;
    int opc;
    if (verificar(L))
    {
        Nodo *e = L->getUlt();
        cout<<"\n\tSe eliminara el dato -> "<<e->getDato();
        //opc=validar_Binario(". Desea continuar? \n\t1-SI / 0-NO: ");
        //cin>>opc;
        opc=validar_int_P(". Desea continuar? \n\t1-SI / 0-NO: ");
        if(opc==0||opc==1){
        	ver=true;
		}
		while(!ver){
			opc=validar_int_P(". Desea continuar? \n\t1-SI / 0-NO: ");
			if(opc==0||opc==1){
        	ver=true;
		}
	}
		
        if (opc == 1)
        {
            Nodo *aux = NULL;
            e = L->getPri();
            while (e->getSig() != NULL){
                aux = e;
                e = e->getSig();
            }
            if (aux == NULL)
            {
                L->setPri(e->getSig());
            } else
            {
                aux->setSig(NULL);
                L->setUlt(aux);
                delete e;
            }
            if (L->getPri() == NULL)
            {
                delete L;
                L->setUlt(NULL);
                cout<<"\n\tSe elimino el ultimo elemento en la lista."<<endl;
                return L;
            }
            cout<<"\n\tSe elimino el nodo"<<endl;
        }
    }
    return L;
}

Lista* Lista::eliminarNodoX(Lista *L, int x)
{
	typedef int (WINAPI *Validar_int_P)(char*);
	typedef int (WINAPI *Validar_Binario)(char*);
	Validar_int_P validar_int_P;
	Validar_Binario validar_Binario;
	HINSTANCE libDLL=NULL;// inicializamos la libreria con Null
	libDLL = LoadLibrary ("Proyecto 1.dll"); //Cargamos la libreria
    validar_int_P=(Validar_int_P)GetProcAddress(libDLL,"ingresarDatos_Int_P");
    validar_Binario = (Validar_Binario)GetProcAddress(libDLL,"ingresarDatos_Binario");
    bool ver=true;
    int opc;
    Nodo *e = L->getPri();
    Nodo *aux = NULL;
    if (verificar(L)){
        if(x == 1)
        {
            L = L->eliminarNodo(L);
        } else if (x == L->tamanioLista(L)-1)
        {
            L = L->eliminarUlt(L);
        } else if (x >= L->tamanioLista(L) || x < 1)
        {
            cout<<"\n\tEl nodo no existe"<<endl;
        } else if(e!=NULL)
        {
            int i=1;
            while(i!=x)
            {
                aux=e;
                e=e->getSig();
                i++;
            }
            cout<<"\n\tSe eliminara el dato -> "<<e->getDato();
        //	opc=validar_Binario(". Desea continuar? \n\t1-SI / 0-NO: ");
        opc=validar_int_P(". Desea continuar? \n\t1-SI / 0-NO: ");
        if(opc==0||opc==1){
        	ver=true;
		}
		while(!ver){
			opc=validar_int_P(". Desea continuar? \n\t1-SI / 0-NO: ");
			if(opc==0||opc==1){
        	ver=true;
		}
	}
            
            if (opc == 1)
            {
                if(e!=NULL)
                {
                    aux->setSig(e->getSig());
                }
                delete e;
                cout<<"\n\tSe elimino el nodo"<<endl;
            }
        }
    }
    return L;
}


Lista* Lista::eliminarDespues(Lista *L)
{
	typedef int (WINAPI *Validar_int_P)(char*);
	typedef int (WINAPI *Validar_Binario)(char*);
	Validar_int_P validar_int_P;
	Validar_Binario validar_Binario;
	HINSTANCE libDLL=NULL;// inicializamos la libreria con Null
	libDLL = LoadLibrary ("Proyecto 1.dll"); //Cargamos la libreria
    validar_int_P=(Validar_int_P)GetProcAddress(libDLL,"ingresarDatos_Int_P");
    validar_Binario = (Validar_Binario)GetProcAddress(libDLL,"ingresarDatos_Binario");
    
    Nodo *e=L->getPri();
    Nodo *aux;
    int i=1,nod, opc = 0;
    int longitud=tamanioLista(L);
    if(verificar(L))
    {
        L->imprimir(L);
        //cout<<"\n\tIngrese el nodo: ";
        //cin>>nod;
        nod=validar_int_P("\n\tIngrese el nodo: ");

        if(nod==longitud-1 || nod < 1)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            cout<<"\n\tNo existe nodo despues del seleccionado"<<endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        }
        else{
            if (nod == longitud-2)
            {
                L = L->eliminarUlt(L);
            } else {
                while(i!=nod)
                {
                  aux=e;
                  e=e->getSig();
                  i++;
                }
                aux=e;
                e=e->getSig();
                //cout<<"\n\tSe eliminara el dato -> "<<e->getDato()<<". Desea continuar? \n\t1-SI / 0-NO: ";
                //cin>>opc;
                cout<<"\n\tSe eliminara el dato -> "<<e->getDato();
      		    opc=validar_Binario(". Desea continuar? \n\t1-SI / 0-NO: ");
                if (opc == 1)
                {
                    aux->setSig(e->getSig());
                    delete e;
                    cout<<"\n\tSe elimino el nodo"<<endl;
                }
            }
        }
    }
    return L;
}

Lista* Lista::eliminarAntes(Lista *L)
{
	typedef int (WINAPI *Validar_int_P)(char*);
	typedef int (WINAPI *Validar_Binario)(char*);
	Validar_int_P validar_int_P;
	Validar_Binario validar_Binario;
	HINSTANCE libDLL=NULL;// inicializamos la libreria con Null
	libDLL = LoadLibrary ("Proyecto 1.dll"); //Cargamos la libreria
    validar_int_P=(Validar_int_P)GetProcAddress(libDLL,"ingresarDatos_Int_P");
    validar_Binario = (Validar_Binario)GetProcAddress(libDLL,"ingresarDatos_Binario");
    
    Nodo *e=L->getPri();
    Nodo *aux;
    int i=1,nod, opc = 0;
    int longitud=tamanioLista(L);
    if(verificar(L))
    {
        L->imprimir(L);
        //cout<<"\n\tIngrese el nodo: ";
        //cin>>nod;
        nod=validar_int_P("\n\tIngrese el nodo: ");

        if(nod>longitud-1 || nod <= 1)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
            cout<<"\n\tNo existe nodo antes del seleccionado o excedio el tamanio de la lista"<<endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        }
        else{
            if (nod == 2)
            {
                L = L->eliminarNodo(L);
            } else {
                while(i!=nod-2)
                {
                  aux=e;
                  e=e->getSig();
                  i++;
                }
                aux=e;
                e=e->getSig();
                cout<<"\n\tSe eliminara el dato -> "<<e->getDato();
                // pendiente
                opc=validar_Binario(". Desea continuar? \n\t1-SI / 0-NO: ");
                //cin>>opc;
                if (opc == 1)
                {
                    aux->setSig(e->getSig());
                    delete e;
                    cout<<"\n\tSe elimino el nodo"<<endl;
                }
            }
        }
    }
    return L;
}

