int Longueur(liste *tete){
int L=0;
if(tete==NULL){
return L;
}
liste *tmp=tete;
while(tmp!=NULL){
L++;
tmp=tmp->suiv;
}
return L;
}
void filtrer_date(liste *tete, date dt){
printf("entrer le date d'achat");
scanf("%s %s %s",jour,mois,annee);
liste *tmp=tete;
while(tmp!=NULL){
if(strcmp(jour , tmp->cellule.DateAchat.jour)=0&&strcmp(mois , tmp->cellule.DateAchat.mois)=0&&strcmp(annee, tmp->cellule.DateAchat.annee)=0){
printf("%s",tmp->cellule.Nom_Produit);
}
tmp=tmp->suiv;
}
}
liste* supprimer_debut(liste* tete){
if(tete==NULL){
return NULL;
}
liste *tmp=tete;
tete=tete->suiv;
free(tmp);
tmp->suiv=NULL;
return tete;
liste* supprimer_fin(liste* tete){
if(tete==NULL){
return NULL;
}
liste *tmp=tete;
liste *ptr=tete;
while(tmp->suiv!=NULL){
ptr=tmp;
tmp=tmp->suiv;
}
free(tmp);
ptr->suiv=NULL;
return tete;
}
liste *rembourser(liste,char* refer){
  scanf("%s",refer);
liste *tmp=tete;
liste *ptr=tete;
while(tmp!=NULL){
if(strcmp(refer, tmp->cellule.Reference)=0,tmp=tete){
supprimer_debut();
}
if(strcmp(refer, tmp->cellule.Reference)=0,tmp->suiv=NULL){
supprimer_fin();
}
ptr=tmp;
tmp=tmp->suiv;
if(strcmp(refer, tmp->cellule.Reference)=0,tmp!=tete&&tmp->suiv!=NULL){
ptr->suiv=tmp->suiv;
  free(tmp);
  tmp->suiv=NULL;
}
}
return tete;
}

