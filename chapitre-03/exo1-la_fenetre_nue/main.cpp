#include <iostream>
#include "NKWindow/NkWindow.h"
#include "NKWindow/Core/NkMain.h"

// NKENTSEU_DEFINE_APP_DATA(([](){
//     nkentseu::NkAppData d{};
//     d.appName = "Ma salle";
//     return d;
// }));

int nkmain(const nkentseu::NkEntryState& state) {

    nkentseu::NkWindowConfig cfg;
    cfg.title = "fenètre";
    cfg.width = 1280;
    cfg.height = 720;

    nkentseu::NkWindow window;

    if(!window.Create(cfg)){

        logger.Error("Erreur lors de la création de la fenètre");
        return -1;
    }

    bool running = true;

    while(running){
        nkentseu::NkEvent* event = nullptr;
        while(((event = nkentseu::NkEvents().PollEvent()) != nullptr)){
            if(event->Is<nkentseu::NkWindowCloseEvent>()){

                running = false;

            }   
        
        }
    }

    return 0;

}
