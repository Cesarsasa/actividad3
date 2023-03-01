#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
char lapiz,lapicero;
int codigo=0;	
int n1=0,n2=0,n3=0,opc;	
float promedio =0;
int num=0;	
char cuaderno;
string mensaje="";

               cout<<" "<<endl;
                cout<<"*****ELIGA OPCION******"<<endl;
                cout<<"1.POSITIVO, NEUTRO, NEGATIVO"<<endl;
                cout<<"2.PAR O IMPAR"<<endl;
                cout<<"3.Lapiz - lapicero."<<endl;
                cout<<"4.Lapiz-lapicero-cuaderno"<<endl;
                cout<<"5.SWITHC.PAISES"<<endl;
                cout<<"6.PROMEDIO"<<endl;
                cout<<"opc: "<<endl;
                cin>>opc;
                switch (opc)
                {
                case 1:
                    cout<<"Ingrese Numero:";
                    cin>>num;

                        if (num>0){
                            cout<<"Positivo"<<endl;
                        }else{
                            if(num==0){
                                cout<<"Neutro"<<endl;
                            }else{
                                cout<<"Negativo"<<endl;
                            }
                        }
                        
                    system("pause");
                    break;

                 case 2:

                    cout<<"Ingrese Numero:";
                    cin>>num;

                        if ((num%2)==0){
                            cout<<"Par"<<endl;
                        }else{
                                cout<<"Impar"<<endl;
                            }
                        
                        
                    system("pause");
                 break;
                 case 3: 
                 cout<<"Trae Lapiz:";
                cin>>lapiz;
                cout<<"Trae lapicero:";
                cin>>lapicero;
                //if (lapiz=='s' && lapicero=='s' )
                    if (lapiz=='s' || lapicero=='s' ){
                            cout<<lapiz<<endl;
                        cout<<"Entra"<<endl;
                    }else{
                            cout<<"No Entra"<<endl;
                        }
                    
                    
                system("pause");
                 break;
                 case 4:
                 cout<<"Trae Lapiz:";
                cin>>lapiz;
                cout<<"Trae lapicero:";
                cin>>lapicero;
                cout<<"Cuaderno:";
                cin>>cuaderno;

                //if (lapiz=='s' && lapicero=='s' )
                    if ((lapiz=='s' || lapicero=='s') && cuaderno=='s' ){
                            
                        cout<<"Entra"<<endl;
                    }else{
                            cout<<"No Entra"<<endl;
                        }
                    
                    
                system("pause");
                 break;
                 case 5: 
                 cout<<"Ingrese El codigo de Area:";
                cin>>codigo;
                switch(codigo)
                {
                    case 501: cout << "Belice"<<endl;
                    break;
                    case 502: cout << "Guatemala"<<endl;
                    break;
                    case 503: cout << "El Salvador"<<endl;
                    break;
                    case 504: cout << "Honduras"<<endl;
                    break;
                    case 505: cout << "Nicaragua"<<endl;
                    break;
                    case 506: cout << "Costa Rica"<<endl;
                    break;
                    case 507: cout << "Panama"<<endl;
                    break;
                    default: cout << "Este codigo no es de centro america"<<endl;
                }
                    
                system("pause");
                 break;
                 case 6:
                 cout<<"Ingrese Nota1:";
                    cin>>n1;
                    cout<<"Ingrese Nota2:";
                    cin>>n2;
                    cout<<"Ingrese Nota3:";
                    cin>>n3;
                    promedio = (n1+n2+n3)/3;
                    mensaje = promedio >60 ?"Aprabado" : "Reprobado";
                    cout<<"El Promedio es: "<<promedio<<" Por lo tanto esta "<<mensaje<<endl;
                    if (promedio>=0 && promedio<61 )
                    {
                        cout<<"Mala nota  "<<endl;
                        
                    }
                    if (promedio>=61 && promedio<81 )
                    {
                        cout<<"Buena nota  "<<endl;
                        
                    }
                    if (promedio>=81 )
                    {
                        cout<<"Mala nota  "<<endl;
                        
                    }


                    system("pause");

                 break;

                default:
                    break;
                }
     
    return 0;
}
