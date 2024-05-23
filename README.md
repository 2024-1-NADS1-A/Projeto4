# FECAP - Fundação de Comércio Álvares Penteado

<p align="center">
<a href= "https://www.fecap.br/"><img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRhZPrRa89Kma0ZZogxm0pi-tCn_TLKeHGVxywp-LXAFGR3B1DPouAJYHgKZGV0XTEf4AE&usqp=CAU" alt="FECAP - Fundação de Comércio Álvares Penteado" border="0"></a>
</p>

# Sistema de detecção e alerta em tanques de agricultura

## Blue Future

## Integrantes: <a href="https://www.linkedin.com/in/jos%C3%A9-almeida-80063a256/">José Bento</a>, <a href="https://www.linkedin.com/in/gabrielly-cintra/">Gabrielly Cintra</a>, <a href="https://www.linkedin.com/in/felipe-andradet/">Felipe de Andrade</a>, <a href="https://www.linkedin.com/in/vinicius-kingo-1b769030a/">Vinicius Kingo</a>.

## Professores Orientadores: <a href="https://www.linkedin.com/in/victorbarq/">Victor Bruno</a>, <a href="https://www.linkedin.com/in/adriano-valente-534576135/"> Adriano Felix Valente</a>.
 
<p align="center">
<img src="C:\Users\Fecap\Downloads\ft120.jpeg" alt="NOME DO JOGO" border="0">
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
  &emsp;|Documentação.docx<br>
|-->imagens<br>
|-->src<br>
  &emsp;|-->Backend<br>
|readme.md<br>

A pasta raiz contem dois arquivos que devem ser alterados:

<b>README.MD</b>: Arquivo que serve como guia e explicação geral sobre seu projeto. O mesmo que você está lendo agora.

<b>documentos</b>: Toda a documentação estará nesta pasta.

<b>imagens</b>: Imagens do sistema.

## 🛠 Equipamentos utilizados

🛠 Hardware
<br>•ESP32;</br>
<br>•Sensor ultrassônico;</br>
<br>•Protobord;</br>
<br>•Pequeno reservatório de 3 Litros;</br>
<br>•Jumpers Macho e Fêmea.</br>

🛠 Software 
<bR>•Arduino IDE</br>
<bR>•Blynk</br>

## 🛠 Instalação Blynk 
<br>• Entre no site do Blykn e faça login:https://blynk.io/</br>
<br>• Crie um novo projeto e obtenha as credenciais com o token de autenticação;</br>
<br>• No código do ESP32 inclua a biblioteca do Blynk e insira as credenciais;</br>
<br>• Estabeleça a conexão com o servidor do Blynk;</br>
<br>• Configure os pinos virtuais;</br>
<br>• Com a conexão, integre o ESP32 ao Blynk;</br>
<br>• Coloque o ESP32 online;</br>
<br>• Execute atualizações de firmaware OTA;</br>
<br>• Contrua a Interface;</br>
<br>• Configure o modelo, alertas, notificações e automações;</br>
<br>• Após todas as etapas a integração e interface estará pronta.</br>


## 🛠 Instalação Arduino IDE
<br>•Instale o Arduino IDE a partir no site: https://www.arduino.cc/en/software</br>
<br>• Abra o Arduino IDE após ser instalado.</br>

⚙ Configuração do Arduino IDE para ESP32:
<br>• Baixe as bibliotecas Sketch -> Include Library -> Menage Libraries -> pesquise por Blynk e instale.</br>
<br>• Instale o drive CP210x Universal Windows Driver no site Silicon Labs</br>
<br>• No Arduino IDE, vá em File > Preferences.</br>
<br>• Adicione a URL a seguir ao campo "Additional Board Manager URLs"
```sh
https://dl.espressif.com/dl/package_esp32_index.json
```
<br>• Vá em Tools > Board > Boards Manager, procure por "esp32" e clique em instalar.</br>
<br>• Conecte o ESP32 ao Blynk</br>

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
