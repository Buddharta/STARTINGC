/* NOTAS y EJERCICIOS EN C*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <string.h>

/*LosComentarios se hacen con ""//""  o  /*"comentario"*/ 
/* El primero se utiliza para comentarios en una sola línea y el segundo se utiliza para párrafos de comentarios.*/

/*BASES DE C: El lenguaje de programación C es un lenguaje de tipo imperativo, es decir que escribir programas se hace 
* indicando a la computadora las acciones que se desean realizar, así ésta ejecutará cada acción línea por línea. Para  
* realizar esto, el programa escrito (normalmente con terminación ".c") deberá ser compilado, esto significa que nuestro
* archivo será tomado como input por un programa llamado el compilador y éste nos retornará un archivo binario que contiene
* las instrucciones que le dimos a la máquina pero en su lenguaje nativo. Esto quiere  decir que el archivo compilado sólo
* funciona en una máquina y para portarlo a otra máquina, tiene que ser compilado en ésta, un buen programa de C tiene 
* que ser portable y poder compilarse en cualquier máquina. 
* 
* Es por esto que decimos que C es un lenguaje imperativo compilado de nivel medio. Primero un poco sobre los tipos de datos,
* funciones básicas contenidas en los headers y los tipos de datos en C, al declarar una variable se declara su tipo de dato,
* por ejemplo "int" y se le puede dar  o no un valor, pero las variables simepre deben ser declaradas. Para aprender siempre 
* es conveniente comenzar con un ejemplo:
*/

//Usaremos  variables y funciones basicas definida en stdlib.h y stdio.h (las funciones por lo general son de stdio.h) 
//para poner en la pantalla las variables y sus tipos.

/*
int main()
{
        //cada líne de código en c tiene que terminar con "";""
    unsigned int x = 873;
    int y = -156;
    printf("Hello World!\nHere are the types of variables in C:\n");// printf es una función que imprime el texto dentro de "" en pantalla 
    printf("Unsinged intergers as well as signed (negative) decimals: x=%u y=%d\n",x,y);
        //decimal, usan hasta 4 bytes (número entero), con la declaración
        //%d se le dice al compilador que el tipo de dato es un entero, además
        //es posible declarar hasta cuantas decimas se aceptan, por ejemplo
        //declarando %6d significa que se aceptan hasta 6 decimales
    
    long int n = 123234234567;
    int hex = 0xFF526;
    printf("There are different integer types like long integers: %ld and hexadecimal %x\n",n,hex);
        //long int significa decimal grande, los cuales usan hasta 8 bytes de memoria
        //los hexadecimales son 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E , para declarar que un número es hexadecimal, se escribe 0x antes del número.
    
    float z = 433.345;
    double w = 4341234.213456;
    printf("Besides integer types there are floating point numbers such as floats: %3.3f, doubles: %7.7lf (all of these can be unsigned)\n",z,w);      
        //flotante usan hasta 4 bytes, se puede especificar cuantos puntos decimales guardar
        //por ejemplo %.2f para los puntos decimales y similar a %d, es posible especificar de la forma 
        //flotante largo también, los cuales se declaran como double que incrementa los bytes en memoria que se pueden utilizar
        // para usarlos en printf se puede usar %g o %lf, también existe %llf long long o %Lf y es lo máximo que se puede extender. 
        
    double A[5] = {
            [0] = M_E,
            [1] = 19.6,
            [2] = 3.E+25,
            [3] = .000045,
            [4] = 23.00005
        };
    printf("Besides numerical types there are arrays of other types, this is an array of doubles: A[5] = {%g,%g,%g,%g,%g}\n",A[0],A[1],A[2],A[3],A[4]);
        //Como dice le contenido de la función, además de tipos numéricos, existen los arrays o arreglos, los cuales son listas enumeradas de variables (veremos más después)  
        //Además de long floats tenemos llamado double, usan 8 bytes de memoria o 64 bits.
    
    char c = 'a';
    printf("Characters: \"%c\n\"",c);
        //para declarar un solo un caracter se tiene que usar '' con este tipo de dato y tiene su valor numérico asociado
        //enla tabla ASCII, esta tabla tiene una valor máximo de 256, asi que si se manipula numericamente su valor, la aritmética se comporta
        //numericamente como en el caso de los números, se pude imprimir el valor numérico de los caracteres 

    char* str ="C is awesome";
    printf("Strings like: %s\n",str);  
        //strings, son varios caraceres concatenados, en la practica son similares arrays de caracteres, pero veremos mas detalles de ambos luego. . 
        //Se puede espacificar cuantos carecteres imprimir de foma similar a con los flotantes 
        //poniendo por ejemplo %10c para que imprima 10 caracteres en total, si lo que se escribe tiene  menos de esta cantidad,
        //lo rellena con espacios, se puede imprimir el valor numérico de una string y corresponde a la cantidad de caracteres en total (no su valor ascii total) 

    puts("There is a special type called void which is when we don't want to spacify a data type");
        //Como dice el argumento de la función puts, hay un tipo especial llamda void que no especifica el tipo de dato de una vraible dada.
    
    printf("Besides these types there are funtions like \"puts\" or \"sizeof\", expample: sizeof(int) = %lu\n",sizeof(int));  
        //además de estos datos hay funciones como puts() o la funcion sizeof que te dice el tamaño de los datos en bytes que se
        //pueden guardar en una variable de cierto tipo. 
    
    size_t i = 0; //este es un alias de tipo escalar sin signo que se puede imprimir con %zu en printf
    return i;                            
        //return se usa para indicar cuando una función termina y se indica un valor
        //en general 0 para indicar que el código fue exitoso en ejecutarse 
}
*/

/*DECLARANDO FUNCIONES:
* se declara con el tipo de datos y los bloques de código se ponen en paréntesis {}
* acepata tipos de datos comunes como:

* int usa 4 bytes de memoria
* float 4 bytes
* char
* double (long float %lf) usan 8 bytes y existen (long double=%lf) que usan 12 bytes de memoria

* los tipos de datos se usan para definir las variables de las funcinoes y los tipos de datos que manipulan las funciones

* sizeof(__)  te dice el tamaño de los datos que se pueden guardar en una variable de cierto tipo
* usando <limits.h> como header existen int_min e int_max además de uint_max los cuales son los valores mínimos y máximos que pueden usar cada
* una de estas variables ejemplo:
*/

/*
int main()
{
    int var1=INT_MIN; \\INT_MIN es una constante que indica el varlor mínimo de un entero
    int var2=INT_MAX; \\INT_MAX represaenta el máximo, por lo general las constantes se indican con mayúsculas
    unsigned int uvar=UINT_MAX;
    printf("Integers in C go from: %d untill: %d\n",var1,var2);
    printf("with insigned untill: %u\n",uvar);
    printf("Note that if if we increment the unsigned interger we get: %u and incrementing the signed one gives us: %d\n",uvar++,var2++);
    return 0;
}
*/

/*VARIABLES
* Una variable es declarada siempre con cierto tipo, no necesariamente al momento de ser declarada se le tiene que asignar
* un valor, se le llaman locales cuando se definen dentro de los brakets { } al definir una funcióy se le llaman globales
* cuando se definen al inicio del código. Si no se le asigna un valor a una variable global, automáticamente C le asigna
* el valor 0, en cambio las variables locales toman un valor aleatorio basura. La asignación de valor de una variable local
* es válido sólo durante la función que la utliza y por lo tanto puede ser utilizado el mismo nombre en otra función.

* MODIFICADOR EXTER (SIGNIFICA EXTERNAL):
* si se le pone extern antes de la definición de una variable, por ejemplo:

* extern int var;

* significa que la variable sólo es definida pero no se le asigna ningún valor nuevo, no 0 ni basura, significa que
* esta variable esta definida en algún código externo (puede ser en otro archivo o en el mismo archiVo pero fuera de la función).

* MODIFICADOR REGISTER(MEMORIA DE REGISTRO):
* Cambia la localidad de memoria de una variable varible definida al registro (tipo de memoria má rápida de una compu)
* se recomienda usar en las variables más frecuentes.

* register int var;

* MODIFICADOR: STATIC (MANTIENE UNA VARIABLE DENTRO DE UN ARCHIVO):SIEMPRE SE TIENE QUE DECLARAR CON UN VALOR CONSTANTE SIN IMPORTAR QUÉ
* Mantiene a una variable como estática para que no sea llamada por otro archivo en el codigo, es decir así se decalara que la variable
* es estática dentro del programa. Por lo que si se usa el modificador static para una variable local, al ser llamada la funcón por
* otro código, no será modificado dentro del código que llama a la función y por lo tanto al ser llamda multiples veces, no regresa a su
* valor original definido en el archivo original, sino que mantiene el valor dentro del programa que lo ejecuta.

* Ejemplo de Modificador externy Modificador static (revisar sucesor.c):
* Este programa llama a una variable "nat" definida en orto archivo (sucesor.c) como variable estática y por lo tanto manda error.
*/

/*
//extern int nat; (ver sucesor.c)
//hacemos uso de la variable externa nat que es definida en otro archivo de este proyecto (tiene que ser del proyecto para ser llamada por linker).
int main()
{
    int valor;
    valor=sucesor();//si las variable de la función sucesor se define de forma local pierde retoma su valor original cada que es llamada
    valor=sucesor();
    valor=sucesor();//podemos llamar varias veces a la misma función  sin perder el valor anterior pues la variable declarada es global
    valor=sucesor();//PERO si usamos el modificador static, en sucesor.c podemos llamar a nuestra función sin perder la memoria del valor aunque sea variable global
//    nat=nat+3;
//    valor=nat; //Debido a que utilizamos le modificador static no podemos hacer uso de esta variable en este archivo
    printf("%d",valor);
    return 0;
}
*/


/*IF STATEMENTS
* Son condicionales en C; Si se utilizan {}, todo el código subsecuente queda dento del if statement
* y por lo tanto sólo se ejecuta cuando el if statement es verdadero, si no se utlizan los {}, entonces sólo 
* la linea inmediatamente depués del if queda condicionada.
*/

/*
int main()
{
int age;
printf("Please enter her age\n");
scanf("%d",&age);   //funcion que pide un imput del usuario, el '&' guarda el valor en memoria
if (age>18)
    {
    printf("oi she legal mate\n");
    }
if (age==18) //"=="" es para verificar que el valor es igual, si no estas declarando un valor para la variable
    {
    printf("oi make sure to label ur video barely legal\n");
    }
if (age<18)
    {
    printf("oi u dirty pig Kirby is calling tha police\n");
    }
}
*/

/*NESTED IFS 
* es cuando metes un if contruct dento de otro, es decir hay otro if dentro de los {} de un if statement.
*/

/*
int main()
{
    int n;
    scanf("%d",&n);
    if( n % 2 == 0 )
    {
        printf("n = %d is even\n",n);
        if( (n/2) % 2 == 0 )
        {
            printf("moreover n = %d is a multilpe of four \n",n);
        }
    }  
 return 0;
}
*/

/*ELSE & ELSEIF STATEMENT
* Complemento de los condicionales, else te permite ejecutar un código en caso de que el condicional if sea falso
* elseif te permite ejecutar un código if en caso de que una previa construcción if sea falsa. 
*/

/*
int main()
{
int age;
printf("Please enter your age\n");
scanf("%d",&age);   //funcion que pide un imput del usuario, el '&' guarda el valor en memoria ver más adelante
if ( age > 18 )
{
    printf("oi u legal mate\n");
}
else if( age == 18 )
{
    printf("barely legal!\n");
} 
    else
    {
        printf("oi im calling the police\n");
    }
    if(age<21)
    {
    printf("and ilegal in the states lol\n");//nested if son posibles pero tienen que estar en el lugar correcto para que sean leidos al momento adecuado
    }
}
*/

/* #DEFINE (NO USAR"";"" CON #DEFINE)
* Nos permite definir constantes,macros y hasta funciones en el código para ser llamadas por funciones sin tener que definir su valor cada que se utilicen
* en una funcion.
* Ejemplo:
*/

/*
#define PI 3.1415926535//constanteno es llmada si el texto tiene ""
#define add(x,y) x+y//funciones, cuando la suma es llamada primero como expansión, por lo que x*add(y,z)=x*y+z

//podemos usar #define con varias líneas de código:
#define greater(a,b) if(a>b) 
                        printf("%f is greater than %f\n",a,b);\
                        else
                        printf("%f is lesser or equal to %f\n",a,b);

const float EULR=2.71828;// si se pone const antes de una "variable", se hace constante y no pude ser modificada en el código ya que da error

int main()
{
    printf("Enter radious:\n");
    float radious;
    scanf("%f",&radious);
    printf("e is the number %f\n",EULR);
    printf("your radious plus e is %f\n",add(radious,EULR));
    printf("the area of your cicle is %f\n",radious*PI);
    greater(radious*PI,add(radious,3.5));
        printf("The date is: %s\n",__DATE__);//constantes predefinidas standard macross; fecha
        printf("The time is: %s\n",__TIME__);//tiempo/hora

    return 0;
}
*/

/*FUNCIÓN PREDETERMINADA scanf() (scan formated string):
* La estudiaremos más a fondo después pero es una función que toma un imput del usuario, puede ser un número de cualquier tipo, un caracer o un string se puede identificar un tipo
* específico de dato usando %d,%s etc. Para recibir algún dato, scanf utiliza & frente a la variable indicada.
*
* & = adress of operator, pide la ubicación en memoria de la variable indicada. 
*/

/*
int main()
{
    int a, b;
    printf("Please introduce two numbers A and B\n");
    printf("A\n");
    scanf("%d",&a);
    printf("B\n");
    scanf("%d",&b);
    printf("%d = %d mod %d",a,a%b,b);
    return 0;
}
*/

/*OPERADORES ARITMÉTICOS EN C:
*son binarios, es decir reciben dos datos y tienen que ser usados con el mismo tipo de dato, 
*la lista de operadores es:

+ SUMA
- RESTA
/ COCIENTE
% MÓDULO
* MULTIPLICACIÓN
*/

/*
int main()
{
        int random_number, random_number2; //variable no puede ser ni empezar con numero, evitar acarcteres especiales excepto _
        random_number=27, random_number2=67;
        int multiplicar; //operaciones basicas
        multiplicar= random_number * random_number2;
        int sumar;
        sumar=  random_number + random_number2;
        int restar;
        restar= random_number - random_number2;
        float divizion;
        divizion=random_number2 / random_number;
        int mod;
        mod=random_number2 % random_number;
        printf("That number is> %d\n",random_number);
        printf("That multiplication is> %d\n",multiplicar);
        printf("That sum is: %d\n",sumar);
        printf("That substraction is: %d\n",restar);
        printf("That division is: %lf\n",divizion);
        printf("That residual class is: %d\n",mod);
        return 0;
}
*/

/*OPERADORES SUCESOR Y ANTERIOR (OPERADOR UNITARIOS, SÓLO SE APLICA A UN DATO):
* incrementa el valor de una variable por 1 o lo decrementa por uno
*/

/*
a++=a+1 post increment operator
a--=a-1 post decrement operator
++a     pre increment operator se aplica primero y después se evalua en la variable a 
--a     pre decrement operator iggual que arriba
*/

/* Operadores de relación(compara dos valores)
== IGUAL A
!= NO IGUAL A
<= MENOR O IGUAL
>= MAYOR O IGUAL
< MENOR A
> MAYOR A
*/

/*OPERADORES LÓGICOS Y DE DATOS DE BITS
* Operan con las variables lógicas True y False, las cuales tiene valor numérico entero 1 y 0 respectivamente
*
* && - Operador And (y) Debido a que se necesitan dos true para ser verdadero, si el compilador detecta que
*                       la primera variable que se evalua es falsa, entonces se detiene ahí y no hará nada con el resto.
* !  - Operador Not (no)
* || - Operador Or (o)  Solo necesita que uno de los valores evaluados sea veradero para que sea verdadero, C considera
*                       que cualquier valor numerico distinto de cero es verdadero, como en el caso de && si el
*                       compilador detectaque la primera variable es verdaera no hará nada con el resto
*/

/*
int main()
{
    int a, b;
    int multiplo;
    
    printf("Please introduce two integers A and B\n");
    scanf("%d",&a);
    scanf("%d",&b);
    multiplo = ( b < a ) && ( a % b == 0 );
        
        if (multiplo==1)
        {
        printf("A=%d is a multiple of B=%d\n",a,b);
        }
        else
        {
        printf("A=%d is not a multiple B=%d and its remainder is %d\n",a,b,a%b);
        }

    return 0;
}
*/

/*BITWISE OPERATORS
* Hacen manipulación de los bits de las variables indicadas, es decir cuando se le provee cierta memoria de una
* variable (interpretada en bits) estos operadores manipulan la expansión binaria de dicha memoria, de tal forma
* que los correspondientes operadores lógicos aplican en cada entrada.

* Ej.- 4=0100, 7=0111, entonces 4&7= 0&&0,1&&1,0&&1,0&&1=0100=4 como se muestra abajo 

* NOT 7=0111, entonces ~7=1000=8
* LEFTSHIFT 7<<1,  7=0000 0111, entonces 7<<1=0000 1110=14
* RIGHTSHIFT 7>>1, 7=0000 0111, entonces 7>>1=0000 0011=3
* XOR 4=0100, 7=0111, entonces 4^7=0^0,1^1,0^1,0^1=0011 

& - Operador AND (Binario)
| - Operador OR (Binario)
~ - OPERADOR NOT (Unitario)
<< -LEFTSHIFT OPERATOR (Binario) es equivalente a multiplicar por una potencia de 2
>> -RIGHTSHIFT OPERATOR (Binario) es equivalente a dividir por una potencia de dos y deshacerte del último 1 (si existe)
^ - Operador XOR (Exclusive OR) (Binario)
*/

/*
int main()
{
    int a, b;
    printf("Please introduce two integers A and B\n");
    scanf("%d",&a);
    scanf("%d",&b);
    
    printf("A&B=%d\n",a&b);
    printf("A|B=%d\n",a|b);
    printf("~B=%d\n",~b);
    printf("A>>1=1/2*A=%d\n",a>>1);
    printf("B<<A=2^A*B=%d\n",b<<a);
    printf("A^B=%d\n",a^b);
    //Reflex A, B 
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Reflecting A=%d and B=%d",a,b);
    return 0;
}
*/

/*ASIGMENT OPERATORS
* Asignan valores a variables, se pueden escribbir distintos operadores de asignación los 
* cuales realizan alguna operadión antes de asignar un valor, estos son:

+= Suma primero y luego asigna valor
-= Resta primero y luego asigna valor
*= Multiplica primero y luego asigna valor
/= Divide primero y luego asigna valor
%= Primero reduce módulo algo y luego asigna valor
<<= Primero realiza LEFTSHIFT y luego asigna valor
>>= Primero realiza RIGHTSHIFT y luego asigna valor
&= Primero realiza BITWISE AND y luego asigna valor
|= Primero realiza BITWISE OR y luego asigna valor
^= Primero realiza BITWISE XOR y luego asigna valor

* Ejemplo: a+=3 es lo mismo que a=a+3
*/ 

/*CONDITIONARY OPERATOR
* es similar a if/else statements pero la diferencia es que se expresa en términos de una variable como un operador 
* ternario, es decir opera con tres expresiones, una que evalua y dos posibles resultados, esto se hace de forma booleana, 
*es decir que la primera expresión  es de tipo verdadero/falso.
*/

/*
int main()
{
    int numb_a;
    int numb_b;
    int numb_c;
    scanf("%d",&numb_a);
    scanf("%d",&numb_b);
    numb_c=(numb_a % numb_b == 0) ? numb_a + numb_b : numb_a * numb_b; \\la primera opcion es cuando sí y la otra cuando no
    printf("the answer is = %d",numb_c);
}
*/

/*OPERADOR COMMA
* Separa variables, por ejemplo 
* int a, b, c;

* Sin embargo como operador regresa como dato el valor que se encuentre a la más a la 
* derecha de un vesctor, es decir;

* int p=(2,4,45,2,5,1,54); entonces a p se le asigna el valor 54.

* Sin embargo si el vector tiene expresiones dentro do sus entredas, estas son evaluadas.
*Este operador es el de menor predenecia en C, es decir se evalúa al final.
*/

/*SWITCH STATEMENTS
* es equivalente a usar if, elseif y else para varios casos, en lugar de escribir varios casos deistintos de if, elseif
* etc, se utiliza switch, éste condicional evaluara un número dicreto de distintos casos para así ejecutar cierto código,
* cada caso se expresa por medio del comando case y un valor entero (que puede ser descrito por alguna operación sin variables pero pueden ser macros)
* y el código a ejecutar en dicho caso termina con el comando break.
*/

/*
int main()
{
    int calif;
    scanf("%d",&calif);
switch (calif)  \\switch acepta valores enteros solamente
{
case 10:    \\los casos sólo pueden ser enteros 
case 9:     \\varios casos son acepatdos antes de el break
    printf("Excelent.\n");
    break;
case 8:
case 7:
    printf("Good.\n");
    break;
case 6:
    printf("Panzaste.\n");
    break;
default:    \\se evalúa en cado de que los otros casos no se cumplan
    printf("Failed\n");
    break;
}
}
*/

/*WHILE LOOPS Y DO WHILE LOOPS: Es una forma de repetir un clóque de código en C, los loops consisten de una condición que no se evalua hasta que se cumpla cierto criterio
*/

/*
int main()
{
int i=2;
int j=1;
int n;
int m;
    do  //do while loops hace un código "do" while se cumple un criterio
    {   
    n=i*j;
    printf("n = %d\n",n);
    j++;    //es lo mismo que j=j+1
    if (100 <= n)
        {
            printf("******************\n");
            i++;
            j=1;
        }
    }
    while (i<=100);

    scanf("%d",&m);
    while (m <= 100)  // mientras que solo while loops ejecutan el código sólo cuando se cumple el criterio
    {
        (m % 2==0)? printf("m=%d is even \n",m) : printf("m=%d is odd \n",m);
        m++;
    }
}
*/

/*FOR LOOPS: Otra forma de hacer inducción/recursión (aunque veremos que es posible definir funciones de forma recursiva) en C utilizando la lógica de los loops en lugar de resursión per se, 
* una condición no se evalua hasta que se cumpla cierto criterio
*/

/*
int main()
{
    for (int i = 0; i < 100; i++)   //función recursiva, se le indica:
                                    //el tipo de datos ej "ïnt"
                                    //rango de valores en los que opera ej <100
                                    //como hacer la recursión i++=i+1
    {
        (i % 3==0)? printf("i=%d is multiple of 3.\n",i):
        (i % 3==1)? printf("i=%d is relative prime of 3.\n",i) : printf("i=%d has residual class 2 mod 3.\n",i);
    }
    return 0;
}
*/

/*LOOP CONTROL STATEMENTS:
* Break - Se utliza para terminar un loop o romper un loop dadas ciertas condiciones, principalmente se utiliza 
          para evitar errores en el código y así no obtener datos erroneos o loops infinitos.
*/

/*
int main()
{
    int m;
    for(int n = 0; n < 50;n++)
    {
        m = 2*n+1;
        if(n == 101)
        break;  //en caso de cumplirse la condición el resto del loop no corre
        printf("%d is an odd number less than 100\n",m);
    }
    return 0;
}
*/

/*
Continue -  Permite que el código debajo de la linea continue se evalue mientras corre un loop si y sólo si 
            se cumple cierta condición

            Ejemplo: Criba de Eratóstenes          
*/

/*
int main()
{
    int n;
    for ( n = 0; n < 100; n++)
    {
        if( n % 2 == 0)
        continue;   //en caso de cumplirse la condición el resto del loop continúa, 
                    //es decir se continua con n++ y el resto del código dentro de el loop no se evalúa
        else
        {
            printf("n=%u is an odd number less than 100\n",n);
        }
        
    }
    return 0;
}
*/

/*EJEMPLO: Primos con loops (esta es mi solución y me costó un huevo)
* El algoritmo se puede mejorar considerando que si m no es un número primo, entonces n=ab y por lo tanto
* suponiendo que  a=/=b, entonces uno de los dos números es menor o igual a la raiz ya que si no el producto
* sería mayor a n.
* Para eso intoduciremos dos funciones predeterminadas de C, ceil y sqrt donde:
* ceil - Toma un foat y lo aproxima al entero más cercano que sea mayor que  él Ej.- ceil(7.534) = 8.
* sqrt - Toma un float obtiene su raiz cuadrada, se encuentra en la biblioteca math.h
*/

/*
int main()
{
    int count_div;
    int root_prime;
    int k;
    for ( int p = 2; p < 100; p++ )
    {   
        root_prime = ceil(sqrt(p));
        count_div = 1; //esta optimización además cuenta los divisores de un número menores que la raiz 
        k = 2;
        do
        { 
          if(p % k == 0){
            count_div++;}
        k++;
        }while (k <= root_prime);              
        
        if ((count_div == 1) || ( p == 2))
            printf("P=%u is a prime number less than 100\n",p);
    }
return 0;
}
*/

/*PIRÁMIDE DE ESTRELLAS, MI VERSIÓN*/

/*
int main()
{
    int n;
    printf("How many rows do you want in your pyramid?\n");
    scanf("%u",&n);
    for ( int i = 1; i <= 2*n-1; i++)
    {
        for ( int j = 1; j <= n ; j++)
        {
            if ((i <= n+(j-1)) && (n-(j-1) <= i))
                printf("#");
            else
                printf(" ");
       }
       printf("\n");
    }
   return 0; 
}
*/

/* HALF ADDER
* Usando la lógica de manipulación de bits en C (que es la misma que usa la computadora para sumar), podemos
* escribir un programa que sume dos enteros, como sabemos C puede manipuar sus números a nivel de bits, así es
* posible  esciribir un "half adder" usando los operadores AND "&" y XOR "^"  como se muestra a continuación
*/

/*
int main()
{
    int a, b;
    int sum;
    int carry;

    printf("Please intoduce two numbers A and B\n");
    scanf("%d" "%d",&a,&b);
    while (b != 0)
    {
        sum = a ^ b;    //XOR es como media suma en términos de bits, en la descomposición binaria de los números suma dígito
                        //con dígito, es decir 1+1=0 1+0=1 pero no toma en cuenta el carry
        carry = (a & b) << 1; //Este es el código del carry, es decir en bits cuando se suman dos 1 1 se obtiene 0
                              //sin embargo, esto agrega un 1 a la siguiente potencia de 2 de la descomposición binaria
        a = sum;    //Así guardamos el resultado en las variables para hacer la siguiente iteración y poder hacer el carry en cada dígito
        b = carry;  //por eso es el uso de el right shift operator, para hacer el carry en cada potencia de dos y sumarlo a la media suma.
    }
    printf("add(A,B) = %d",sum);
    return sum;
}
*/

/*CARLITOS TRIANGLE*/
/*
int main()
{
    int n;
    printf("How many rows do you want in your triangle?\n");
    scanf("%u",&n);
    printf("\n");

    for ( int i = 1; i <= n; i++)
    {
        for ( int j = 1; j <= n; j++)
        {
            if (j <= i)
                printf("%d ", (i - j) + 1 );
            else
                printf(" ");
       }
       printf("\n");
    }
   return 0; 
}
*/

/*FUNCIONES EN C: En la sintaxis de una función en C se declara el tipo de datos que una función aceptará como
* input y el tipo de dato que se obendrá como output. En todo el código que hemos hecho se ha usado siempre una 
* "main function". Ejemplo de syntax:

return_type function_name(set_of_inputs);

return type - Es el tipo de output de la función, es decir int, float, char, etc.
set of inputs - Son los datos que recibe tu función y no siempre tiene que ser declarado, por ejemplo en 
                el caso de las funciones int main() que hemos usado hasta ahorita.

Ejemplo:
*/

/*
#define PI 3.1415926535
double area_circ(double radious)
{
    double area; 
    area = 2 * PI * radious * radious;
    return area;
}
int main()
{
    int r = 3;
    double area;
    area = area_circ(r);
    printf("The area of your circle is %.5f\n",area);
}
*/

/*Así el parametro return en este caso es de tipo double, además el tipo de datos en la variable de la funcion es 
* también de tipo double, no es necesario especificar el nombre de los argumentos (variables) de la función al declarar 
* una función pero sí al momento de definirla. Ojo al declarar una función se tiene que utilizar ";", siempre 
* define la función antes de usarla para evitar problemas y conviente también declararla aunque no sea necesario.
* Cuando una función se utiliza en parámetros defininidos en un programa, en lugar de evaluar valores concretos 
* y permanecer en esos valores de forma estática, lo que hace C es utilizar la localidad de la memoria asignada a dicho parámetro,
* así si el valor en la memoria cambia, la función tomara en cuenta el valor alterado. Para hacer esto en el momento
* que se utiliza la función se tiene que usar "&" en las variables para tomar en cuenta su localización en la memoria,
* también en el momento de definir la función, en las variables declaradas tienen que ser de otra naturaleza:
    
    POINTERS: Son el tipo de variables que pueden accesar a las localidades de las memorias donde se se guardan 
              los datos de las variables. Para declarar una variable como pointer se utiliza "*" antes de nombre, 
              es decir

              int *pointer1
    "*" y "&" van juntos como operadores de referncia en memoria.
Ejemplo:          
*/

/*
int func(int *pointer1, int *pointer2)
{
    *pointer1 = 100;
    *pointer2 = 200;
}
int x = 1,y = 2;
int main()
{
    func(&x,&y);
    printf("The function assigns x to %d and y to %d\n",x,y);
}
*/

/*ALGUNOS EJEMPLOS DE FUNCIONES*/

/*
int func(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num >>=1;
    }
    return count;
}
int x = 0, bits;
int main()
{
    printf("This function tels you the amount of bits needed to represent a number\n");
    printf("So please insert a integer number\n");
    scanf("%d",&x);
    bits = func(x);
    printf("you need %d bits to reprensent %d\n",bits,x);
}
*/

/*EJEMPLOS DE FUNCIONES LLAMADAS QUE CONTIENEN CÓDIGO RELEVANTE A LAS FUNCIONES IMPRIMIR:
 * Compilamos con gcc -o "nombre del programa" codigo.c, donde -o significa que quieres un programa output
 * con el nombre indicado en el área de "", gcc es GNU C Compiler.
 */

/*
int main()
{
  int printing_test();            //Declaración de la función printing_test
    puts("Hello Darkness");       //puts es una función que pone el texto dentro de "" en pantalla, siginifica ¨put string¨, no necesita new line
    printf("My old friend\n");    //Otra función que introduce texto o datos en la pantalla, \n significa new line, puts lo hace automático
    printing_test();
    return 0;                     //Cada líne de código en C tiene que terminar con ¨;¨
}
*/

/*SOBRE LOS TIPOS DE DATOS EN C Y LA FUNCIÓN PRINTF:
 *
 * int - entero entero, usan hasta 4 bytes (número entero)
 * float - tipo flotante
 * uint - entero positivo, unsigned integer
 * double - un flotante más grade y con más presición (puntos decimales)
 * char - caracteres
 *
 * Nota: Para un solo un caracter se tiene que usar '' con este tipo de dato y tiene su valor asociado en ASCII, ASCII
 * tiene una valor máximo de 256, asi que si se manipula numericamente su valor, la aritmética se comporta  numericamente como en
 * el caso de los números, se pude imprimir el valor numérico de los caracteres.
 *
 * printf: Función que significa "print frormat" imprime todo tipo de datos no sólo strings a diferencia de puts, para imprimir el tipo de datos
 * desesado se especifíca en los argumentos de la función como en los ejemplos de abajo.
 * ejemplos definidos abajo.
 *
 *OBS: 
 * Para strings se puede especificar cuantos carecteres imprimir en printf de foma similar a con los flotantes poniendo por ejemplo
 * %10c para que imprima 10 caracteres en total, si lo que se escribe tiene  menos de esta cantidad, lo rellena con espacios, se puede imprimir
 * el valor numérico de una string y corresponde a la cantidad de caracteres en total (No su valor ASCII total). 
 */

/*
int printing_test()
{
  int a = -162;
  uint b = 902;
  int c = 234234567;
  float d = 433.345;
  double f = 234234567.21234;
  //int g = 4534EA;
  char h = 'k';
  char inputchar;
  //char j = "C is the best language ever";

  printf("%d\n",a);   // %d es para enteros
  printf("%u\n",b);   // %u es para unsigned integers
  printf("%ld\n",c);  // %ld decimal grande, usan hasta 8 bytes
  printf("%.3f\n",d); // flotante usan hasta 4 bytes, se especifican cuantos puntos decimales imprimir, %.3f para los puntos decimales
  printf("%.5lf\n",f);// flotante largo también llamado double (ver abajo), usan 8 bytes

*/
/*
poner "l" es para long que incrementa los bytes, también se puede usar short y esto disminuye la cantidad de bytes que se usan para
cierta variable, también existe ll delong long o L y es lo máximo que se puede extender
*/
/*

  // printf("%x\n",g); // Hexadecimal 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E
  printf("%c\n",h);     // Caracteres, necesariamente se escriben con '' single quotes 
  // printf("%30s\n",); // Strings, son varios caraceres concatenados, necesariamente se escriben con "" double quotes
  printf("%d\n",sizeof(int));

*/
/*Programa que no continua hasta que se le de un caracter específico, es un template par muchos tipos de programas*/

/*
  puts("Press Enter to continue...");
  do{
    //scanf("%c",&inputchar);
    inputchar = getchar(); //getchar es una función que pide un input del usuario de un caracter.
    printf("Debugging: %c",inputchar);//Esto es para saber lo que está haciendo el programa.
  }while(inputchar != '\n');
  puts("Ok.");

 return 0;
}
*/
// return se usa para indicar cuando una función termina e indica el outpu, en general 0 para indicar que el código fue exitoso en ejecutarse
// sizeof(__) te dice el tamaño de los datos que se pueden guardar en la localidad de memoria de una variable en bits de cierto tipo

/*#DEFINE:
 * Nos permite definir constantes y funciones en el código para ser llamadas por funciones sin tener que definilas  cada que se utilicen en una
 * parte del código, asifuncionan como macros del código.  (NO USAR ";" CON #define).
 *
 * Ejemplo:
*/

/*
  #define pi 3.1415926535
  #define add(x,y) x+y
  #define greater(x,y) if (x>y)\
  printf("%d es mayor a %d",x,y);\
  else\
  printf("%d es menor o igual a %d",x,y);\

  int main()
  {
  float radious;
  scanf("%f",&radious);
  printf("the area of your cicle is %f",radious*pi);
  return 0;
  }
*/

/*DECLARANDO FUNCIONES:
 * Se declara con el tipo de datos que regresa la función y tiene que ser el mismo tipo de dato con el que fue definida la función, por ejemplo
 * int, luego se especifíca el nombre de la función y los parámetros de la función (argumentos) sin embargo no es necesario escribir el nombre
 * de dichos parámetros o argumentos pero sí el tipo de datos que tienen dichos argumentos/parámetros, pero como pudimos apreciar en el ejemplo  
 * anterior, al momento de definirse una función, no neceariamente se tiene que declarar que argumentos o parámetros tiene la función y ésta al
 * llamada sólo ejecuta el código dentro de la función (que depende de otras funciones en nuestro caso).
 * No es necesario decarar una función antes de usarla pero esta bien hacerlo siempre ya que si se usa antes de declararla y definirla como
 * el compilador lee C línea por línea, no sabe el tipo de datos que regresa la función y asume que es int, si se deine la función antes de
 * usarla, no habra problema, pero es común que las funciones se definan luego se ser usadas. Ejemplo de declaración
 *
 * data_type function(n,m); \\Es importane poner ";" al declarar funciones.
 *
 *DEFINIENDO FUNCIONES:
 * La definifición de una función es el blóque de codigo que va desúes del nombre de la función dentro de los brackets "{}", luego escribir el
 * nombres de la función es común definir las variables locales de dicha función, y estas sólo serán utilizadas mientras se ejecute la función
 * y los tipos de datos que manipulan las funciones. Se utiliza void en una función cuando no se espera que regrese ningún dato y sólo
 * ejecute código.
 */

/*VARIABLES DE FUNCIONES.
 * Una variable es declarada siempre con cierto tipo, no necesariamente al momento de ser declarada se le tiene que asignar un valor, se le
 * llaman locales cuando se definen dentro de los brakets { } de una función, se le llaman globales cuando se definen fuera de una función, si
 * no se le asigna un valor a una variable global, automáticamente C le asignael valor 0, en cambio las variables locales toman un valor
 * aleatorio basura. Existen otro tipo de variables llamadas "pointers" o apuntadores y éstas asignan valor a una localidad específica de la
 * memoria, éstas se distinguen porque en su combre llevan * ejemplo: int *pointer, al ser utilizadas en la función se utliza "&" ya que se esta
 * llamando a la localidad en la memoria que guarda el valor de la función, similar a la función scanf, esto se llama call by reference que
 * significa que se usa the reference operator & que referencía a la memoria, en cambio a las variables usuales cuando son llamadas se llama call
 * by value ya que sólo consideran el valor asignado a la variable y no su localidad en memoria.
 * La asignación de valor de una variable local es válido sólo durante la función que la utliza y por lo tanto puede ser utilizado el
 * mismo nombre en otra función.
 */

/*MODIFICADOR STATIC:
 * Por definición las funciones se definen de manera global, es decir , una vez definida una función puede ser utilizada en cualquier parte del
 * código, sinembargo cuando se usa el modificador static (como en las variables), la función queda restringida al archivo dónde fue definida, así
 * no hay problma de definir una función del mismo nombre en otro archivo aunque sea parte del mismo proyecto.
*/

/*STACKS (Static and Dynamic Scoping): 
 * C utiliza una estructura de stack al momento de ejecutarse, donde los datos son leidos de forma LIFO que significa
 * Last In First Out, es decir que empieza con la última parte del stack, usualmente esta es la función "main()"
 * y así mientras se ejecuta main leera el resto de las funciones del stack (que se encuentran ejecutadas dentro de main()).
 * en este stack se pueden utilizar operaciones como "push" Y "pop" las cuales ejecutan las funciones del stack en caso de pop
 * y mueven las funciones a una prioridad mayor en caso de push, en una función cuando encontramos return es una forma de pop.
 * Dentro de cada stack se guarda información de las variables locales de una función y también se guarda la información de 
 * la ubicación en la memoria en donde de guradará los datos resultantes de cada función.
 
 *SCOPING:
 * Se refiere a la vida util o definida de una vaiable o una función, es importante saber cuando en un código se está usando una variable o una
 * función ya que en códigos muy grandes es comun tener que reusar el nombre de una función o una variable y por lo tanto es necesario saber en
 * qué partes del código se definen y en que parte terminan dichas variables y terminan dchas funciones y variables.

 *LEXICAL SCOPING/STATIC SCOPING:
 * es la forma en que c busca cómo se definen las variables y funciones, static se refiere a el stack de c, es decir que c prioriza por bloques de
 * código, es decir si se usa una expresión en un bloque de codigo el compilador primero busca las variables en el bloque de código dode se usa
 * esa expresión, luego busca en el primer bloque que contiene el bloque donde se usa la expresión y asi hasta encontrarlas, por ende las
 * variables globales son las últimas en ser buscadas, pero son también las más importantes ya que todo el cógigo las ve.
 
 *DYNAMIC SCOPING:
 * se refiere a buscar la definición de las variables en términos de las funciones definidas en los bloques de código dónde se utiliza una
 * expresión dada, esto permite a c ver dentro de otros bloques de código pero sólo en términos de las funciones que llaman a esos bloques de
 * código.
 */

 /*RECURSIÓN: (Funciones recursivas en C) Como sabemos la recursión es la manera de definir funciones en términos de ellas mismas, esto en términos de la lógica
 * de los números naturales es equivalente a inducción que es el principio con el cual podemos definir do, while, for y do-while loops sin embargo
 * la recursión es un grado mayor de abstracción ya que codifica tanto el principo del buen orden como la inducción. así para definir una función recursiva
 * se comienza con un a condición base, por lo general esta es 0 o 1, así para escribir una función recursiva en c, la sintaxis consiste en verificar una catidad de
 * estados base y después definirla inductiva/recursivamente
 * 
 * function_type funtion_name(arg1,arg2, ...)
 * {
 *      if/switch ("caso base")
 *          "codigo"
 *          return output_base;
 *      else/default
 *          "código"
 *          return output_general_recursivo;
 * }
 * ejemplos:
 */
 
 /*
 int recursionadd(int n)
 {
     if(n == 1)
        return 1;
     else
        return(n + recursionadd(n-1)); //paso inductivo
 }

int factorial(int m)
{
    if(m == 0)
        return 1;
    else
        return(m * factorial(m-1)); //paso inductivo
}
int fibbonacci(int initial1, int initial2, int nterm)
{
    switch (nterm){
    case 0: return initial1;
        break;
    case 1: return initial2;
        break;
    default: return(fibbonacci(initial1,initial2,nterm-1) + fibbonacci(initial1,initial2,nterm-2)); //paso inductivo
        break;
    }
}       
 int main()
 {
     int numb;
     int factnumb, gauss, fibonacci;
     printf("please enter a number:");
     scanf("%d",&numb);
     gauss = recursionadd(numb);
     factnumb = factorial(numb);
     fibonacci = fibbonacci(factnumb, gauss, numb);
     printf("factorial(%d): %d and gausssum(%d): %d\n",numb,factnumb,numb,gauss);
     printf("fibonnacci(%d) where the starting points are %d and %d is %d",numb,factnumb,gauss,fibonacci);
     return 0;
 }

//para ver un caso de función recursiva interesante checa ackermann.c
*/

/*obs:
* en c existen varias formas de hacer recursión, además de la anteriormente vista exite una manera de hacer recursión indirecta, es decir que 
* la función definida tal cual no es recursiva per se ya que no hace refernecia a ella misma, pero hace referencia a otras funciones que hacen referencia
* a otras funciones y así sucesivamente hasta llegar a la función original, es decir hay una serie de procesos asociados a dicha función para la definición
* de ésta, que al final dichos procesos hacen referencia a la función original, esto es llamado recursión indirecta.
* 
* ejemplo: 
*/

/*
void odd(); //void significa que no regresa nada esta función
void even();
int n = 1;

void odd()
{
    if (n <= 10)
    {
        printf("%d ", n+1);
        n++;
        even(); //odd depende de even y viceversa
    }
    return; 
}
void even()
{
    if (n <= 10)
    {
        printf("%d ", n-1);
        n++;
        odd(); //notemos que este código sí termina ya que siempre agregamos un número a n
    }
    return; 
}
int main()
{
    odd();
}
*/
/*una función se dice que es tal recusive si el último paso que realiza la función es el paso recursivo/inductivo*/

/*arrays en c: una array o "arreglo" es una es una estuctura de datos, las estucturas de datos nos sirven para organizar y recolectar
* datos de una forma espcífica y cumplir con un porposito específico, por ejemplo; una array es es una lista de datos de
* un mismo tipo ejemplo una lista de 10 números enteros o una lista de 5 caracteres. podemos pensar una array como una variable
* que guarda los datos de una varias variables.
*
* veamos por ejemplo las arrays de dimensión 1 cuya sintaxis se declara:
*
* data_type name_of_the_array["número de elementos"(tiene que se un entero positivo constante)]={"lista de elementos"};
*
* ejemplo: int array[5]={345,4,53,46,3}; 
*
* el compilador entonces asocia a la array la cantidad de bits sizeof(data_type)*"número de elementos" y dicho número de elementos
* combiene definirlo con un macro. también es posible no especificar el número de elementos en el array y sólo declararlos, también
* si se especifica con un número específico de elementos y se declaran menos de este número , c automáticamente les asocia el valor 0,
* sinembargo no se pueden declarar arrays vacías ni con más elementos.
*/

/*
#define n 3
int main()
{
    int array[]={34,52,345,3,45,3,45}; //aqui podemos ver las distintas formas en las que se inician y declaran las arrays
    int arr[5];
    arr[0]=1;
    arr[1]=78;
    arr[2]=16;
    arr[3]=4;
    arr[4]=3;
    int arr2[10]={[0]=3,[5]=1,[7]=2}; //"designated initialization" sólo indicas los índices donde quieres números distintos de 0 no necesariamente se requiere que los índices estén en orden
    int coord[n],i; //se pueden usa loops
    for(i=0;i<n;i++)
    {
        printf("please enter coordinates (x,y,z):",i);
        scanf("%d",&coord[i]);
    }
    printf("\nthe coordinates is as follows:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",coord[i]);
    }
    printf("%d\n",array[4]);
    printf("%d\n",arr[4]);
    printf("%d\n",arr2[4]);
    return 0;
}
*/

/*array reverser*/
/*
int* reverse(int* array, int n)
{
    int rev_array[n], i;
    printf("reversed array: ");
    for(i = 0 ; i < n ; i++)
    {
        rev_array[i]=array[(n-1)-i];
        printf("%d",rev_array[i]);
    }
    return 0;
}

int main()
{
    int length;
    printf("please introduce the length of you array: \n");
    scanf("%d",&length);
    int array[length], n;
    printf("introduce array:");
    for(n = 0 ; n < length ; n++)
    {
        scanf("%d", &array[n]);
    }
    printf("\n");
    reverse(array, length);
    return 0;
}
*/

/*digit counter*/
//se tiene que modificar para que pueda procesar número mayores a 2^32
/*
int main()
{
    int seen[10]={0};
    int n,rem;
    printf("please intoduce a number n:");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n%10;
        seen[rem]++;
        n = n/10;      
    }
    for(int i = 0; i < 10 ; i++)
    {
        printf("%d",seen[i]);
    }
    return 0;
}
*/

/*codigo para saber el tamaño de un array y un ejemplo:
* sizeof(array_name)/sizeof(array_name[0]) da la cantidad de elementos de un array es claro porque size of array da el total de bits del array
* y los elementos del array son del mismo topo asi que dividir entre el tipo de el 0 elemento funciona.
*/

/*
#define length(x[]) do{sizeof(x)/sizeof(x[0])}while(0)

int main(){
    int arr[] = {4,234,234,5,4356,4,56,45,64,56,45,7,568,56,45,7,56,8,56,3,52,34,1,56,41,234,12,34,345,63,4576,3456,7,3546,54,67,546,7,5687,456,745,67,456,7456};
    int size;
    size = length(arr);
    printf("%d",size);
    return 0;
}
*/

/*multidimensional arrays: se declraran de forma similar a las arrays de dimensión uno pero por cada dimensión declaras el tamaño de las arrays
* en cada dimensión, para dimensión 2 las conocemos como matrices y las de mayor dimensión son 3-tensores, 4-tensores, 5-tensores,... etc.
* 
* syntax: data_type name_of_the_array[size_1][size_2][size_3]...[size_n];
*
* al momento que uno quiere asignar valores a las entradas de los arrays es posible hacerlo de varias formas, una es linealmente poniendo los 
* elementos uno tras otro hasta completar los n = size_1*size_2*size_3*...*size_n de la array multidimensional, es decir tratas a la array multidimensional como
* una array de dimensión 1 de longitud n, los elementos se van llenando primero por el primer índice hata terminar y de ahi se sigue por el siguiente, es decir 
* el primer elemento va al elemento [0][0][0]...[0], el segundo a [1][0][0]...[0],..., el size_1+1 a [size_1][1][0]..[0], etc.
* esta froma es muy confusa de usar, pero lo que se prefiere usar la siguiente:
*
* array[size_1][size_2][size_3]...[size_n] = {{array_1}{array_2},...,{array_n}}; donde array_k es una array de dimensión de dimensión tamaño size_1*...(quitamos size_k)...*size_n
* así el elemento (i_1,i_2,i_3,...,i_n) de array se denota por array[i_1][i_2][i_3]...[i_n].
*
* para imprimir los elementos de dicho array multidimensional tenemos que utilizar nested loops:
*/
/*
int main(){
    //int arr[3][4];
    //int arr[3][4] = {{5,45,3,4}, {4,45,6,3}, {1,4,3,10}}; 
    int arr[2][3][4] = {
                        {{5,45,3,4}, {4,0,6,3}, {1,0,3,10}},
                        {{6,35,7,4}, {7,9,6,2}, {0,6,3,0}},    
                    };
    for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for(int k = 0; k < 4 ; k ++)
                {
                    printf("%d ", arr[i][j][k]);
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    return 0;
}
*/
/*
int main(){
    int array[5][5]={{5,45,3,0,4}, {4,0,45,6,3}, {1,4,3,0,10}, {0,4,0,6,3}, {1,0,3,10,0}};
    int sumcolumnsrows[2][5]={{0},{0}};

    for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                sumcolumnsrows[0][i] = sumcolumnsrows[0][i] + array[i][j];
                sumcolumnsrows[1][j] = sumcolumnsrows[1][j] + array[i][j];
            }
        }

for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
        printf("%d ", sumcolumnsrows[i][j]);
        }
        printf("\n");
    }
    printf("\n");
return 0;
}
*/

/*ejemplo*/
/*
int main(){
    int array[5][5]={{5,45,3,0,4}, {4,0,45,6,3}, {1,4,3,0,10}, {0,4,0,6,3}, {1,0,3,10,0}};
    int sumcolumnsrows[2][5]={{0},{0}};

    for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                sumcolumnsrows[0][i] = sumcolumnsrows[0][i] + array[i][j];
                sumcolumnsrows[1][j] = sumcolumnsrows[1][j] + array[i][j];
            }
        }

for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
        printf("%d ", sumcolumnsrows[i][j]);
        }
        printf("\n");
    }
return 0;
}
*/

/*multiplicación de matrices*/
/*
#define max 100000
int main()
{
    int colum_1, row_1, colum_2, row_2;
    float sum = 0;

    //float matrix_1[max][max];
    //float matrix_2[max][max];
    //float multiplicationmatrix[max][max];

    printf("please enter the numbers of rows and colums of the matrix a (less than 100): n m\n");
    scanf("%d %d", &row_1, &colum_1);
    printf("now enter the numbers of rows and colums of the matrix b: k l\n");
    scanf("%d %d", &row_2, &colum_2);
    float matrix_1[row_1][colum_1];
    float matrix_2[row_2][colum_2];
    float multiplicationmatrix[row_1][colum_2];

    if (colum_1 > max || row_1 > max || colum_2 > max || row_2 > max){
    printf("error: limits of matrix exceeds the maximum");
        return 2;
    }else 


    if(row_2 != colum_1){
        printf("error: colums a must match rows of b.");
        return 1;
    }else{
        printf("please enter the rows of a with entries separated by spaces:\n");
        for (int ii = 0; ii < row_1; ii++){
            for (int jj = 0; jj < colum_1; jj++){
                scanf("%f", &matrix_1[ii][jj]);
            }
        }

        printf("a:\n");
        for (int ii = 0; ii < row_1; ii++){
            for (int jj = 0; jj < colum_1; jj++){
                printf("%f ", matrix_1[ii][jj]);
            }
        printf("\n");
        }

        printf("now enter the rows of b the same way as before:\n");
        for (int aa = 0; aa < row_2; aa++){
            for (int bb = 0; bb < colum_2; bb++){
                scanf("%f",&matrix_2[aa][bb]);
            }
        }
        printf("b:\n");
        for (int ii = 0; ii < row_2; ii++){
            for (int jj = 0; jj < colum_2; jj++){
                printf("%f ", matrix_2[ii][jj]);
            }
        printf("\n");
        }
    
        for (int i = 0; i < row_1; i++){
            for (int j = 0; j < colum_2; j++){
                for (int k = 0; k < row_2; k++){
                sum = sum + matrix_1[i][k] * matrix_2[k][j];
                }
                multiplicationmatrix[i][j] = sum;
                sum = 0;
            }
        }
        
        printf("the multiplication matrix is:\n");
        for (int ii = 0; ii < row_1; ii++){
            for (int jj = 0; jj < colum_2; jj++){
                printf("%f ", multiplicationmatrix[ii][jj]);
            }
        printf("\n");
        }

    return 0;
    }
}
*/

/*obs:
* agregar const a una array hace que sea constante y por lo tanto los valores de sus entradas no pueden ser modificadas
* por el programa.
*/

/*pointers:(muy importante)
* un pointer o apuntador es una variable que guarda la localidad en memoria dónde se guarda algún dato. las locaciones en memoria de una computadora
* es un número hexadecimal. un pointier se inicializa y declara con la siguiente sintaxis:
*
* data_type *pointer_name = 0x_num_hex; donde el "data_type" indica el tipo de dato que guarda la memoria representada por el número hexadecimal.
*
* si se tiene alguna variable y deseamos usar un pointer a la localidad de memoria que guarda los datos de dicha memoria se utiliza el operador '&'
* conocido como operador "adress" o de "dirección" de la siguiente manera:
*
* data_type var;
* data_type *pointer_name = &var; como se puede apreciar  el operador '*' indica que es un pointer y '&' indica dónde se guarda la memoria de var
* notamos que ambos tienen que ser del mismo tipo de dato.
*/

/*
void main()
{
    int  var = 1024;
    int *pointer = &var;
    char *pntr = null; //null es un pointer especial que no referencía a ninguna localidad en memoria
    printf("%p --> %d", pointer, *pointer); //usar '*' accesa la memoria que guarda la localidad de nuestro pointer. 
}
*/

/*obs: 
* con el operador '*' podemos modificar el valor de la variable guardada en el pointer indicado, pero esto se debe hacer con pointers que
* ya hayan sido inicializados ya que si no, no apuntan a ningula localidad en memoria y esto provoca un error de tipo segmentation fault error. 
*/

/* nota: si p_1 y p_2 son pointers p_1 = p_2 dice que tus variables de apuntador, apuntan a la misma localidad de memoria y *p_1 = *p_2 indica
* el dato guardado en la memoria p_1 y la memoria p_2 son iguales, aunque sean dos localidades distintaspor lo tanto no son lo mismo ambas expresiones.
*/

/*programa para encontrar el máximo y mínimo de un array*/
/*
void min_max(int arr[], int size, int *min, int *max) //arr[] es un pointer la la localidad en memoria de arr, también se puede usar *arr
{
    *max = arr[0];
    *min = *max; 

    for (size_t i = 0; i < size; i++){
        if (*max <  arr[i])
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}       

int main()
{
    int array1[] = {-234,-6, 234, 54, 53,59,6,756,87,1,137,5,-534, 9, 89,1032};
    int size = sizeof(array1)/sizeof(array1[0]);
    int min,max;
    min_max(array1,size,&min,&max);
    printf("the min and max of the array are: %d and %d",min,max);
    return 0;        
}
*/
/* return un pointer en una función*/ 
/*
int *findmid(int array[], int size) //para indicar que una función tiene un pointer como return type se tiene que escribir '*' anted del nombre para designar que regresa un pointer
{
    return &array[size/2]; //para regresar pointers se tiene que utilizar el adress de la variable que toma la función para indicar que es un pointer
}

int main()
{
     int arr[] = {-234,-6, 234, 54, 53,59,6,756,87,1,137,5,-534, 9, 89,1032};
     int length = sizeof(arr)/sizeof(arr[0]);
     int *mid = findmid(arr, length);
     printf("%p --> %d", mid, *mid); //para imprimir la localidad de un pointer completa se usa %p en lugar de %x
     return 0;
}
*/

/*aritmética de pointers: es posible realizar las siguientes operaciones con los apuntadores, se utilizan para accsesar a la información
* guardada en alguna array, si no se opera en el contexo de arrays, esto produce errores de undefined behavior, además tenemos que estar
* concientes del tamaño de nuestros arrays.
* 
* suma: si tenemos un array data_type arr[], entonces si data_type *ptr = &arr[0] es un pointer apuntando al primer elemento, ptr + 1 es un pointer
* apuntando a arr[1], así ptr + n es arr[n], hexadecimalmente ptr + n es *ptr + sizeof(data_type)*n.
*
* resta: es igual que la suma pero en la dirección opuesta, así si prt_1 apunta a arr[i] y prt_2 apunta a arr[j], ptr_1-ptr_2 te da la distancia entre
* la localidad de ptr_1 y ptr_2, es decir (i-j)sizeof(data_type), ojo no podemos restar un número que sea mayor al valor de la posición de nuestra array.
*
* incrementar '++': funciona como esperado pero hay que tener cuidado de que primero se evalúa el valor del pointer y luego se aplica el incremento ++. 
* decremento '--': igual que '++', pero hay que tener cuidado con acabar el array.
*
* comparación(==,<,>,!=): al utilizar los operadores de comparación con pointers, nos indica un valor '0' ó '1' que determina si la posicion de los datos
* apuntados en la array son iguales a, menor, mayor o distintos a una posición dada. 
*/

/*
int min_max(int arr[], int size, int *min, int *max, int *max_repeat, int *min_repeat)
{
    *max = arr[0];
    *min = *max; 
    *min_repeat = 0;
    *max_repeat = 0;

    for (size_t i = 0; i < size; i++){
        if (*max <  arr[i])
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }

    for (size_t i = 0; i < size; i++){
        if (arr[i] == *max)
            *max_repeat+= 1;
        if (arr[i] == *min)
            *min_repeat+= 1;
    }
}       

int main()
{   
     int arr[] = {-234,-6,234,54,53,59,6,756,-534,87,1,137,-534,5,-534,9,89,11030,11030,11030,11030,-534,-534};
     int length = sizeof(arr)/sizeof(arr[0]);
     int *init = &arr[0];
     int *mid = init + 4;
     int len = length - 1;
     int *end = &arr[len];
     int diff = end - mid;
     int *squid = mid + 1;
     printf("%p --> %d\n", init, *init); //para imprimir la localidad de un pointer completa se usa %p en lugar de %x
     printf("%p --> %d\n", mid, *mid);
     printf("%p --> %d\n", end, *end);
     printf("the substraction is %d\n", diff);
     printf("%p --> %d\n", squid, *squid);
     printf("%d %d\n", squid < mid, end < mid);
    
    int min, max;
    int repeat_max;
    int repeat_min;
    min_max(arr,length,&min,&max,&repeat_max,&repeat_min);
    printf("%d %d\n",max, min);    
    printf("%d %d\n",repeat_max, repeat_min);
     return 0;
}
*/

/*pointer sum of array program*/
/*
int main()
{
    int arr[] = {-234,-6,234,54,53,59,6,756,-534,87,1,137,-534,5,-534,9,89,11030,11030,11030,11030,-534,-534,1};
    int lenght = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    int *pntr = arr;// cuando unpointer apunta a una array, apunta a el primer elemento

    for(pntr; pntr < arr + lenght ;pntr++){//así pntr < arr + lenght significa que stoy tomando en cuenta las localidades de la memoria le las entradas de arr de 0 a lenght
        sum += *pntr;
    }
    printf("%d",sum);
    return 0;
}
*/

/*pointers con arrays de dimensión mayor: debido a que c maneja sus arrays multidimensionales como un array de arrays de una dimensión menor,
* entonces al utilizar pointers en arrays de dimensión mayor vamos a primero apuntar al primer elemento de nuestra array que es otra array, 
* siguiendo la lógica de pensarlos como renglones (si pensamos en matrices), como un array multidimensional es simplemente una array de 
* longitud igual al producto de todas las longitudes al usar un pointer apuntamos primero a array[0][0]...[0] y segimos linealmente hasta terminar 
* con el primer renglón (digamos de array[0][0]...[0] hasta array[0][0]...[n]) y seguimos con el siguente hasta acabar todos, sin embargo para hacer esto
* no podemos usar la aritmética de apuntadores como previamente la habíamos utilizado ya que si *pointer = array, entonces "pointer" apunta a la primera array 
* de dimensión n-1 (renglón) y pointer + 1 apunta a la siguiente así para accesar a array[0][0]...[0] usamos el operador * el numero de veces igual a la 
* dimensión de array, es decir **...*array, asi para accesar array[i_1][i_2]...[i_m] tenemos que escribir *(*(*(array + i_1)+ i_2)... + i_m) . con esto para accesar a la memoria
* podemos escanear linealmente usando un sólo loop en lugar de dos como hicimos previamente. notamos que los pointers a l arrays siempre contienen la dirección 
* de el primer elemento que contienen. otra forma de indicar un pointer a una multi array es de la siguiente forma, la cual especifica ell tamaño de la array en todas menos la primer dimensión:
*
* data_type array[][n_2][n_3]...[n_k].
*/

/*
int main()
{
    int array[2][3][3] = {
        {{2,3,3},{4,-3,3},{0,0,1}}, 
        {{1,0,0},{0,-3,3},{2,0,1}}
        };
    int *pointer = &array[0][0][0];
    for (pointer; pointer <= &array[1][2][2]; pointer++)
    {
        printf("%d ",*pointer);
    }    
    return 0;
}
*/

/*pointer a arrays completas: si se quiere usar un pointer a un array completa y no solamente a a algún elemento de dicha array (por ejemplo el primero)
* esto se puede aser con la siguiente sintaxis:
*
* type array[n]; así declaramos un pointer a esta array como: type (*pointer)[n] = &array; esto en realidad declara un array de pointers 
*/

/*
int main()
{
    int arr[] = {4,2,2,9,2,6,2,8,3,3,2,5,7,2,9,8,1,2,5,2,5,9,8,2,5,7,7,5,7,5,2,5,2,2,7,5,8,8,5,2,8,8,6,2,1,2,6,4,8,2,5,6,6,3,4,2,2,6,3,3,3,7,2,6,2,5,5,7,7,5,3,2,5,4,3,9,2,6,2,6,6,7,9,7,2,5,5,5,1,2,5};
    int length = sizeof(arr)/sizeof(arr[0])-1;
    int (*pointer)[length] = &arr;
    printf("%x\n",*pointer);
    printf("%d\n",**pointer);
    return 0;
}
*/

/*obs:
* pointer también se pueden declarar con "*" en el lugar del tipo de datos, es decir como 
* data_type* pointer_name;
*/

/*typecasting: como sabemos la aritmética de los pointers o apuntadores dependen de el tipo de datos que tengamos, los pointers de tipo int y float saltan de 4 en 4 bytes
* los de tipo char saltan de 1 byte en un byte, esto se puede aprovechar y ser muy útil al momento de leer memoria, entonces si queremos cambiar el tipo de memoria leida por un 
* apuntado o pointer usamos type casting, es decir apuntamos un apuntador a otro pero podemos especificar el tipo de datos que queremos leer, esto es posible ya que al leer
* datos en memoria, todo es un número binario, por lo tanto podemos especificar la codificación que querramos al leerlos. ejemplo
*/

/*
int main()
{
    int var = 1201;
    int* point = &var;
    char* p0 = (char*)point;
    printf("address: %p, value: %d\n",point,*point);
    printf("address: %p, value: %d\n",p0,*p0);
    printf("address: %p, value: %d\n",point+1,*(point+1));
    printf("address: %p, value: %d\n",p0+1,*(p0+1));
    return 0;
}
*/

/*obs:
* existen pointer que no indican ingún tipo de dato llamados void pointers, se indican con la misma sintaxis:
* void* pointer;
* estos apuntadores leen solamente los datos en binario sin darles ningún tipo de dato, por lo que no es posible utilizar artimética de apuntadores con ellos. 
*/

/*double pointers: sucede que en c no solo es posible apuntar a variables como enteros, hexadeximales, caracters, flotantes y arrays si no que también podemos tener pointers a pointers 
* y de hecho no sólo eso si no que tambien pointers a pointers a pointers, hasta ahora esto es posible en c hasta 9 niveles, la sintasis es de la siguinte manera:
*
* variable_type* pntr = &pntr; variable_type** pointer = &pntr;
*
* esto es posible ya que unpointer es también una variable de tipo entero y de hecho de tipo hexadecimal que se tiene que guardar en memoria, por lo tanto es natura usar un apuntador (pointer)
* a esta varliable. en claso de triples pointers, cuatruple pointers, etc se utilizan triples ***, cuadruples *** etc. también podemos usar varios niveles de operadores de referencia "*" para acceder
* a los niveles de memoria que deseemos en un multipointer, es decir quepodemos acceder a la memoria que estan apuntantdo hasta llegar al nivel de la varible origianal, pasando por todos los niveles de 
* memoria entre la variable original y el pointer final. pro ejemplo
*/

/*
int main()
{
    int var = 5;
    int* point1 = &var;
    int** point2 = &point1;
    int*** point3 = &point2;

    printf("address: %p, value: %d\n",point1,*point1);
    printf("address: %p, value: %d\n",point2,*point2);
    printf("address: %p, value: %d\n",point3,*point3);
    printf("address: %p, value: %d\n",*point3,**point3);
    printf("address: %p, value: %d\n",**point3,***point3);

    return 0;
}
*/

/*arrays/strings literals en c: una sting en c es un array hecho de caracteres, así para usarlas en una variable, se declaran como si fuera un array de tipo char
* sin embargo estas arrays son dinámicas es decir no es fija la cantidad de elementos que guardan dicha información, por lo tanto al declarar una variable como una string,
* es necesario que se declare como una array que teng aun número mayor o igual a la cantidad de caracteres que se desean guardar en ducha string +1, el +1 de al final es 
* debido a que como las strings son un tipo de dato de array dinámica el último elemento de dicha string tiene que indicar que se ha llegado al final de la sting. esto se conoce 
* como un null pointer. (nota: es necesario agregar el header o encabezado de #include <string.h> cuando uno trabaja con strings) ejemplo:
*/

/*
void main()
{
    char str[20];
    str[0] = 'h';
    str[1] = 'o';
    str[2] = 'l';
    str[3] = 'a';
    str[4] = '\0'; //este es el caracter especial que indica que la string se ha terminado.

    char c[] = {'j','o','h','n','\0'};//esisten varias formas de declarar strings, como las arrays sin embargo sólo string literals asumen dónde es el null character.
    printf("%s\n",c);
    printf("%s\n",str);
    char string[40] = "hola, mundo";    //siempre es más conveniente escribir strings con "string literals" que son los "". 
    int len = strlen(string); //strlen es una de las funciones en strings.h que mide la longitud de las strings.
    int size = sizeof(string);
    printf("(%s) es la string declarada como array de longitud 4o pero su longitud real es:\n"
    "length = %d\n size in bytes = %d",string,len,size); //observamos que la longitud de la string no siempre es igual que la longitud de la array declarada, esto es debido a que strlen mide hasta encontrar el null character/pointer.
}
*/

/*notas: notamos que el la última función printf pudimos separar la string en dos usando una técnica llamada splicing que se puede hacer de dos formas, una es utlizando separacines con "" 
* la otra es utilizando el caracter '\'.
* strings y pointers son tipo distintos de datos que se comportan de forma similar por ejemplo no es posible utilizar aritmética de apintadores con arrays, sin embargo es posible utilizar pointers
* a strings como si fueran las strings mismas (aunque no lo son, son cosas distintas). por ejemplo podemos escribir un pointer a una string como:
* str *ptr = "hello world!"
* pero hay que notar que no es posible modificar los datos de string literals cuando son apuntados de esta forma, son read only memory. 
*/

/*funciones con strings (incluye printf, puts, putchar, getchar, etc):
*
* print functions:aquí tenemos un ejemplo de cómo podemos hacer nuestra propia función que imprime careacteres en la pantalla utilizando la función
* básica putchar, esta funcion "print()" hecha por nosotros se comporta de foma similar a la función 'puts()' (put string), la cual es una función de la biblioteca "stdio.h" que solamente pone en pantalla las strings indicadas (y sólo acepta strings), 
* una función como 'printf()' que similar 'a puts()' es una función de "stdio.h" que pone caracteres en pantalla, sinembargo esta funcion como hemos visto  es más compleja 
* ya que es capaz de imprimir en pantalla formatos además de strings, es decir puede imprimir los datos de una variable indicada respentando su formato, ya sea entero decimal, hexadecimal, binario, pointer etc.
* por ejemplo podemos especificar qué tanto de una string queremos poner en pantalla utilizando el formato "%m.ns" donde:
*
*   n = número de caracteres de nuestra string que queremos poner en pantalla
*   m = el tamaño del campo (en caracteres) donde el mensaje se piensa imprimir, por ejemplo si m>n se acomoda el ensaje utilizando espacios al principio de la string 
*
* otra diferencia entre printf() y puts() es que puts() automáticamente imprime una nueva línea al terminar de utilizarse y printf() no. 
*/ 

/*ejemplo de print utilizando putchar: la función putchar es una función en "stdio.h" que toma como input un caracter (no string) y regresa su valor entero según la tabla ascii*/
/*
void print(char *c)
{
    while (*c != '\0')
    {
        putchar(*c);
        c++;
    }
    putchar('\n'); //a diferencia de printf, putchar tiene como argumentos un caracter y printf sólo acepta string literals 
}
*/

/*
int main()
{
    char str[] = "this is the print function that i made.";
    print(str);
    return 0;
}
*/

/*scanning functions: scanf() es una función en "stdio.h" que toma como input un pointer a cierto tipo de datos, en caso de strings, como una string se puede pensar como un pointer al inicio de dicha array de caracteres
* no es necesario usar '&' al utilizar scanf() con stings. scanf() es una función especial y se necesita tratar con cuidado, por ejemplo al leeer de unastring scanf() no lee ningun input despues de encontrar un espacio en blanco
* es decir al recibir un array como "you are welcome", los datos de esta string que scanf va a guardar en la memoria van a limitarse a la primera palabra "you". otra propiedad de scanf() es que se puede especificar para una array
* la cantidad de caracteres que se quieren guardar en la memoria utillizando el formato "%ns". 
* otra función que se utiliza para obtener un input en forma de string es gets() (get string , sólo acepta strings) la cual es otra función parte de la biblioteca "stdio.h" que ya conocemos. a diferencia de scanf, gets sí acepta espacios vacío como input, sinembargo es una
* función considerada no segura ya que no te permite delimitar el tamaño del input requerido, por lo que es posible escribir memoria fuera de la memoria asignada para nuestra array, lo que puede tener graves consecuencias.
*
* en el siguiente ejemplo podemos ver que el siguiente programa colapas si se le da un input mayor a 12 caracteres, es lo que se le llama un "buffer overflow" que son comunes en c ya que a diferencia de otros lenguajes de programación, c al 
* escribir en la memoria tiene comportamiento indefinido. 
*
* buffer overflow: este tipo de comportamiento indefinido proviene de un programa que intenda escribir en memoria más datos de los especificados en una array y es posible que cuando esto sucede, se escriban datos en ortos registros de memoria
* que se utilizan para otras variables o peor aún para el resultado de alguna función. 
*/

/*
#include <stdio.h>

void main(void)
{
    char name[12];
    printf("what's your name? ");
    scanf("%s", name);
    printf("hello %s!\n", name);
}
*/

/*por ejemplos como el anterior y otros más se recomienda no utlizar la función gets() y tener cuidado al utlizar la función scanf() ya que a diferencia de lo que se cree
* scanf no es una función diseñada para leer un input en memoria (eso hace pero no es la razón de su existencia), la función scanf() fue diseñada para el análisis sintáctico del
* input dado, conocido en inglés como parsing y por lo tanto si se le otorga un tipo de datos que no sea el indicado, ni siquiera va a ser leido en memoria por lo que se pueden obterner
* errores inesperados al utilizar scanf().  
*/

/*ejemplo de una función de escaneo utlizando getchar() (getchar() es una función en "stdio.h" que lee el input de uns string cracter por caracter y regresa el valor entero del cracter según su valor ascii)*/
/*
int input(char* str, int n)
{
    char ch;
    int i = 0; 
    while ((ch = getchar()) != '\n')
    {
        if (i < n)
            *(str + i++) = ch;
    }
    *(str + i) = '\0';
    return i;
}

int main()
{
    char str[100];
    int n = input(str,20);
    print(str);
    return 0;
}
*/

/*BIBLIOTECA "string.h": esta biblioteca contiene funciones para trabajar de manera mác cómoda con string literals. esta biblioteca es parte de las bibliotecas estandard de c. describimos algunas de estas funciones y su funcionabilidad
*
* strcpy(): declarda en string.h como char* strcpy(char* destination, const char* source): esta función toma pointers a dos stings o arrays de caracteres y duplica el contenido de la string en
* la segunda entrada en un "adress" indicado por la primera entrada, como podemos observar la función declara que la seguda entrada es constante y por lo tanto no tiene permitido modificar el contenido 
* de dicha string. es importante que la string en la primera entrada tenga longitud mayor o igual a la longitud en la segunda entrada. existe una versión más segura de esta función
*
* strncpy(): una versión más segura de strcpy declarda como char* strncpy(char* destination, const char* source, int size_of_destination) su funcionalidad es igual a la de strcpy pero se 
* tiene que indicar el tamaño de la string destino es decir cuanta memoria se esta dispuesto a usar, esto permite compiar strings hasta cierto punto si el tamaño del destino es menor al del origen.
*
* NOTA: es posible componer strcpy() y scrncpy() entre ellas y con ellas mismas para hacer múltiples copias de una string, por elemplo: strcpy(str1,strncpy(strcpy2,strcpy3,n)).   
*
* EJEMPLO:
*/

/*
int main()
{
    char str1[15] = "hello everyone";
    char str2[15];
    char str3[15];
    char str4[15];
    strcpy(str2,str1);
    puts(str2);
    strncpy(str3,str1,5); //obs que si el tamaño de la string =destino es menor que la string origen strncpy no pone un nullcaracter al final de la string 
    str3[5] = '\0';//por lo tanto nosotros tenemos que introducir dicho caracter.
    puts(str3);
    strcpy(str4,strcpy(str3,str1));
    puts(str4);

    return 0;
}
*/

/* strlen(): Definida como size_t strlen(const char* str) (OBS: size_t es otra forma de decir unsigned int): Otorga la longitud de una string como un entero 
* su funcionamiento es similar a sizeof() con strings pero no considera el "NULL character".
*
* strcat(): Definida como char* strcat(char* str1, const char* str2)(concatena strings): Concatena o pega la segunda string al final de la primera string.
* hay que observar que para no tener comportamiento indefinido es necesario que el tamaño de srtcat sea mayor o igual a srtlen(srt1)+strlen(str2) de forma similar 
* existe una versión segura de srtcat llamada.
*
* strncat(): Definida como char* strcat(char* str2, const char* str2, int size_of_concatenation): A diferencia de strncpy no es necesario agregar el "NULL characater"
* '\0' ya que esta funcion lo agrega automáticamente.  
*
* OBS: 
* Estas funciones no funcionan si intentamos usar char pointer ya que estas son parte de la READ ONLY MEMORY y por lo tanto no pueden ser modificados por las funciones.
*
* Ejemplo:
*/

/*
void main()
{
    char str1[150] = "Welcome to ";
    char str2[15] = "The machine!";
    strcat(str1,str2);
    char str3[150] = "Hello! ";
    char str4[15] = "Cosmos";
    int n = sizeof(str1)-strlen(str2);
    strncat(str3,str4,n);
    puts(str1);
    puts(str3);
}
*/

/* strcmp(): Declarada como int strcmp(const char* str1, const char* str2) (string compare): Determina si dos strings son
* menores o iguales, mayores o iguales deacurdo a su valor en la tabla ASCII. La función da un valor menor a cero  
* si str1 es menor a str2 o mayora a cero si la longitud de str1 es mayor a la de str2, y da un valor de 0 si str1 == str2, 
* deacuerdo con la siguiente criteria:
*
* str1 < str2 si srt1[i] == str2[i] para toda i menor a k y str1[k] < str2[k]. 
*
* str1 < str2 si str1 es una substring de str2. 
*/

/* MANEJO DE MEMORIA:
*/

/*FUNCTION POINTERS: function pointer o apuntadores a funciones son simplemente apuntadores que en lugar de apuntar a una variable
* apuntan a una funcion, es decir localizan el lugar en memoria donde se localizan las instricciones para ejecutar una funcion dada. 
*
* Los function pointers se declaran de manera similar a como se declara un pointer a un array en abstracto, es decir que la variable todavia no 
* no se ha iniciado en memoria al momento de declarar al pointer. Esto se hace de la siguiente manera
*
* variable_type (*pnter)[n]; Esto se hace de esta forma porque el operdador [] tiene precedencia sobre el operdador *, asi si se hace de la forma normal
* variable_type *pnter[n]; Es una array de n pointers a variables del tipo de variable_type. 
*
* Asi los function pointer se declaran como
* return_type (function_pointer)(varible_type_1,varible_type_2,...,varible_type_n);
* 
* Ejemplo:
*/

/*
int sum(int a, int b)
{
        return a+b;
}

int main()
{
        int (*pnter)(int, int) = &sum; //Como vemos igual que cualquier otro pointer, la asignacion se hace por medio de el operador &
        int result = pnter(10,20);
        printf("%d",result);
return 0;
}
*/

/*NOTA: Function pointers se pueden utilizar para decidir al momento de ejecucion, cual funcion se debe de ejecutar de una opcion finita de funciones
* es decir podemos declarar un arreglo de apuntadores a funciones y decidir cual ejecutar dependiendo de algun input.
*
* Ejemplo:
*/

/* CALLBACKS: Podemos usar function pointers para llamar otras funciones y definir funciones de funciones
*/
/*
void func1()
{
    puts("Hello World!");
}
void pntrfunc(void (*func)()) //Observamos que toma funciones sin argumentos.
{
    func();     //El propósito de esta función es ejecutar la otra función (función evvaluación).
}
void main()
{
    pntrfunc(func1);
}
*/
/*
#define opt 4

float sum(float x, float y){ return x + y; } 
float sub(float x, float y){ return x - y; } 
float mul(float x, float y){ return x * y; } 
float divi(float x, float y){ return x / y; } 

int main()
{
        int choice;
        float x;
        float y;
        puts("Please enter the choice of the operation you want to do:");
        puts("0:Addition, 1:Substraction, 2:Multiplication, 3:Division");
        scanf("%d",&choice);
        puts("Enter two numbers");
        printf("First number:"); scanf("%f",&x); //Cuidado aqui con scanf pues cuando lo puse todo en una function call me dio un segmentation fault
        printf("Second number:"); scanf("%f",&y);
        float (*pntr2func[opt])(float, float) = {sum, sub, mul, divi};
        printf("Result:%f Pointer:%p",pntr2func[choice](x,y),pntr2func[choice]);
return 0;        
}
*/

/*MEMORIA DINÁMICA Y LAS FUNCIONNES MALLOC(), CALLOC(), REALLOC() Y FREE(): Este es uno de los temas más importantes de la programación en C, una de las
* principales herramientas que C provee es el manejo manual de memoria que se necesita para ejecutar un programa mientras éste se ejecuta. Al momento de ejecutarse
* existen dos fuentes de memoria principales, una es el Stack, el cual contiene la información de la memoria de las funciones, variables locales, etc, y ésta se
* determina su tamaño al momento de la compilación del programa. La otra fuente es la "Heap" o pila, la cual se detremina al momento de ejecución (memoria dinámica)
* y es esta la que podemos manejar utilizando las funciones malloc(), calloc(), realloc() y free(), las cuales regresan pointers a la memoria que pedimos al sistema, en 
* caso de que no se encuentre esta memoria por alguna razón estas funciones regresarán NULL (pointer).

* Funciones que asignan memoria y un poco sobre su definición:

* void malloc(size_t size); Toma un entero positivo y te regresa un pointer sin tipo de la memoria localizada en BYTES. Si no se le pasa un argumento regresa un valor basura.

* void calloc(size_t num,size_t size); Muy similar a malloc sin embargo esta función si toma como argumento la cantidad de elementos que se desean hacer en el bloque de memoria
                                        y la memoria que cada uno de estos utiliza, además si no se le pasan argumentos toma como default que son cero.

* void realloc(void *ptr, size_t size); Esta función sirve principalmente para cambiar el tamaño de la memoria que hemos registrado para una tarea, ya sea reducirlo o incrementarlo si es necesario
                                        como vemos toma un ponter a la memoria que se va a modificar y un entero positivo con el tamaño a la nueva memoria.

* void free(void *ptr); Libera la memoria asignada para que se pueda utilizar para otras cosas.
*/

/*
int main()
{
    int num;
    puts("Please enter the size of your array of floats");
    scanf("%d",&num);
    float* p = (float*)malloc(num* sizeof(float));//Nota: como malloc regresa un pointer sin tipo, si queremos usarlo para un tipo de datos específico necesitamos hacer type casting. 
    printf("First pointer is: %p \n",p);
    float* ptr = (float*)calloc(num, sizeof(float)); 
    printf("Second pointer is: %p \n",ptr);
    float sum = 0;
    for (size_t i = 0; i < num; i++)
    {
        sum += i;
        p[i] = i;
    }
    float* pntr = (float*)realloc(p,(num + 1)* sizeof(float));// libera la memoria de pointer anterior.
    pntr[num] = sum;        //realloc con tamaño 0 es lo mismo que free() y con NULL es lomismo que malloc.
    printf("The new pointer is P'1: %p\n",pntr);
    for (size_t j = 0; j < num; j++)
    {
        ptr[j] = (pntr[j]+pntr[j+1])/pntr[j+1];
    }
    for (size_t i = 0; i < num; i++)
    {
        printf("P'1:%f P2:%f ",pntr[i+1],ptr[i]);
    }
    free(pntr);
    free(ptr);
    
return 0;
}
*/

/*STRUCTS (ESTRUCTURAS) EN C: Es la forma de crear nuevas estructuras de datos en C, es decir nuevas formas de  estructurar y manipular los datos
 * en variables de tipos creadas por uno mismo,   
 *
*/ 
