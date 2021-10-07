//La insercion es por atras o por el final y la eliminacion es por el frente q su sgte apunta a nullptr
#include<iostream>
#include"Node.h"
using namespace std;
template<typename T>
class Cola{
    private:
        Node<T>*m_pFinal;
        Node<T>*m_pFrente;
    public:
        Cola(){
            this->m_pFinal=0;
            Node<T>*m_pFrente=0;
        }
        void push(T value){
            if(!this->m_pFinal){
                this->m_pFinal=new Node<T>(value);
                this->m_pFrente=this->m_pFinal;
                return;
            }
            Node<T>*pAux=new Node<T>(value);
            pAux->m_pSig=this->m_pFinal;
            this->m_pFinal=pAux;
        }
        void pop(){
            if(!m_pFinal)return;
            Node<T>*pAux=this->m_pFinal;
            Node<T>*pAuxAnt;
            while(pAux->m_pSig){
                pAuxAnt=pAux;
                pAux=pAux->m_pSig;
            }
            delete pAux;
            this->m_pFrente=pAuxAnt;
            this->m_pFrente->m_pSig=0;
        }
        void print(Node<T>*pAux){
            if(!pAux)return;
            else {

                print(pAux->m_pSig);
                cout<<pAux->value<<"|"<<endl;
            }
        }
        void print(){
            print(this->m_pFinal);
        }
};