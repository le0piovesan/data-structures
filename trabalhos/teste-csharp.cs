const Lista = new List<Produto>();
int Valor = Lista[0].Item;

for (int i = 0; i < Lista.Count; i++) {
    if(Lista[i].Item < Valor) {
        Valor = Lista[i].Item;
    }
}

Console.WriteLine("O menor número é:" + Valor);
Console.Read();
