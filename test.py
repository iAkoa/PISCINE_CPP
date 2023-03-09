import csv

# Ecrivez le code ci-dessous. Utilisez le package csv !


#input
with open('input.csv') as input_csv:
    reader = csv.reader(input_csv, delimiter = ',')
    for ligne in reader:
        print(ligne)
#output
    en_tete = ['nom', 'salaires']
    with open('output.csv', 'w') as output_csv:
        writer = csv.writer(output_csv, delimiter = ',')
        writer.writerow(en_tete)
        #print(ligne)
        for nom, salaires in zip(nom, salaires):
            ligne = [nom, salaires * 15]
            print(nom)
            #writer.writerow(ligne)