/* Include files */

#include "sensorFusion_block_cgxe.hpp"
#include "m_ykRtzkq0GdAszoujIhoJ2B.hpp"

unsigned int cgxe_sensorFusion_block_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 866845740 &&
      ssGetChecksum1(S) == 1259486785 &&
      ssGetChecksum2(S) == 147525710 &&
      ssGetChecksum3(S) == 500979206) {
    method_dispatcher_ykRtzkq0GdAszoujIhoJ2B(S, method, data);
    return 1;
  }

  return 0;
}
