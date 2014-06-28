#ifndef ENUM_H
#define ENUM_H


class Enum
{
    private:
        int qtdIngressos;
        int qtdMeia;
        int preco;
    public:
        enum ingressos
        {
            MEIA,
            INTEIRA
        };
        enum formaPagMentO
        {
            DINHEIRO,
            CARTAO
        };
    void ingressos(int x);
    void inicPreco(float x);
};

#endif // ENUM_H
