# Tarefa: Clock e Temporizadores

## Descrição
Bem-vindos ao repósitório da tarefa de clock e temporizadores. Essa tarefa que envovlve duas atividades feitas com o abjetivo de assimilar os conceitos aprendidos durante o capítulo 5 da unidade de microcontroladores da capacitação do EmbarcaTech.

## 🚦 Atividade 1 - Temporizador Periódico (Semafóro)

Essa atividade tem como objetivo a criação de um semafóro com três leds alternando a cada **3 segundos** usando a função add_reapeating_timer_ms().

### 📌 Requisitos
✔ O LED vermelho acende primeiro, depois o amarelo e, por fim, o verde.\
✔ O tempo de cada cor é de 3 segundos.\
✔ O código deve exibir uma mensagem via Serial a cada segundo.

## Atividade 2 - Temporizador de um disparo

O objetivo desta atividade é criar um sistema que aciona três LEDs ao pressionar um botão. O acionamento segue uma sequência temporizada usando add_alarm_in_ms().

### 📌 Requisitos

✔ Ao pressionar o botão, os três LEDs acendem.\
✔ Após 3 segundos, apenas dois LEDs permanecem acesos.\
✔ Após mais 3 segundos, apenas um LED permanece aceso.\
✔ No fim os três LEDs estão apagados.\
✔ Durante esse tempo, o botão não pode ser pressionado novamente.

## Componentes Utilizados

### Hardware
- **Microcontrolador RP 2040**
- **Raspberry Pi Pico W**
- **LED RGB**
- **Matriz de LED RGB**
- **Push Buttons**

### Software
- **Linguagem C**
- **IDE Visual Studio Code**
- **Extensões do Visual Studio Code**:
  - Raspberry Pi Pico
  - CMake Tools
  - Wokwi
  - C/C++

 ### **Pré-requisitos para utilização**
Certifique-se de que os seguintes itens estão instalados:

1. **Visual Studio Code**  
   - Ambiente de desenvolvimento integrado (IDE) para edição, compilação e depuração do código.

2. **Git**  
   - Ferramenta para versionamento de código e controle de repositórios.  

3. **Extensões do Visual Studio Code**  
   - **C/C++**: Suporte à linguagem C/C++ para análise de código, depuração e IntelliSense.  
   - **CMake Tools**: Para gerenciar e configurar projetos que utilizam o CMake.  
   - **Raspberry Pi Pico**: Extensão para facilitar o desenvolvimento e a comunicação com a placa Raspberry Pi Pico.
   - **Wokwi**: Extensão para simular a Raspberry Pi Pico W.

4. **Versão 2.0.0+ do Raspberry Pi Pico SDK**  
   - Certifique-se de que a versão 2.0.0 ou superior do SDK para Raspberry Pi Pico está instalada.

5. **Opcional: Zadig**  
   - Software necessário para instalar drivers USB.  
   - Permite a conexão via USB da placa Raspberry Pi Pico com o desktop ou notebook.  
---

## **Como executar o Projeto**

### **1. Configuração Inicial**
1. Certifique-se de que todas as dependências acima estão instaladas no seu computador.
2. Clone o repositório do projeto usando os comandos abaixo no terminal:  
   ```bash
   git init
   ```
   ```bash
   git clone https://github.com/Arthuros0/Tarefa_temporizadores.git
   ```
3. Abra o projeto clonado no VS Code

### **2. Compilação e Carregamento na Placa**
1. Importe e compile a pasta da atividade desejada individualmente usando a extensão Raspberry Pi Pico no **Visual Studio Code**.
2. Após a compilação bem-sucedida, abra o arquivo diagram json e execute a simulação.

