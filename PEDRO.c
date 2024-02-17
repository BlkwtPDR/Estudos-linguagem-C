int ID[13]; float S[13];
maior(int k)
{
    int i;
    float maior= S[0];
    for(i=0;i<k;i++)
    {
        if(S[i]>maior)
        {
            maior= S[i];
        }
    }
    int qtd=1;
    for(i=0;i<k;i++)
    {
        if(S[i]>maior)
        {
            qtd++;
        }
    }
    int l;
    for(l=0;M[l]!='\0')
    int M[qtd];
    int j=0;
    for(i=0;i<k;i++)
    {
       if(S[i]>maior)
        {
            M[j++]=ID[i];
        }
    }
    printf("numero de identificacao das pessoas com o maior salario: ");
    for(i=0;i<qtd;i++)
    {
        printf("%d",&M[i]);
    }
}
int main()
{
    int k,i;
    do
    {
        printf("digite a quantidade de individuos que deseja analisar:\n");
        scanf("%i",&k);
        if(k<0 || k>13)
        {
            printf("valor invalido\n");
        }
    }while(k<0 || k>13);
    for(i=0;i<k;i++)
    {
        do
        {
            printf("digite o salario do funcionario %i:\n",i+1);
            scanf("%f",&S[i]);
        }
        while(S[i]<0);
    }
    printf("salarios analisados:\n");
    for(i=0;i<k;i++)
    {
        printf("%.2f\n",S[i]);
    }
    for(i=0;i<k;i++)
    {
        ID[i]= i+1240;
    }
    printf("numero de identificacao dos individuos analisados:\n");
     for(i=0;i<k;i++)
    {
        printf("%i\n",ID[i]);
    }

    maior(k);
}
