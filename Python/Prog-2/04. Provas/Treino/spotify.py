def spo1(playlists, musicas, usuarios):
    dura = []
    dura1 = []
    
    for i in range(len(playlists)):
        som = 0
        sos = 0
        for j in range(len(playlists[i][2])):
            som += musicas[playlists[i][2][j]][2][0]
            sos += musicas[playlists[i][2][j]][2][1]
        tup = (som,sos)
        dura.append(tup)
    
    for k in range(len(dura)):
        if dura[k][1] >= 60:
            sos = dura[k][1]%60
        som = dura[k][0] + dura[k][1]//60
        if dura[k][0] >= 60:
            som = dura[k][0]%60
            soh = dura[k][0]//60
            tup = (soh, som, sos)
            dura1.append(tup)
        else:
            soh = 0
            tup = (soh, som, sos)
            dura1.append(tup)
        if sos < 10:
            sos = str(sos)
            sos = '0' + sos
        if som < 10:
            som = str(som)
            som = '0' + som
        if soh < 10:
            soh = str(soh)
            soh = '0' + soh       
            
        print(f'{playlists[k][0]} (by {usuarios.get(playlists[k][1])}: {soh}:{som}:{sos}')

def spo2(mu, playlists):
    cont = 0
    
    for i in range(len(playlists)):
        for j in range(len(playlists[i][2])):
            if mu == playlists[i][2][j]:
                cont += 1
                
    return cont

def spo3(playlists, musicas, artistas):
    maior = ''
    te = -1
    x = list(musicas.keys())
    
    for l in range(len(musicas)):
        cont = 0
        for i in range(len(playlists)):
            for j in range(len(playlists[i][2])):
                if x[l] == playlists[i][2][j]:
                    cont += 1
        if cont > te:
            te = cont
            maior = x[l]
        
        l = artistas.get(musicas[maior][0])
            
    print(f'Hit do Ano: {musicas[maior][1]} ({l})')