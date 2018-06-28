-------------------------------------------------------------------------------
`[25-Jun] -> [01-Jul]`
-------------------------------------------------------------------------------

### `[25-Jun]` O que será feito?

- Projeto
    - [ ] Relatório Serrapilheira

- Implementação
    - [ ] Avaliação I2C
    - [ ] Avaliação Céu-Maker

### `[01-Jul]` O que foi feito?

-------------------------------------------------------------------------------
`[18-Jun] -> [24-Jun]`
-------------------------------------------------------------------------------

### `[18-Jun]` O que será feito?

- (não preenchido)

### `[24-Jun]` O que foi feito?

- Viagem EUA - PLDI - LCTES

-------------------------------------------------------------------------------
`[11-Jun] -> [17-Jun]`
-------------------------------------------------------------------------------

### `[11-Jun]` O que será feito?

- (não preenchido)

### `[17-Jun]` O que foi feito?

- UERJ - Provas

- Documentação
    - Preparação LCTES
        - Apresentação dos 2 artigos

-------------------------------------------------------------------------------
`[04-Jun] -> [10-Jun]`
-------------------------------------------------------------------------------

### `[04-Jun]` O que será feito?

- (não preenchido)

### `[10-Jun]` O que foi feito?

- Implementação
    - GPIO AVR e SAMD
        - [ ] Problemas com o GPIO
            - continuar a resolver questão PIN/Pin

-------------------------------------------------------------------------------
`[28-Mai] -> [03-Jun]`
-------------------------------------------------------------------------------

### `[28-Mai]` O que será feito?

- Projeto
    - Contratação João
    - [ ] Enviar contrato Anna

- Documentação
    - [ ] v0.40
    - [ ] Drivers de Céu-Arduino
        - estrutura em ceu-arduino
        - drivers individualmente

- Implementação
    - [x] Retomar SAMD
    - [ ] Céu-Maker
        - serial
        - exemplo joystick controlando tela

### `[03-Jun]` O que foi feito?

- Projeto
    - Contratação do João depende de convênio FUNARBE-UERJ
    - Envio do contrato da Anna está esperando contratação do João

- Documentação
    - Ficou pendente
    - LCTES: Artifact "badges"

- Implementação
    - SAMD: adicionado projeto "arch-samd"
        - GPIO, RTC
    - Céu-Maker: Anny está trabalhando com serial, passar exemplo do joystick para ela?

-------------------------------------------------------------------------------
`[21-Mai] -> [27-Mai]`
-------------------------------------------------------------------------------

### `[21-Mai]` O que será feito?

- Projeto
    - [ ] Contratação João

- Implementação
    - [x] Vídeos gasto de energia
    - [x] Driver HC-SCR04
    - [x] Driver PIN-03
    - [x] IR TCRT5000
    - [x] Bugs de Céu
        - Pointer accesses
    - [x] Separação de bibliotecas
    - [x] Remover poll? Ao menos da árvore (tirar isrs como especial)

### `[27-Mai]` O que foi feito?

- Projeto
    - Contratação pendente

- Implementação
    - Subi os vídeos para o YouTube:
        - https://www.youtube.com/playlist?list=PL_NafSplpnh6CQGEx8ustNB8uDF1bL7v1
    - Drivers foram bem simples de fazer.
    - Bugs de Céu corrigidos
    - Separação de bibliotecas
        - arch-avr    driver-gpio    driver-nrf24l01  driver-usart   driver-wdt
          driver-adc  driver-hcsr04  driver-spi       driver-wclock  protocol-rf24network
    - Preparação da versão v0.40
        - todos os projetos (ceu, ceu-arduino, ceu-libuv, ceu-sdl, pico-ceu, ceu-maker, freechains)
        - callbacks estáticas
    - Criação das organizações:
        - https://github.com/ceu-lang
        - https://github.com/ceu-arduino

-------------------------------------------------------------------------------
`[14-Mai] -> [20-Mai]`
-------------------------------------------------------------------------------

### `[14-Mai]` O que será feito?

- (não preenchido)

### `[20-Mai]` O que foi feito?

- Projeto
    - [x] Contratação Anna
    - [x] Compra Notebook
    - [x] Versões finais LCTES

- Implementação
    - Céu
        - Inline de code/awaits
            - OK, mas casos complexos dão erro. O certo é pelo menos não gerar
              código para code/awaits nunca chamados.
        - [x] Callbacks estáticas
            - Em vez do `switch`, usar função diretamente.
        - [x] ISRs estáticas
            - Em vez de callbacks, usar função diretamente.
    - Céu-Arduino
        - Ajustes no WDT, NRF, RF24-Network
    - Gasto de Energia
        - [x] Testes completos para `blink`, `nrf`, `rf24-network`.

-------------------------------------------------------------------------------
`[07-Mai] -> [13-Mai]`
-------------------------------------------------------------------------------

### `[07-Mai]` O que será feito?

- Implementação
    - Céu
        - Gasto de Memória
            - [x] Inline de code/awaits
            - Remover código morto
            - Otimizar eventuais facilidades
    - RF24Network
        - Sleep

### `[13-Mai]` O que foi feito?

-------------------------------------------------------------------------------
`[30-Abr] -> [06-Mai]`
-------------------------------------------------------------------------------

### `[30-Abr]` O que será feito?

- Projeto
    - Procurar alunos de Engenharia da Computação
        - Colocar cartaz
        - Procurar grupo
    - [ ] Nota Multímetro
    - [ ] Comprar bateria Notebook

- Implementação
    - Continuar RF24Network
        - TX
        - Sleep em C

### `[06-Abr]` O que foi feito?

- Implementação
    - RF24Network
        - Terminado TX

-------------------------------------------------------------------------------
`[23-Abr] -> [29-Abr]`
-------------------------------------------------------------------------------

### `[23-Abr]` O que será feito?

- Projeto
    - [ ] Contratação de Estagiário
    - [x] Compra de Passagem
    - [x] Pontapé inicial GSoC

- Implementação
    - [ ] Protocolo RFNetwork em Céu
        - experimento de energia
        - deve levar algumas semanas

### `[29-Abr]` O que foi feito?

- Projeto
    - Passagem comprada
    - Conversas iniciais com Anny e Naveen
    - Ainda não encontrei nenhum estagiário

- Implementação
    - Parte RX do RF24Network implementada
        - roteamento
        - destino
    - Ainda falta:
        - TX
        - modo sleep no Arduino
        - Rede com mais nós

- Feriado

-------------------------------------------------------------------------------
`[16-Abr] -> [22-Abr]`
-------------------------------------------------------------------------------

### `[16-Abr]` O que será feito?

- Projeto
    - Encontro Serrapilheira
        - 3 vídeos
        - Presencial
    - [x] Iniciar com FUNARBE

- Implementação
    - Experimentos de gasto de energia
        - [ ] Mini-Ultra 8MHz

### `[22-Abr]` O que foi feito?

- Implementação
    - Correção de bug crítico na inicialização de `code/await` de Céu

- Projeto
    - Evento de 3 dias Início do Serrapilheira

-------------------------------------------------------------------------------
`[09-Abr] -> [15-Abr]`
-------------------------------------------------------------------------------

### `[09-Abr]` O que será feito?

- Documentação
    - Artigo LCTES
        - [x] Artifact Evaluation

- Projeto
    - Encontro Serrapilheira
        - [x] 3 vídeos
        - [x] 3 textos
        - [x] 1 slide
    - [x] Contrato no jurídico da UERJ

- Extras
    - Preparação REBLS'17
        - [x] Call for papers

### `[15-Abr]` O que foi feito?

- Documentação
    - Artigos LCTES
        - Artifact submetido
        - Versões camera-ready dos dois artigos aceitos

- Projeto
    - Encontro Serrapilheira
        - Ainda faltam os vídeos
    - Contrato finalmente assinado

- Implementação
    - Experimentos de gasto de energia
        - nrf-tx-rf-seq

```
            UNO     MEGA    PRO
Arduino     43.3    55.4    20
Céu (timer) 35      32      16.24
Céu (recv)  23      26      2.89
---------------------------------
Blink                       3.8-4.6
```

-------------------------------------------------------------------------------
`[02-Abr] -> [08-Abr]`
-------------------------------------------------------------------------------

### `[02-Abr]` O que será feito?

- Implementação
    - SAMD
        - driver SPI

### `[08-Abr]` O que foi feito?

- Implementação
    - Céu
        - correções de bugs
    - SAMD
        - driver SPI em andamento
            - envia e recebe

- Extras
    - Preparação REBLS'17
        - comitê de programa

-------------------------------------------------------------------------------
`[26-Mar] -> [01-Abr]`
-------------------------------------------------------------------------------

### `[26-Mar]` O que será feito?

- Implementação
    - SAMD
        - [ ] entender modos standby
        - começar driver de rádio

### `[01-Abr]` O que foi feito?

- Implementação
    - SAMD
        - driver SPI em andamento
            - testes Arduino (master/slave)

- Projeto
    - Textos de divulgação científica
    - Contrato enviado novamente à UERJ

- Feriado (Páscoa)

-------------------------------------------------------------------------------
`[19-Mar] -> [25-Mar]`
-------------------------------------------------------------------------------

### `[19-Mar]` O que será feito?

- Implementação
    - Nova versão Céu
    - [x] Try Céu Online

- Documentação
    - [x] Nova versão de Céu

### `[25-Mar]` O que foi feito?

- Projeto
    - Versão em português do projeto para análise do jurídico da UERJ
    - PC Chair do REBLS'18
        - envio de convites para o comitê de programa
    - Multímetro comprado
        - https://www.dutramaquinas.com.br/p/multimetro-digital-portatil-17b-43-4404231

-------------------------------------------------------------------------------
`[12-Mar] -> [18-Mar]`
-------------------------------------------------------------------------------

### `[12-Mar]` O que será feito?

- Implementação
    - [x] Adaptar nova versão de Céu para as plataformas SDL, Arduino, libuv, freechains, pico-Céu

- Projeto
    - [x] Workshop LAAS-CNRS
        - apresentação e participação durante 3 dias
    - [x] Preparação de texto para divulgação científica
    - [ ] Assinatura do contrato por parte do Reitor

### `[18-Mar]` O que foi feito?

- Implementação
    - Ainda correções de bugs em Céu
    - Atualização de todas as plataformas ok

- Documentação
    - Artigos LCTES provavelmente aceitos
        - [x] Preparar rebuttals

- Projeto
    - LAAS-CNRS ok
    - Texto ok
    - O contrato está no jurídico da UERJ

-------------------------------------------------------------------------------
`[05-Mar] -> [11-Mar]`
-------------------------------------------------------------------------------

### `[05-Mar]` O que será feito?

- Implementação
    - [x] Nova versão Céu
    - [x] Experimentos de gasto de energia
    - [ ] Aplicação IoT disponível
    - Bug ADC
        - Usar contador de referências para `PM_ADC`
    - Verificar otimizações (ver 22-Jan)
        - Diminuir tamanho do executável (comparando com exemplos em C puro)
        - Diminuir uso da pilha

### `[11-Mar]` O que foi feito?

- Implementação
    - Diversos bugs foram consertados em Céu

As atividades foram transferidas para as próximas semanas.

-------------------------------------------------------------------------------
`[26-Fev] -> [04-Mar]`
-------------------------------------------------------------------------------

### `[26-Fev]` O que será feito?

- Implementação
    - [ ] Bug ADC
        - Usar contador de referências para `PM_ADC`
    - [x] Escalonador baseado na semântica formal de Céu

### `[04-Mar]` O que foi feito?
    - Escalonador OK
        - Redução de 45k para 31k.

```
$ make CEU_SRC=samples/nrf24l01-02.ceu ARD_PORT=/dev/ttyACM1 ARD_BOARD=mega CEU_ISR=true
<...>
Sketch uses 85010 bytes (33%) of program storage space. Maximum is 253952 bytes.
Global variables use 1470 bytes (17%) of dynamic memory, leaving 6722 bytes for local variables. Maximum is 8192 bytes.
-- dynamic
Sketch uses 85066 bytes (33%) of program storage space. Maximum is 253952 bytes.
Global variables use 1470 bytes (17%) of dynamic memory, leaving 6722 bytes for local variables. Maximum is 8192 bytes.
-- ceu_assert
Sketch uses 79608 bytes (31%) of program storage space. Maximum is 253952 bytes.
Global variables use 1470 bytes (17%) of dynamic memory, leaving 6722 bytes for local variables. Maximum is 8192 bytes.
-- pool
Sketch uses 78476 bytes (30%) of program storage space. Maximum is 253952 bytes.
Global variables use 1444 bytes (17%) of dynamic memory, leaving 6748 bytes for local variables. Maximum is 8192 bytes.
-- await/abs
Sketch uses 45358 bytes (17%) of program storage space. Maximum is 253952 bytes.
Global variables use 1214 bytes (14%) of dynamic memory, leaving 6978 bytes for local
-- scheduler
Sketch uses 31342 bytes (12%) of program storage space. Maximum is 253952 bytes.
Global variables use 1782 bytes (21%) of dynamic memory, leaving 6410 bytes for local variables. Maximum is 8192 bytes.
```

-------------------------------------------------------------------------------
`[19-Fev] -> [25-Fev]`
-------------------------------------------------------------------------------

### `[19-Fev]` O que será feito?

- Documentação
    - Artigos LCTES
        - [x] Terminar e submeter os artigos

### `[25-Fev]` O que foi feito?

- Implementação
    - Otimizações
        - Diminuir tamanho do executável (comparando com exemplos em C puro)
            - Resolvido. De fato, esse era o problema.

- Documentação
    - Artigos LCTES
        - Artigos submetidos!

-------------------------------------------------------------------------------
`[12-Fev] -> [18-Fev]`
-------------------------------------------------------------------------------

### `[12-Fev]` O que será feito?

- Implementação
    - Otimizações
        - Diminuir tamanho do executável (comparando com exemplos em C puro)
            - [x] A principal ineficiência é a maneira conservadora em que as trilhas são disparadas em Céu (spawn/await)
        - Diminuir uso da pilha
            - [x] Trocar chamadas em C pelo uso anterior de *STACKED*, o que também vai refletir melhor a semântica formal de Céu

- Documentação
    - Artigos LCTES
        - [x] Submeter abstracts

- Feriado (Carnaval)

### `[18-Fev]` O que foi feito?

- Implementação
    - Nada foi feito.

- Documentação
    - Artigos LCTES: foco da semana ficou por conta dos artigos
        - Full
        - Short

- Feriado (Carnaval)

-------------------------------------------------------------------------------
`[05-Fev] -> [11-Fev]`
-------------------------------------------------------------------------------

### `[05-Jan]` O que será feito?

- Implementação
    - Otimizações
        - Diminuir tamanho do executável (comparando com exemplos em C puro)

- Documentação
    - Artigos LCTES
        - [x] Semântica
        - [x] Gerenciamento de Energia

- Feriado (Carnaval)

### `[11-Jan]` O que foi feito?

- Implementação
    - Otimizações
        - Diminuir tamanho do executável (comparando com exemplos em C puro)
            - Compilação opcional de algumas features de Céu:
                - Memória dinâmica
                - Suporte a pools
                - Assertiva global

- Documentação
    - Artigos LCTES
        - Semântica
            - Artigo ressuscitado e readaptado para nova submissão
                - https://github.com/fsantanna-no/lctes-semantica
            - Muitas revisões

-------------------------------------------------------------------------------
`[28-Jan] -> [04-Fev]`
-------------------------------------------------------------------------------

### `[28-Jan]` O que será feito?

- Implementação
    - Experimentos de gasto de energia
    - Aplicação IoT disponível

- Documentação
    - Artigo
        - SCOPES (??, 9/2, Alemanha), LCTES/JSA (B2/B1, 16/02, EUA), EMSOFT/CASES (??/B1, 27/03, Itália)

- Projeto
    - Comprar Multímetro
    - [ ] (Futuro) Smart Watch
        - ARM, RTC, 3G, Touch Screen
        - uTCP, Jabber

### `[04-Fev]` O que foi feito?

- Implementação
    - Otimizações
        - Diminuir tamanho do executável (comparando com exemplos em C puro)
            - Novas opções de compilação para permitir otimizações (--ceu-features)
            - Alguns avanços, mas o principal vai ser eliminar o número de
              trails para chamadas a `await Code()`

- Documentação
    - Artigo
        - [x] Reviver artigo da semântica de Céu. Mandar para o LCTES.

-------------------------------------------------------------------------------
`[22-Jan] -> [28-Jan]`
-------------------------------------------------------------------------------

### `[22-Jan]` O que será feito?

- Implementação
    - AVR
        - [x] Driver nRF24
        - [ ] Driver WDT, mas sem ser para *wclock*
    - SAMD
        - [ ] Ajeitar implementação para nova estrutura
        - [ ] Verificar se contador WDT pode ser lido
    - Otimizações
        - [ ] Diminuir tamanho do executável (comparando com exemplos em C puro)
        - [ ] Diminuir uso da pilha

### `[28-Jan]` O que foi feito?

Foco da semana ficou no driver nRF24.
Com ele terminado, já podemos fazer aplicações IoT mais complexas.

- Implementação
    - Driver nRF24L01 puramente em cima do SPI
        - Nenhuma dependência da biblioteca original
        - Abstrações
        - Interrupções
        - PM
    - Driver SPI
        - Suporte automático ao CS/CSN
        - Remoção de testes assertivos para simplificar a implementação
        - Exemplo com "lock" para usar dois dispositivos em paralelo
    - SPI dispositivos I/O
        - simplificação para usar CS/CSN automático
    - [x] Driver PCInt
        - ATmega2560

-------------------------------------------------------------------------------
`[15-Jan] -> [21-Jan]`
-------------------------------------------------------------------------------

### `[15-Jan]` O que será feito?

- Implementação
    - [x] Mecanismo para sleep mode ótimo
        - Testar três modos na mesma aplicação: timer, ADC, pino externo
    - [ ] SAMD: entender modos idle (`IDLE_[0-2]`) vs standby
    - [x] Driver watchdog. Vai permitir modo mais profundo para timer.

- Projeto
    - [ ] Definir alunos e valores de bolsas
    - [x] Comprar multímetro
        - Extech 430
            - http://www.rocketscream.com/blog/2011/04/26/mini-ultra-8-mhz-current-consumption-part-2/
            - https://www.tecnoferramentas.com.br/multimetro-digital-profissional-true-rms-com-11-funcoes-extech-ex430-002323/p
            - http://www.loja-flk-rio.com.br/p-6137870-Multimetro-Digital-Extech-EX430
        - Fluke 17b+
            - https://www.dutramaquinas.com.br/p/multimetro-digital-portatil-17b-43-4404231

### `[21-Jan]` O que foi feito?

- Implementação
    - Sleep mode ótimo: OK
    - Driver WDT: OK
    - [x] Driver `wclock/smart` que utiliza WDT/Timer1
        - Não funciona se não puder ler contador do WDT
    - [x] Driver AVR/USART com suporte a PM
    - [x] Driver AVR/SPI com suporte a PM
    - [x] Todos os samples refatorados e retestados
    - [x] ATMEGA-2560 (timer1, usart, adc, pin-02, SPI)

- Projeto
    - [ ] Retomar Céu-Maker

-------------------------------------------------------------------------------
`[8-Jan] -> [14-Jan]`
-------------------------------------------------------------------------------

### `[8-Jan]` O que será feito?

- Implementação
    - Fix issues:
        - [x] fsantanna/ceu-arduino#11
        - [x] fsantanna/ceu-arduino#12
        - [x] fsantanna/ceu-arduino#13
    - [x] Runtime com biblioteca low power da RocketScream:
        - http://www.rocketscream.com/blog/2011/07/04/lightweight-low-power-arduino-library/
        - Substituir a implementação específica para AVRs
        - Entrar em modo sleep básico
    - [x] Mecanismo para sleep mode ótimo
    - [ ] Rádio no SAMD
        - Avaliar as bibliotecas RadioHead, LowPowerLab, e LMIC
            - RadioHead abrange mais rádios? LowPower melhor? LMIC?
            - http://www.airspayce.com/mikem/arduino/RadioHead/
            - https://github.com/LowPowerLab/RFM69
            - https://github.com/matthijskooijman/arduino-lmic
    - [ ] RTC no SAMD
        - http://www.rocketscream.com/blog/docs-item/using-rtc-in-low-power-mode-on-mini-ultra-pro/
        - Permite menor modo de energia possível

- Projeto
    - [x] Apresentação na UERJ
    - Definir alunos e valores de bolsas
    - [x] Multímetro
        - Fluke 106/116
            - https://produto.mercadolivre.com.br/MLB-682340747-multimetro-digital-fluke-106-eletricista-_JM
            - https://produto.mercadolivre.com.br/MLB-828320010-multimetro-fluke-116-havacembalado-_JM
        - Extech EX330
            - https://www.adafruit.com/product/308
            - https://www.tecnoferramentas.com.br/minimultimetro-de-12-funcoes-e-detector-de-tensao-sem-contato-extech-ex330-062654/p
            - https://produto.mercadolivre.com.br/MLB-735629677-multimetro-digital-extech-ex330-_JM
        - Extech 430
            - http://www.rocketscream.com/blog/2011/04/26/mini-ultra-8-mhz-current-consumption-part-2/
            - https://www.tecnoferramentas.com.br/multimetro-digital-profissional-true-rms-com-11-funcoes-extech-ex430-002323/p

### `[14-Jan]` O que foi feito?

- Implementação
    - Fix issues: OK
    - Runtime com biblioteca low power da RocketScream: OK
    - Mecanismo para sleep mode ótimo
        - API `ceu_pm_sleep`, `ceu_pm_set`
        - Faltam testes para níveis variados (timer,adc,pin)
    - Drivers do SAMD
        - http://www.microchip.com/wwwproducts/en/atsamd20g18
        - ADC feito, falta serial e SPI, não são prioridades
    - ADC / Timer API: separação entre driver genérico e específicos
    - Rádio e RTC não são prioridades

- Projeto
    - Apresentação na UERJ: OK
    - Opção pelo Extech 430 que é usado nos testes da RocketScream, ainda não comprado
    - O resto ficou para a próxima semana

-------------------------------------------------------------------------------
`[1-Jan] -> [7-Jan]`
-------------------------------------------------------------------------------

### `[1-Jan]` O que será feito?

- Implementação
    - Arquitetura SAMD
        - [x] Funcionar no Arduino
        - [x] Funcionar com Céu
        - [x] Funcionar com ISRs
        - [ ] Drivers
            - [x] Timer, Pinos, ADC
            - [ ] Serial, SPI

- Documentação
    - [x] Subir manuais e relatórios
    - [x] Apresentação UERJ

- Projeto
    - Definir valores de bolsas
    - Encontrar alunos

### `[7-Jan]` O que foi feito?

- Implementação
    - Sem problemas com SAMD
    - Fiz os drivers de timers e pinos
    - Os outros drivers vão ficar mais para frente

- Documentação
    - Tarefas feitas

- Projeto
    - Ficou para a próxima semana


