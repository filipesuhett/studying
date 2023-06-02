import csv
import json

def veiculos_2_json(nomearq):
    jsonVeiculo = 'bdveiculos.json'
    infos = []
    txtVeiculo = 'bdveiculos.txt'
    
    with open(nomearq, 'r', encoding='utf-8') as arq, open(txtVeiculo, 'w', encoding='utf-8') as arq1:
        ler_csv = csv.reader(arq)
        for linha in ler_csv:
            arq1.write(','.join(linha) + '\n')
    
    with open(txtVeiculo, 'r', encoding='utf-8') as arq_txt:
        for linha in arq_txt:
            placa, modelo, marca, km = linha.strip().split(',')
            dic = {
                'Placa': placa,
                'Modelo': modelo,
                'Marca': marca,
                'KM': km,
            }
            infos.append(dic)
            
    with open(jsonVeiculo, 'w', encoding='utf-8') as arq_json:
        json.dump(infos, arq_json, indent=4, ensure_ascii=False)
        
    
def props_2_json(nomearq):
    jsonProprietario = 'bdproprietarios.json'
    infos = []
    txtProprietario = 'bdproprietarios.txt'
    
    with open(nomearq, 'r', encoding='utf-8') as arq, open(txtProprietario, 'w', encoding='utf-8') as arq1:
        ler_csv1 = csv.reader(arq, delimiter=';')
        for linha in ler_csv1:
            arq1.write(';'.join(linha) + '\n')
    with open(txtProprietario, 'r', encoding='utf-8') as arq_txt:
        for linha in arq_txt:
            cpf, nome, end, cel = linha.strip().split(';')
            dic = {
                'CPF': cpf,
                'Nome': nome,
                'Endereço': end,
                'Celular': cel,
            }
            infos.append(dic)
            
    with open(jsonProprietario, 'w', encoding='utf-8') as arq_json:
        json.dump(infos, arq_json, indent=4, ensure_ascii=False)        

def json_to_dic_placas(nomearjson):
    dic_car = {}
    
    with open(nomearjson, 'r', encoding='utf-8') as arq_json:
        dados_json = json.load(arq_json)
        
    for carro in dados_json:
        placa = carro['Placa'].strip()
        modelo = carro['Modelo'].strip()
        marca = carro['Marca'].strip()
        km = carro['KM'].strip()
        
        dic_car[placa] = {
            'Modelo': modelo,
            'Marca': marca,
            'KM': km
        }
        
    return dic_car    
        
    
def json_to_dic_cpfs(nomearjson):
    dic_proprietario = {}
    
    with open(nomearjson, 'r', encoding='utf-8') as arq_json:
        dados_json = json.load(arq_json)
        
    for carro in dados_json:
        cpf = carro['CPF'].strip()
        nome = carro['Nome'].strip()
        end = carro['Endereço'].strip()
        cel = carro['Celular'].strip()
        
        dic_proprietario[cpf] = {
            'Nome': nome,
            'Endereço': end,
            'Celular': cel
        }
        
    return dic_proprietario

def json_to_json(nomearq):
    nomeJsonMarca = 'bdmarcas.json'

    with open(nomearq, 'r', encoding='utf-8') as arq_json:
        dados_json = json.load(arq_json)

    dic_marcas = {}
    for carro in dados_json:
        placa = carro['Placa'].strip()
        marca = carro['Marca'].strip()

        if marca in dic_marcas:
            dic_marcas[marca].append(placa)
        else:
            dic_marcas[marca] = [placa]

    dados = {
        'dados': dic_marcas
    }

    with open(nomeJsonMarca, 'w', encoding='utf-8') as arq_new:
        json.dump(dados, arq_new, indent=4, ensure_ascii=False)

def json_to_dic_placas(nomearqjson):
    with open(nomearqjson, 'r', encoding='utf-8') as arq_json:
        dados_json = json.load(arq_json)
    
    dic_marca = {}
    if isinstance(dados_json, list):
        dados_json = dados_json[0]
    dados = dados_json.get('dados', {})
    for marca, placas in dados.items():
        dic_marca[marca] = placas

    return dic_marca
    
     
def main():
    nomeArqVeiculo = r'bdveiculos.csv'
    nomeArqProprietario = r'bdproprietarios.csv'
    nomeCarroJson = 'bdveiculos.json'
    nomeProprietarioJson = 'bdproprietarios.json'
    nomeMarcaJson = 'bdmarcas.json'
    
    veiculos_2_json(nomeArqVeiculo)
    props_2_json(nomeArqProprietario)
    dic_car = json_to_dic_placas(nomeCarroJson)
    dic_proprietario = json_to_dic_cpfs(nomeProprietarioJson)
    json_to_json(nomeCarroJson)
    dic_marca = json_to_dic_placas(nomeMarcaJson)
    print(dic_car)
    print(dic_proprietario)
    print(dic_marca)
    
main()