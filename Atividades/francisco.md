-------------------------------------------------------------------------------
`[05-Mar] -> [11-Mar]`
-------------------------------------------------------------------------------

### `[05-Mar]` O que será feito?

- Implementação
    - [ ] Nova versão Céu
    - [ ] Experimentos de gasto de energia
    - [ ] Aplicação IoT disponível
    - Bug ADC
        - Usar contador de referências para `PM_ADC`
    - Verificar otimizações (ver 22-Jan)
        - Diminuir tamanho do executável (comparando com exemplos em C puro)
        - Diminuir uso da pilha

### `[11-Mar]` O que foi feito?

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
    - [ ] Comprar multímetro
        - Extech 430
            - http://www.rocketscream.com/blog/2011/04/26/mini-ultra-8-mhz-current-consumption-part-2/
            - https://www.tecnoferramentas.com.br/multimetro-digital-profissional-true-rms-com-11-funcoes-extech-ex430-002323/p
            - http://www.loja-flk-rio.com.br/p-6137870-Multimetro-Digital-Extech-EX430

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


