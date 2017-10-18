#ifndef GRAFOMATRIZ_H
#define GRAFOMATRIZ_H


template<class T>
class GrafoMatriz {
private:


public:
    GrafoMatriz(int size);

    // Metodos de Nodos

    void nodo_agregar(int n, T val);

    void nodo_remover(int n);

    void nodo_set_val(int n, T val);

    int nodo_get_val(int n2);


    // Metodos de Arcos

    void arco_agregar(int n1, int n2, int val);

    void arco_remover(int n1, int n2);

    void arco_set_val(int n1, int n2, int val);

    int arco_get_val(int n1, int n2);


    int adyacentes(int n1, int n2);

    int *vecinos(int n);

    bool esVacio();
};

template<class T>
GrafoMatriz<T>::GrafoMatriz(int size) {

}

template<class T>
void GrafoMatriz<T>::nodo_agregar(int n, T val) {

}

template<class T>
void GrafoMatriz<T>::nodo_remover(int n) {

}

template<class T>
void GrafoMatriz<T>::nodo_set_val(int n, T val) {

}

template<class T>
int GrafoMatriz<T>::nodo_get_val(int n2) {
    return 0;
}

template<class T>
void GrafoMatriz<T>::arco_agregar(int n1, int n2, int val) {

}

template<class T>
void GrafoMatriz<T>::arco_remover(int n1, int n2) {

}

template<class T>
void GrafoMatriz<T>::arco_set_val(int n1, int n2, int val) {

}

template<class T>
int GrafoMatriz<T>::arco_get_val(int n1, int n2) {
    return 0;
}

template<class T>
int GrafoMatriz<T>::adyacentes(int n1, int n2) {
    return 0;
}

template<class T>
int *GrafoMatriz<T>::vecinos(int n) {
    return nullptr;
}

template<class T>
bool GrafoMatriz<T>::esVacio() {
    return false;
}


#endif //GRAFOMATRIZ_H
