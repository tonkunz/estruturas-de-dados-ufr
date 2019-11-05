export default class Stack {
  constructor() {
    this.items = [];
  }

  /* stackUp(elemento(s)):
    Método que adiciona um novo elemento (ou vários elementos)
    no topo da pilha
  */
  stackUp(element) {
    this.items.push(element);
  }

  /* unStack():
    Esse método remove o elemento no topo da pilha, também devolve
    o mesmo.
  */
  unStack() {
    return this.items.pop();
  }

  /* peek():
    Esse método devolve o elemento que está no topo da pilha,
    não modificando em nada a estrutura.
  */
  peek() {
    return this.items[this.items.length - 1];
  }

  /* isEmpty():
    Devolve true se a pilha estiver vazia e false se o tamanho
    for maior que 0.
  */
  isEmpty() {
    return this.items.length === 0;
  }

  /* clear():
    esse método remove todos os elementos da pilha.
  */
  clear() {
    this.items = [];
  }

  /* size():
    esse método devolve o número de elementos contidos na pilha. É
    semelhante à propriedade lenght de um array.   
  */
  size() {
    return this.items.length;
  }
}
