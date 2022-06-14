#include <iostream>

using namespace std;

int main()
{
    int pagofactura, cambionum, contratnuevoserv, descuento, montofinal;
    string correo, verificacioncorreo;
    int opt;
    do{
        cout << "Gracias por llamar al servicio al cliente de Digicel" << endl;
        cout << " para pago de factura presione 1 " << endl;
        cout << " para contratar nuevo servicio presione 2 " << endl;
        cout << " para cambio de numero presione 3 " << endl;
        cout << " para salir presione 4 " << endl;
        cin >> opt;

        switch (opt)
        {
        case 1:
            cout << " Estas llamando al area de pago de facturas " << endl;
            do
            {
                cout << " porfavor ingrese el valor de su factura " << endl;
                cin >> pagofactura;
            }

            while (pagofactura <= 0);

            if (pagofactura >= 30)
            {
                cout << " Su valor a pagar es mayor a 30 dolares, por lo que se le hara el 10% de descuento, " << endl;
                descuento = 0.10 * pagofactura;
                montofinal = pagofactura - descuento;
                cout << " el valor a pagar es de $ " << montofinal << endl;
            }
            else
            {
                cout << " Su valor a pagar es menor de 30 dolares, su total a pagar es: " << pagofactura;
            }

            break;

        case 2:

            cout << " Estas llamando al area de contratacion de servicios. " << endl;
            cout << " servicios disponibles: plan de datos, llamadas, roaming. " << endl;
            cout << " Para adquirir plan de datos presione 1 " << endl;
            cout << " Para adquirir llamadas presione 2 " << endl;
            cout << " Para adquirir roaming presione 3 " << endl;

            do
            {
                cout << " Presione un numero para seleccionar el plan que desea " << endl;
                cin >> contratnuevoserv;
            } while (contratnuevoserv <= 0 || contratnuevoserv > 3);
            cout << " El paquete " << contratnuevoserv << " fue adquirido " << endl;
            break;



        case 3:
            cout << " Estas llamando al area de Cambio de numero " << endl;
            cout << " Ingrese su correo para mandarle su cita " << endl;
            cin >> correo;
            cout << " Ingrese de nuevo su correo para verificarlo " << endl;
            cin >> verificacioncorreo;
            cout << " El correo se envio con exito " << endl;
            break;
        
        case 4:
            cout << " Gracias por su confianza " << endl;
             break;

            default:
            cout << " La opcion no es valida, porfavor intentelo de nuevo ";
            break;

        }
    }while(opt != 4);
    return 0;
}
