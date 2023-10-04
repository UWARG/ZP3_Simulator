/* Include files */

#include "sensorFusion_block_cgxe.hpp"
#include "m_aGBga77kZPMrtPrVD39RKE.hpp"

unsigned int cgxe_sensorFusion_block_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 2450018432 &&
      ssGetChecksum1(S) == 2665618099 &&
      ssGetChecksum2(S) == 2861501132 &&
      ssGetChecksum3(S) == 2473462278) {
    method_dispatcher_aGBga77kZPMrtPrVD39RKE(S, method, data);
    return 1;
  }

  return 0;
}
