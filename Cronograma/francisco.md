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
`[15-Jan] -> [21-Jan]`
-------------------------------------------------------------------------------

### `[15-Jan]` O que será feito?

- Implementação
    - [ ] Mecanismo para sleep mode ótimo
        - Testar três modos na mesma aplicação: timer, ADC, pino externo
    - [ ] Driver watchdog. Vai permitir modo mais profundo para timer.

- Projeto
    - [ ] Definir alunos e valores de bolsas
    - [ ] Comprar multímetro
        - Extech 430
            - http://www.rocketscream.com/blog/2011/04/26/mini-ultra-8-mhz-current-consumption-part-2/
            - https://www.tecnoferramentas.com.br/multimetro-digital-profissional-true-rms-com-11-funcoes-extech-ex430-002323/p

### `[21-Jan]` O que foi feito?

-------------------------------------------------------------------------------
`[22-Jan] -> [29-Jan]`
-------------------------------------------------------------------------------
