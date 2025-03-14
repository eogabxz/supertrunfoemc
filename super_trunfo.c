//estava desenvolvendo o código e me deparei que não estava no repositório,
//estou enviando novamente o trabalho, mas agora no repositório.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char estado1[50], estado2[50], codigo1[50], codigo2[50], nome1[50], nome2[50], primeiroAtributo, segundoAtributo;
    int populacao1, populacao2, pontos1, pontos2, opcao, opcao2, resultado1, resultado2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapita1, pibpercapita2, superpoder1, superpoder2;

    printf("BEM VINDO AO SUPER TRUNFO!\n");
    printf("Escolha o que fazer:\n");
    printf("1. Jogar\n");
    printf("2. Ver regras do Jogo\n");
    printf("3. Sair do jogo\n");
    scanf("%d", &opcao2);

    switch (opcao2)
    {
    case 1:
    printf("***PRIMEIRA RODADA***\n");
    //armazenando informações
    printf("Informe o estado:\n");
    scanf("%s", &estado1);
    printf("Qual é o código estado?\n");
    scanf("%s", &codigo1);
    printf("Nome da Cidade:\n");
    scanf("%s", &nome1);
    printf("População da Cidade:\n");
    scanf("%d", &populacao1);
    printf("Área da Cidade: (em km²)\n");
    scanf("%f", &area1);
    printf("Pib da Cidade:\n");
    scanf("%f", &pib1);
    printf("Números de Pontos Turísticos:\n");
    scanf("%d", &pontos1);

    //calculando densidade populacional, pib per capita e super poder
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontos1 + (1 / densidade1) + pibpercapita1;

    //exibindo informações
    printf("\n***EXIBINDO RESULTADO DA PRIMEIRA CARTA***\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", &estado1);
    printf("Código: %s\n", &codigo1);
    printf("Nome da Cidade: %s\n", &nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("Pib: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Pib per capita: %.2f reais\n", pibpercapita1);
    printf("Super poder: %.2f\n", superpoder1);


    //novo cadastro de carta
    printf("\n***SEGUNDA RODADA***\n");
        //armazenando informações
    printf("Informe o estado:\n");
    scanf("%s", &estado2);
    printf("Qual é o código estado?\n");
    scanf("%s", &codigo2);
    printf("Nome da Cidade:\n");
    scanf("%s", &nome2);
    printf("População da Cidade:\n");
    scanf("%d", &populacao2);
    printf("Área da Cidade: (em km²)\n");
    scanf("%f", &area2);
    printf("Pib da Cidade:\n");
    scanf("%f", &pib2);
    printf("Números de Pontos Turísticos:\n");
    scanf("%d", &pontos2);

    //calculando densidade populacional, pib per capita e super poder
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontos2 + (1 / densidade2) + pibpercapita2;

    //exibindo informações
    printf("\n***EXIBINDO RESULTADO DA SEGUNDA CARTA***\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", &estado2);
    printf("Código: %s\n", &codigo2);
    printf("Nome da Cidade: %s\n", &nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Pib: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pib per capita: %.2f reais\n", pibpercapita2);
    printf("Super poder: %.2f\n\n", superpoder2);

    //MENU INTERATIVO
    printf("\nEscolha o primeiro atributo a ser comparado:\n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("I. PIB\n");
    printf("T. Pontos Turísticos\n");
    printf("D. Densidade Populacional (menor valor vence)\n");
    scanf(" %c", &primeiroAtributo);

    //inicio switch do  jogo
    switch (primeiroAtributo)
    {
    case 'P':
    case 'p':
        printf("Você escolheu a opção População!\n");
        printf("Comparando População:\n");
          printf("%s: %d habitantes\n", nome1, populacao1);
          printf("%s: %d habitantes\n", nome2, populacao2);
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;

    case 'A':
    case 'a':
        printf("Você escolheu a opção Área!\n");
        printf("Comparando área:\n");
          printf("%s: %.2f km²\n", nome1, area1);
          printf("%s: %.2f km²\n", nome2, area2);
        resultado1 = area1 > area2 ? 1 : 0;
        break;

    case 'I':
    case 'i':
        printf("Você escolheu a opção PIB!\n");
        printf("Comparando PIB:\n");
          printf("%s: %.2f bilhões\n", nome1, pib1);
          printf("%s: %.2f bilhões\n", nome2, pib2);
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;

    case 'T':
    case 't':
        printf("Você escolheu a opção Pontos Turísticos!\n");
        printf("Comparando Número de pontos turísticos:\n");
          printf("%s: %d\n", nome1, pontos1);
          printf("%s: %d\n", nome2, pontos2);
        resultado1 = pontos1 > pontos2 ? 1 : 0;
        break;
    
    case 'D':
    case 'd':
        printf("Você escolheu a opção Densidade Populacional! (Menor vence)\n");
        printf("Comparando densidade populacional:\n");
          printf("%s: %.2f hab/km²\n", nome1, densidade1);
          printf("%s: %.2f hab/km²\n", nome2, densidade2);
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;

    default:
    printf("Opção inválida!");
        return 0;
    }

      //segundo atributo a ser comparado
      printf("\nEscolha o segundo atributo a ser comparado:\n");
      printf("P. População\n");
      printf("A. Área\n");
      printf("I. PIB\n");
      printf("T. Pontos Turísticos\n");
      printf("D. Densidade Populacional (menor valor vence)\n");
      scanf(" %c", &segundoAtributo);
  
      if (primeiroAtributo == segundoAtributo)
      {
          printf("Mesmo atributo, escolha outro!\n");
      } else {
          switch (segundoAtributo)
          {
      case 'P':
      case 'p':
          printf("Você escolheu a opção População!\n");
          printf("Comparando População:\n");
          printf("%s: %d habitantes\n", nome1, populacao1);
          printf("%s: %d habitantes\n", nome2, populacao2);
          resultado2 = populacao1 > populacao2 ? 1 : 0;
          break;
  
      case 'A':
      case 'a':
          printf("Você escolheu a opção Área!\n");
          printf("Comparando área:\n");
          printf("%s: %.2f km²\n", nome1, area1);
          printf("%s: %.2f km²\n", nome2, area2);
          resultado2 = area1 > area2 ? 1 : 0;
          break;
  
      case 'I':
      case 'i':
          printf("Você escolheu a opção PIB!\n");
          printf("Comparando PIB:\n");
          printf("%s: %.2f bilhões\n", nome1, pib1);
          printf("%s: %.2f bilhões\n", nome2, pib2);
          resultado2 = pib1 > pib2 ? 1 : 0;
          break;
  
      case 'T':
      case 't':
          printf("Você escolheu a opção Pontos Turísticos!\n");
          printf("Comparando Número de pontos turísticos:\n");
          printf("%s: %d\n", nome1, pontos1);
          printf("%s: %d\n", nome2, pontos2);
          resultado2 = pontos1 > pontos2 ? 1 : 0;
          break;
      
      case 'D':
      case 'd':
          printf("Você escolheu a opção Densidade Populacional! (Menor vence)\n");
          printf("Comparando densidade populacional:\n");
          printf("%s: %.2f hab/km²\n", nome1, densidade1);
          printf("%s: %.2f hab/km²\n", nome2, densidade2);
          resultado2 = densidade1 < densidade2 ? 1 : 0;
          break;
  
      default:
      printf("Opção inválida!");
          break; //fim do switch do jogo
    }

    if (resultado1 && resultado2)
    {
        printf("Parabéns, você venceu!\n");
    }else if (resultado1 != resultado2)
    {
        printf("Empatou!\n");
    }else{
        printf("Infelizmente, você perdeu!\n");
    }
    
    
    
    } 
        break;

    //case 2 do menu interativo principal
    case 2:
    printf("REGRAS DO SUPER TRUNFO:\n");
    printf("O Super Trunfo é um jogo de batalha de cartas, onde você mesmo pode cadastrar informações de cidades e batalhar com outra carta. Você poderá escolher atributos a serem comparados para a batalha e jogar de forma ilimitada.\n");
    break;
    case 3:
    printf("saindo do programa...\n");
    default:
        break;
    }


    return 0;
}
