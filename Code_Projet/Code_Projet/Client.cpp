#include "Client.h"

inline void CodeProjet::Client::setPanelAff(int pan)
{
	if (pan == 0)
	{
		monControleur->gestion_panel(PanelAjouterClient, PanelModifierClient, PanelAfficherClient, PanelSupprimerClient, false);
	}
	else if (pan == 1)
	{
		monControleur->gestion_panel(PanelAjouterClient, PanelAfficherClient, PanelModifierClient, PanelSupprimerClient, true);
	}
	else if (pan == 2)
	{
		monControleur->gestion_panel(PanelAfficherClient, PanelAjouterClient, PanelModifierClient, PanelSupprimerClient, true);
	}
	else if (pan == 3)
	{
		monControleur->gestion_panel(PanelModifierClient, PanelAjouterClient, PanelAfficherClient, PanelSupprimerClient, true);
	}
	else if (pan == 4)
	{
		monControleur->gestion_panel(PanelSupprimerClient, PanelAjouterClient, PanelModifierClient, PanelAfficherClient, true);
	}
}
