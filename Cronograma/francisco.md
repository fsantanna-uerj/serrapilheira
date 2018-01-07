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
            - [x] Timer, Pinos
            - [ ] ADC, Serial, SPI

- Documentação
    - [x] Subir manuais e relatórios
    - [x] Apresentação UERJ

- Projeto
    - Definir valores de bolsas
    - Encontrar alunos

### `[7-Jan]` O que foi feito?

- Implementação
    - Sem problemas com SAMD.
    - Fiz os drivers de timers e pinos.
    - Os outros drivers vão ficar mais para frente.

- Documentação
    - Tarefas feitas.

- Projeto
    - Ficou para a próxima semana

-------------------------------------------------------------------------------
`[8-Jan] -> [14-Jan]`
-------------------------------------------------------------------------------

### `[8-Jan]` O que será feito?

- Implementação
    - [ ] Fix issues:
            - fsantanna/ceu-arduino#11
            - fsantanna/ceu-arduino#12
    - [ ] Runtime com biblioteca low power da RocketScream:
        - http://www.rocketscream.com/blog/2011/07/04/lightweight-low-power-arduino-library/
        - Substituir a implementação específica para AVRs
        - Entrar em modo sleep básico
    - [ ] Mecanismo para sleep mode ótimo
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
    - Definir valores de bolsas
    - Encontrar alunos

### `[14-Jan]` O que foi feito?

-------------------------------------------------------------------------------
`[15-Jan] -> [21-Jan]`
-------------------------------------------------------------------------------
