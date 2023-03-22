/***********************************************************************
 vprofile.c 
 UDF for specifying steady-state velocity profile boundary condition
 ************************************************************************/
 #include "udf.h"
 DEFINE_PROFILE(inlet_x_velocity, thread, position) /* name, thread pointer, index */
 {
    real x[ND_ND]; /* this will hold the position vector */
    real y, h;
    face_t f;
    h = 30e-3; /* inlet height in m */
    begin_f_loop(f,thread)
    {
        F_CENTROID(x, f, thread); /* F=Face */
        y = x[1]/(h/2.); /* non-dimensional y coordinate, x[1]=y coordinate */
        F_PROFILE(f, thread, position) = 0.1*(1.0-y*y); /* store a boundary condition in memory */
    }
    end_f_loop(f, thread)
 }
