
#include "NKWindow/NKMain.h"
#include "NKWindow/Core/NkWindow.h"
#include "NKEvent/NkWindowEvent.h"
#include "NKTime/NkClock.h"
using namespace nkentseu;

int nkmain(const NkEntryState &state) {
    NkWindowConfig cfg;
    cfg.title = "MaFenetre - ANI-4087 - NDEME";
    cfg.width = 1280;
    cfg.height = 720;
    cfg.centered = true;

    NkWindow fenetre(cfg);
    if (!fenetre.IsValid())
        return 1;

    bool tourne = true;
    NkEventSystem &evenements = NkEvents();
    evenements.AddEventCallback<NkWindowCloseEvent>([&](NkWindowCloseEvent *) { tourne = false; });

    while (tourne && fenetre.IsOpen()) {
        evenements.PollEvents();
        NkClock::Sleep((int64)10);
    }

    fenetre.Close();
    return 0;
}
