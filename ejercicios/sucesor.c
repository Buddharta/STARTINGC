/*Definimos la función sucesor de los números naturales para ser llamada por otro programa en C*/

//static int nat=0;
            /*variable global, significa que cuando sea llamada en otro codigo, si se modifica, no
            va a regresar a 0 asi puede ser llamada por otro programa, si se utiliza el modificador
            static (como hemos hecho), la variable no puede ser usada por otro archivo*/
int sucesor()
{
    static int nat=0;// al usar el modificador static como variable local, otro código no puede llamar a esta variable pero tampoco modifica su valor al ser llamada la función sucesor
    nat++;
    return nat;//return indica qué valor regresará la función
}
