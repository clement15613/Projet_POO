#include "Article.h"

inline void CodeProjet::Article::setPanelAff(int pan)
{
	if (pan == 0)
	{
		moncontroleur->gestion_panel(PanelAjouterArticle, PanelAfficherArticle, PanelModifier, PanelSupprimerArticle, false);
	}
	else if (pan == 1)
	{
		moncontroleur->gestion_panel(PanelAjouterArticle, PanelAfficherArticle, PanelModifier, PanelSupprimerArticle, true);
	}
	else if (pan == 2)
	{
		moncontroleur->gestion_panel(PanelAfficherArticle, PanelAjouterArticle, PanelModifier, PanelSupprimerArticle, true);
	}
	else if (pan == 3)
	{
		moncontroleur->gestion_panel(PanelModifier, PanelAfficherArticle, PanelAjouterArticle, PanelSupprimerArticle, true);
	}
	else if (pan == 4)
	{
		moncontroleur->gestion_panel(PanelSupprimerArticle, PanelAjouterArticle, PanelModifier, PanelAfficherArticle, true);
	}
}
