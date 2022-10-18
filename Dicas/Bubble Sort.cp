for (int i=0; i<19; i++) {
  for (int j=i+1; j<20; j++) {
    if (notas[i]>notas[j]) {
      aux=notas[i];
      notas[i]=notas[j];
      notas[j]=aux;
      aux=indice[i];
      indice[i]=indice[j];
      indice[j]=aux;
    }
  }
}
