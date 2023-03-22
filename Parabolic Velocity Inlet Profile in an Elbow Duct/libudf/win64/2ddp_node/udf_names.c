/* This file generated automatically. */
/*          Do not modify.            */
#include "udf.h"
#include "prop.h"
#include "dpm.h"
extern DEFINE_PROFILE(inlet_x_velocity, thread, position) /* name, thread pointer, index */;
__declspec(dllexport) UDF_Data udf_data[] = {
{"inlet_x_velocity", (void(*)())inlet_x_velocity, UDF_TYPE_PROFILE},
};
__declspec(dllexport) int n_udf_data = sizeof(udf_data)/sizeof(UDF_Data);
#include "version.h"
__declspec(dllexport) void UDF_Inquire_Release(int *major, int *minor, int *revision)
{
  *major = RampantReleaseMajor;
  *minor = RampantReleaseMinor;
  *revision = RampantReleaseRevision;
}
