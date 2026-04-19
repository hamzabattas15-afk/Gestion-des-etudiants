#include <stdio.h>
struct etudiant{
 char nom[30];
 char mention[20];
 float note[3];
 float moyenne;
};
int main(){
    struct etudiant e[100];
     int i,j;
     
    for(i=0;i<100;i++){
        float somme=0;
        printf("le nom d'etudiant %d:",i+1);
        scanf("%s",e[i].nom);

        for(j=0;j<100;j++){
        printf("la note %d:",j+1);
        scanf("%f",&e[i].note[j]);
            somme+=e[i].note[j]; 

    }
    e[i].moyenne= somme / 3;
}
for(i=0;i<100;i++){
        printf("la moyenne de %s : %.2f \n",e[i].nom,e[i].moyenne);
if (e[i].moyenne >= 16){
        printf("%s :tres bien\n",e[i].nom);
}
else if (e[i].moyenne >=14){
        printf("%s :bien\n",e[i].nom);
}
else if (e[i].moyenne >=12)
{
        printf("%s :assez bien\n",e[i].nom);
}
else if(e[i].moyenne >=10){
        printf("%s :passable\n",e[i].nom);
    }
else{ 
        printf("%s :ajourne\n",e[i].nom);
}}
printf("\nLes etudiants admis:\n");

for(i=0;i<100;i++){
    if(e[i].moyenne >= 10){
        printf("%s - %.2f\n", e[i].nom, e[i].moyenne);
    }
}

return 0;
}