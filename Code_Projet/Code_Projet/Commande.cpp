#include "Commande.h"

inline void CodeProjet::Commande::setPanelAff(int pan)
{
	if (pan == 0)
	{
		monControleur->gestion_panel(PanelAjouterCommande, PanelModifierCommande, PanelAfficherCommande, PanelSupprimerCommande, false);
	}
	else if (pan == 1)
	{
		monControleur->gestion_panel(PanelAjouterCommande, PanelModifierCommande, PanelAfficherCommande, PanelSupprimerCommande, true);
	}
	else if (pan == 2)
	{
		monControleur->gestion_panel(PanelAfficherCommande, PanelAjouterCommande, PanelModifierCommande, PanelSupprimerCommande, true);
	}
	else if (pan == 3)
	{
		monControleur->gestion_panel(PanelModifierCommande, PanelAjouterCommande, PanelSupprimerCommande, PanelAfficherCommande, true);
	}
	else if (pan == 4)
	{
		monControleur->gestion_panel(PanelSupprimerCommande, PanelAjouterCommande, PanelModifierCommande, PanelAfficherCommande, true);
	}
}
