#include "Article.h"



inline void CodeProjet::Article::setPanelAff(int pan)
{
	if (pan == 0)
	{
		monControleur->gestion_panel(PanelAjouterArticle, PanelAfficherArticle, PanelModifier, PanelSupprimerArticle, false);
	}
	else if (pan == 1)
	{
		monControleur->gestion_panel(PanelAjouterArticle, PanelAfficherArticle, PanelModifier, PanelSupprimerArticle, true);
	}
	else if (pan == 2)
	{
		monControleur->gestion_panel(PanelAfficherArticle, PanelAjouterArticle, PanelModifier, PanelSupprimerArticle, true);
	}
	else if (pan == 3)
	{
		monControleur->gestion_panel(PanelModifier, PanelAfficherArticle, PanelAjouterArticle, PanelSupprimerArticle, true);
	}
	else if (pan == 4)
	{
		monControleur->gestion_panel(PanelSupprimerArticle, PanelAjouterArticle, PanelModifier, PanelAfficherArticle, true);
	}
}
