void splitQS (LInt l, int x, LInt *mx, LInt *Mx){
    LInt mxcur, MXcur;
    while(l != NULL){
        
        if(l -> valor < x){
            
            if(*mx == NULL){
                *mx = l;
                mxcur = *mx;
                l = l->prox;
                mxcur->prox = NULL;
            }
            
            else{
                mxcur->prox = l;
                mxcur = mxcur->prox;
                l = l->prox;
                mxcur->prox = NULL;
            }
            
        }
        
        else{
            
            if(*Mx == NULL){
                *Mx = l;
                MXcur = *Mx;
                l = l->prox;
                MXcur -> prox = NULL;
            }
            
            else{
                MXcur->prox = l;
                l = l->prox;
                MXcur = MXcur->prox;
                MXcur->prox = NULL;
            }
        }
        
    }
    
}
