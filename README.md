# FECAP - Fundação de Comércio Álvares Penteado

<p align="center">
<a href= "https://www.fecap.br/"><img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRhZPrRa89Kma0ZZogxm0pi-tCn_TLKeHGVxywp-LXAFGR3B1DPouAJYHgKZGV0XTEf4AE&usqp=CAU" alt="FECAP - Fundação de Comércio Álvares Penteado" border="0"></a>
</p>

# Sistema de detecção e alerta em tanques de agricultura

## Blue Future

## Integrantes: <a href="https://www.linkedin.com/in/jos%C3%A9-almeida-80063a256/">José Bento</a>, <a href="https://www.linkedin.com/in/gabrielly-cintra/">Gabrielly Cintra</a>, <a href="https://www.linkedin.com/in/felipe-andradet/">Felipe de Andrade</a>, <a href="https://www.linkedin.com/in/vinicius-kingo-1b769030a/">Vinicius Kingo</a>.

## Professores Orientadores: <a href="https://www.linkedin.com/in/victorbarq/">Victor Bruno</a>, <a href="https://www.linkedin.com/in/adriano-valente-534576135/"> Adriano Felix Valente</a>.
 
<p align="center">
<img src="https://pix4free.org/assets/library/2021-01-20/originals/game.jpg" alt="NOME DO JOGO" border="0">
  Projeto desenvolvido por: <a href="https://www.linkedin.com/in/jos%C3%A9-almeida-80063a256/">José Bento</a>, <a href="https://www.linkedin.com/in/gabrielly-cintra/">Gabrielly Cintra</a>, <a href="https://www.linkedin.com/in/felipe-andradet/">Felipe de Andrade</a>, <a href="https://www.linkedin.com/in/vinicius-kingo-1b769030a/">Vinicius Kingo</a>.

</p>


DESCRIÇÃO DO PROJETO
.
<br><br>
O projeto "Sistema de Detecção e Alerta de Vazamentos em Tanques de Agricultura" foi
desenvolvido para abordar um problema significativo enfrentado pelos agricultores e pela
indústria agrícola: vazamentos em tanques de armazenamento agrícola. Estes vazamentos
podem resultar em danos ambientais, contaminação do solo e da água, além de causar
perdas econômicas substanciais. Tendo como objetivo principal deste projeto é promover
uma gestão agrícola mais segura, sustentável e responsável por meio da implementação de
um sistema eficiente de detecção e alerta de vazamentos em tanques de armazenamento
agrícola.
<br><br>

## 🛠 Estrutura de pastas

-Raiz<br>
|<br>
|-->documentos<br>
  &emsp;|-->antigos<br>
  &emsp;|Documentação.docx<br>
|-->executáveis<br>
  &emsp;|-->windows<br>
  &emsp;|-->android<br>
  &emsp;|-->HTML<br>
|-->imagens<br>
|-->src<br>
  &emsp;|-->Backend<br>
  &emsp;|-->Frontend<br>
|readme.md<br>

A pasta raiz contem dois arquivos que devem ser alterados:

<b>README.MD</b>: Arquivo que serve como guia e explicação geral sobre seu projeto. O mesmo que você está lendo agora.

Há também 4 pastas que seguem da seguinte forma:

<b>documentos</b>: Toda a documentação estará nesta pasta.

<b>executáveis</b>: Binários e executáveis do projeto devem estar nesta pasta.

<b>imagens</b>: Imagens do sistema

<b>src</b>: Pasta que contém o código fonte.

## 🛠 Equipamentos utilizados

🛠 Hardware
<br>ESP32;</br>
<br>Sensor ultrassônico;</br>
<br>Protobord;</br>
<br>Pequeno reservatório;</br>
<br>Jumpers Macho e Fêmea.</br>

🛠 Software 
<bR>Arduino IDE</br>
<bR>Blynk</br>


## 🛠 Instalação Arduino IDE

•Instale o Arduino IDE a partir do site oficial.

• Abra o Arduino IDE após a instalação.


⚙Configuração do Arduino IDE para ESP32:

• No Arduino IDE, vá em File > Preferences.

• Adicione a URL a seguir ao campo "Additional Board Manager URLs"

https://dl.espressif.com/dl/package_esp32_index.json

• Vá em Tools > Board > Boards Manager, procure por "esp32" e clique em instalar.

## 💻 Configuração para Desenvolvimento

Descreva como instalar todas as dependências para desenvolvimento e como rodar um test-suite automatizado de algum tipo. Se necessário, faça isso para múltiplas plataformas.

Para abrir este projeto você necessita das seguintes ferramentas:

-<a href="https://godotengine.org/download">GODOT</a>

```sh
make install
npm test
Coloque código do prompt de comnando se for necessário
```

## 🗃 Histórico de lançamentos

A cada atualização os detalhes devem ser lançados aqui.

* 0.1.1 - 10/04/2024
    * Planejamento do projeto e aquisição dos materiais
* 0.1.2 - 3/05/2024
    * Inicio da construção do código e do circuito 
* 0.1.3 - 10/05/2024
    * Integração do Esp32 com o Blynk
 * 0.1.4 - 20/05/2024
    * Organização do github e fichas do projeto
 * 0.1.5 - 22/05/2024
    *Últimos testes do sensor e aplicativo


## 📋 Licença/License

<p xmlns:cc="http://creativecommons.org/ns#" xmlns:dct="http://purl.org/dc/terms/"><a property="dct:title" rel="cc:attributionURL" href="https://github.com/orgs/2024-1-NADS1-A/teams/grupo4/members">BlueFuture</a> by <a rel="cc:attributionURL dct:creator" property="cc:attributionName" href="https://github.com/orgs/2024-1-NADS1-A/teams/grupo4/members">FECAP, Felipe Andrade, José Bento, Gabrielly Cintra, Vinicius Kingo</a> is licensed under <a href="https://creativecommons.org/licenses/by/4.0/?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">Creative Commons Attribution 4.0 International<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1" alt=""><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1" alt=""></a></p>

## 🎓 Referências

Aqui estão as referências usadas no projeto.

1. <https://www.youtube.com/watch?v=Iuxl0k4lnqA&t=310s>
2. <https://youtube.com/shorts/3dVehESr_Ko?si=J7_kgNSpMMvMzoxJ>
3. <https://blog.eletrogate.com/controlando-componentes-com-o-esp32-e-o-blynk/>
4. <https://www.circuito.io/app?components=513,13959,360217>
5. <https://blynk.io/blog/esp32-blynk-iot-platform-for-your-connected-product>
