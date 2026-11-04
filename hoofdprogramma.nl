geheel hoofdfunctie()
    geheel teller = 0

    zolang (teller < 42) dan
        als (teller % 3 == 0) dan 
            schrijf("Getal #{teller}!\n")
        anders (teller % 5 == 0) dan
            schrijf("Getal #{teller} is deelbaar door 5!\n")
        einde

        teller += 1
    einde

    schrijf("Puntkommas zijn optioneel wanneer er 1 statement op 1 regel staat!\n")
    schrijf("Maar niet"); schrijf("tussen 2 statements op 1 regel")

    geefterug (34+35)
einde
