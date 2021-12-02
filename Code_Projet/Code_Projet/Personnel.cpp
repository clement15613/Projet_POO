#include "Personnel.h"

inline void CodeProjet::Personnel::setPanelAff(int pan)
{
	if (pan == 0)
	{
		moncontroleur->gestion_panel(PanelAjouterPersonnel, PanelModifierPersonnel, PanelAfficherPersonnel, PanelSupprimerPersonnel, false);
	}
	else if (pan == 1)
	{
		moncontroleur->gestion_panel(PanelAfficherPersonnel, PanelAjouterPersonnel, PanelModifierPersonnel, PanelSupprimerPersonnel, true);
	}
	else if (pan == 2)
	{
		moncontroleur->gestion_panel(PanelAjouterPersonnel, PanelAfficherPersonnel, PanelModifierPersonnel, PanelSupprimerPersonnel, true);
	}
	else if (pan == 3)
	{
		moncontroleur->gestion_panel(PanelModifierPersonnel, PanelAjouterPersonnel, PanelAfficherPersonnel, PanelSupprimerPersonnel, true);
	}
	else if (pan == 4)
	{
		moncontroleur->gestion_panel(PanelSupprimerPersonnel, PanelAjouterPersonnel, PanelModifierPersonnel, PanelAfficherPersonnel, true);
	}
}
