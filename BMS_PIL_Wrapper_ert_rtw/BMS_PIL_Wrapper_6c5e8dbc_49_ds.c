/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'BMS_PIL_Wrapper/Plant/Solver Configuration'.
 */
/* BMS_PIL_Wrapper_6c5e8dbc_49_ds.c - body for module BMS_PIL_Wrapper_6c5e8dbc_49_ds */

#include "ne_ds.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_y.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_ic.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_f.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_dxy_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_slv.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_tduf_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_mcon_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_dxicr_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_mode.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_obs_exp.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_zc.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_duf.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_duf_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_lv.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_icr_id.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_acon_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_duy_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_vdf.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_icr_im.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_tduy_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_icr_il.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_nldv.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_dxf.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_bcon_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_icr.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_tdxy_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_obs_act.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_dxy.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_dnf_v_x.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_tdxf_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_log.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_assert.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_obs_all.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_obs_il.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_dpdxf_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_vmf.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_dxf_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_mcon.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_acon.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_dnf_p.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds.h"
#include "ssc_ml_fun.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_external_struct.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_externals.h"
#include "BMS_PIL_Wrapper_6c5e8dbc_49_ds_sys_struct.h"

static int32_T ds_mpar_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mpar(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_mnl_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mnl(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_vmm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dum_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dum(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dtm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dpm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dpm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_apar_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_apar(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_bcon(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_bpar_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_bpar(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_ccon_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ccon(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_cpar_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_cpar(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_vpf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_vsf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf0(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dtf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dpdxf(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dwf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dwf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dnf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_cer(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxcer(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxcer_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_ddcer(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddcer_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_dxicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_tduicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dxicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_freqs(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_solverhits(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_mduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mdxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dty_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dty(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_cache_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_cache_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_update_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update2_r(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_update2_i(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_lock_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock2_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_lock2_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_sfo(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_sfp(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_init_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_init_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_passert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_iassert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_del_t(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v0(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_tmax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dp_l(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_j(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qx(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qu(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qt(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_q1(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qx_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qu_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_q1_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_var_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_eq_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_sclv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_imin(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_imax(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dimin(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dimax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static NeDsMethodOutput *ds_output_mcon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mcon(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mpar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mpar(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mnl_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_mnl(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dpm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dpm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_acon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_acon(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_apar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_apar(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_bcon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_bcon(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_bpar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_bpar(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ccon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ccon(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cpar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cpar(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vdf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vsf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dpdxf_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dpdxf(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cer(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxcer(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxcer_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddcer(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddcer_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_freqs(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_solverhits(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_nldv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sclv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dimin(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dimax(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static void release_reference(NeDynamicSystem *ds);
static void get_reference(NeDynamicSystem *ds);
static NeDynamicSystem *diagnostics(NeDynamicSystem *ds, boolean_T);
static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out, boolean_T kp);
static void rtpmap(const NeDynamicSystem * ds, const PmIntVector* inl, const
                   PmIntVector* ini, const PmIntVector* inj, const PmRealVector*
                   inr, PmIntVector* outl, PmIntVector* outi, PmIntVector* outj,
                   PmRealVector* outr);
static NeEquationData s_equation_data[205] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 2U,
    0U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 2U,
    2U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 3U,
    4U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 3U,
    7U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 3U,
    10U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 3U,
    13U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 3U,
    16U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    19U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 2U,
    20U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 2U,
    22U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 3U,
    24U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 3U,
    27U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 3U,
    30U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 3U,
    33U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 3U,
    36U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    39U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 2U,
    40U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 2U,
    42U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 3U,
    44U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 3U,
    47U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 3U,
    50U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 3U,
    53U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 3U,
    56U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    59U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 2U,
    60U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 2U,
    62U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 3U,
    64U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 3U,
    67U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 3U,
    70U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 3U,
    73U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 3U,
    76U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    79U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 2U,
    80U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 2U,
    82U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 3U,
    84U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 3U,
    87U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 3U,
    90U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 3U,
    93U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 3U,
    96U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    99U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 2U,
    100U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 2U,
    102U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 3U,
    104U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 3U,
    107U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 3U,
    110U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 3U,
    113U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 3U,
    116U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    119U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 2U,
    120U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 2U,
    122U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 3U,
    124U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 3U,
    127U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 3U,
    130U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 3U,
    133U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 3U,
    136U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    139U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 2U,
    140U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 2U,
    142U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 3U,
    144U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 3U,
    147U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 3U,
    150U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 3U,
    153U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 3U,
    156U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    159U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 2U,
    160U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 2U,
    162U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 3U,
    164U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 3U,
    167U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 3U,
    170U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 3U,
    173U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 3U,
    176U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    179U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 2U,
    180U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 2U,
    182U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 3U,
    184U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 3U,
    187U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 3U,
    190U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 3U,
    193U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 3U,
    196U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    199U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 2U,
    200U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 2U,
    202U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 3U,
    204U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 3U,
    207U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 3U,
    210U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 3U,
    213U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 3U,
    216U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    219U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 2U,
    220U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 2U,
    222U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 3U,
    224U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 3U,
    227U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 3U,
    230U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 3U,
    233U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 3U,
    236U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    239U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", 3U, 240U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", 3U, 243U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", 3U, 246U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", 3U, 249U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", 3U, 252U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", 3U, 255U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", 3U, 258U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", 3U, 261U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", 3U, 264U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", 3U, 267U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", 3U, 270U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", 3U, 273U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", 3U, 276U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", 3U, 279U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", 3U, 282U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", 3U, 285U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", 3U, 288U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", 3U, 291U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", 3U, 294U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", 3U, 297U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", 3U, 300U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", 3U, 303U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", 3U, 306U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", 3U, 309U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch", 3U, 312U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch1", 3U, 315U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch10", 3U, 318U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch11", 3U, 321U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch2", 3U, 324U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch3", 3U, 327U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch4", 3U, 330U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch5", 3U, 333U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch6", 3U, 336U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch7", 3U, 339U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch8", 3U, 342U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch9", 3U, 345U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    348U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    349U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    350U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    351U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    352U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    353U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    354U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    355U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    356U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    357U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    358U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    359U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    360U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    361U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    362U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    363U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    364U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    365U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    366U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    367U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    368U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    369U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    370U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    371U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    372U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    373U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    374U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    375U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    376U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    377U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    378U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    379U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    380U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    381U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    382U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    383U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    384U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    385U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    386U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    387U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    388U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    389U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    390U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    391U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    392U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    393U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    394U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    395U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    396U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    397U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    398U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    399U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    400U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    401U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    402U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    403U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    404U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    405U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    406U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    407U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    408U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    409U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    410U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    411U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    412U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    413U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    414U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    415U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    416U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    417U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    418U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    419U, FALSE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Controlled Temperature Source",
    1U, 420U, TRUE, 1.0, "1", } };

static NeCERData *s_cer_data = NULL;
static NeICRData s_icr_data[36] = { { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", 1U, 0U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", 1U, 1U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", 1U, 2U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", 1U, 3U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", 1U, 4U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", 1U, 5U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", 1U, 6U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", 1U, 7U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", 1U, 8U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", 1U, 9U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", 1U, 10U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", 1U, 11U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    12U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    13U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    14U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    15U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    16U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    17U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    18U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    19U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    20U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    21U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    22U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    23U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    24U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    25U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    26U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    27U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    28U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    29U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    30U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    31U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    32U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    33U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    34U, }, { "", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    35U, } };

static NeVariableData s_variable_data[205] = { {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.thermalModel.cell_temperature",
    0U, 0, "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)",
    1.0, "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.charge",
    0U, 0, "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)",
    1.0, "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.num_cycles",
    0U, 0, "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)",
    1.0, "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.rcVoltageDrop",
    0U, 0, "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)",
    1.0, "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.rcVoltageDrop",
    1U, 0, "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)",
    1.0, "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.rcVoltageDrop",
    2U, 0, "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)",
    1.0, "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.rcVoltageDrop",
    3U, 0, "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)",
    1.0, "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.rcVoltageDrop",
    4U, 0, "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)",
    1.0, "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.thermalModel.cell_temperature",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "cell_temperature",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.charge",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.num_cycles",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Discharge cycles",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.rcVoltageDrop",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.rcVoltageDrop",
    1U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.rcVoltageDrop",
    2U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.rcVoltageDrop",
    3U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.rcVoltageDrop",
    4U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.thermalModel.cell_temperature",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "cell_temperature",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.thermalModel.cell_temperature",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "cell_temperature",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.charge",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.num_cycles",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Discharge cycles",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.rcVoltageDrop",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.rcVoltageDrop",
    1U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.rcVoltageDrop",
    2U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.rcVoltageDrop",
    3U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.rcVoltageDrop",
    4U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.thermalModel.cell_temperature",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "cell_temperature",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.thermalModel.cell_temperature",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "cell_temperature",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.charge",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.num_cycles",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Discharge cycles",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.rcVoltageDrop",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.rcVoltageDrop",
    1U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.rcVoltageDrop",
    2U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.rcVoltageDrop",
    3U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.rcVoltageDrop",
    4U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.charge",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.num_cycles",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Discharge cycles",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.rcVoltageDrop",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.rcVoltageDrop",
    1U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.rcVoltageDrop",
    2U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.rcVoltageDrop",
    3U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.rcVoltageDrop",
    4U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.thermalModel.cell_temperature",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "cell_temperature",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.charge",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.num_cycles",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Discharge cycles",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.rcVoltageDrop",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.rcVoltageDrop",
    1U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.rcVoltageDrop",
    2U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.rcVoltageDrop",
    3U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.rcVoltageDrop",
    4U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.thermalModel.cell_temperature",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "cell_temperature",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.charge",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.num_cycles",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Discharge cycles",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.rcVoltageDrop",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.rcVoltageDrop",
    1U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.rcVoltageDrop",
    2U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.rcVoltageDrop",
    3U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.rcVoltageDrop",
    4U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.thermalModel.cell_temperature",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "cell_temperature",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.charge",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.num_cycles",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Discharge cycles",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.rcVoltageDrop",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.rcVoltageDrop",
    1U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.rcVoltageDrop",
    2U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.rcVoltageDrop",
    3U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.rcVoltageDrop",
    4U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.thermalModel.cell_temperature",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "cell_temperature",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.charge",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.num_cycles",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Discharge cycles",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.rcVoltageDrop",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.rcVoltageDrop",
    1U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.rcVoltageDrop",
    2U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.rcVoltageDrop",
    3U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.rcVoltageDrop",
    4U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.thermalModel.cell_temperature",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "cell_temperature",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.charge",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.num_cycles",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Discharge cycles",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.rcVoltageDrop",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.rcVoltageDrop",
    1U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.rcVoltageDrop",
    2U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.rcVoltageDrop",
    3U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.rcVoltageDrop",
    4U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.thermalModel.cell_temperature",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "cell_temperature",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.charge",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.num_cycles",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Discharge cycles",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.rcVoltageDrop",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.rcVoltageDrop",
    1U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.rcVoltageDrop",
    2U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.rcVoltageDrop",
    3U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.rcVoltageDrop",
    4U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.charge",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.num_cycles",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1.0,
    "1", 0.0, TRUE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Discharge cycles",
  }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.rcVoltageDrop",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.rcVoltageDrop",
    1U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.rcVoltageDrop",
    2U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.rcVoltageDrop",
    3U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.rcVoltageDrop",
    4U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1.0,
    "1", 0.0, TRUE, FALSE, { 5, "1x5" }, NE_INIT_MODE_MANDATORY,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Monitoring.Connection_Port1.v", 0U, 1,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", 1.0, "1", 0.0, FALSE, FALSE, {
      1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.v", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Terminal voltage",
  }, { "Plant.Subsystem.Monitoring.Connection_Port10.v", 0U, 1,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", 1.0, "1", 0.0, FALSE, FALSE, {
      1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port11.v", 0U, 1,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", 1.0, "1", 0.0, FALSE, FALSE, {
      1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port2.v", 0U, 1,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", 1.0, "1", 0.0, FALSE, FALSE, {
      1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port3.v", 0U, 1,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", 1.0, "1", 0.0, FALSE, FALSE, {
      1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port4.v", 0U, 1,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", 1.0, "1", 0.0, FALSE, FALSE, {
      1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port5.v", 0U, 1,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", 1.0, "1", 0.0, FALSE, FALSE, {
      1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port6.v", 0U, 1,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", 1.0, "1", 0.0, FALSE, FALSE, {
      1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port7.v", 0U, 1,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", 1.0, "1", 0.0, FALSE, FALSE, {
      1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port8.v", 0U, 1,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", 1.0, "1", 0.0, FALSE, FALSE, {
      1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port9.v", 0U, 1,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", 1.0, "1", 0.0, FALSE, FALSE, {
      1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode.private.Diode.v_diode", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Switch.v", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode.private.Diode.threshold", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode1.private.Diode.v_diode", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Switch1.v", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch1", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode1.private.Diode.threshold", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode10.private.Diode.v_diode", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Switch10.v", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch10", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode10.private.Diode.threshold", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode11.private.Diode.v_diode", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Switch11.v", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch11", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode11.private.Diode.threshold", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode2.private.Diode.v_diode", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Switch2.v", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch2", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode2.private.Diode.threshold", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode3.private.Diode.v_diode", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Switch3.v", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch3", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode3.private.Diode.threshold", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode4.private.Diode.v_diode", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Switch4.v", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch4", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode4.private.Diode.threshold", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode5.private.Diode.v_diode", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Switch5.v", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch5", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode5.private.Diode.threshold", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode6.private.Diode.v_diode", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Switch6.v", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch6", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode6.private.Diode.threshold", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode7.private.Diode.v_diode", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Switch7.v", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch7", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode7.private.Diode.threshold", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode8.private.Diode.v_diode", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Switch8.v", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch8", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode8.private.Diode.threshold", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode9.private.Diode.v_diode", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Switch9.v", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch9", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode9.private.Diode.threshold", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", 1.0, "1", 0.0, FALSE,
    FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "threshold", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.cyclingAgingModel.xdAH_fade",
    0U, 0, "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.cyclingAgingModel.xdR0_fade",
    0U, 0, "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.cyclingAgingModel.xdVint_fade",
    0U, 0, "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.stateOfCharge", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.q_generated",
    0U, 0, "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)",
    1.0, "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "q_generated",
  }, { "Plant.Subsystem.Series_Module.Battery_Table_Based.thermalModel.Q", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "Heat flow", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.cyclingAgingModel.xdAH_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.cyclingAgingModel.xdR0_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.cyclingAgingModel.xdVint_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.stateOfCharge", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.q_generated",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.cyclingAgingModel.xdAH_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.cyclingAgingModel.xdR0_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.cyclingAgingModel.xdVint_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.stateOfCharge", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.q_generated",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.cyclingAgingModel.xdAH_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.cyclingAgingModel.xdR0_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.cyclingAgingModel.xdVint_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.stateOfCharge", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.q_generated",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.cyclingAgingModel.xdAH_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.cyclingAgingModel.xdR0_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.cyclingAgingModel.xdVint_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.stateOfCharge", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.q_generated",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.cyclingAgingModel.xdAH_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.cyclingAgingModel.xdR0_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.cyclingAgingModel.xdVint_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.stateOfCharge", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.q_generated",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.cyclingAgingModel.xdAH_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.cyclingAgingModel.xdR0_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.cyclingAgingModel.xdVint_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.stateOfCharge", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.q_generated",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.cyclingAgingModel.xdAH_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.cyclingAgingModel.xdR0_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.cyclingAgingModel.xdVint_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.stateOfCharge", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.q_generated",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.cyclingAgingModel.xdAH_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.cyclingAgingModel.xdR0_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.cyclingAgingModel.xdVint_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.stateOfCharge", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.q_generated",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.cyclingAgingModel.xdAH_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.cyclingAgingModel.xdR0_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.cyclingAgingModel.xdVint_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.stateOfCharge", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.q_generated",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.cyclingAgingModel.xdAH_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.cyclingAgingModel.xdR0_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.cyclingAgingModel.xdVint_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.stateOfCharge", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.q_generated",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.cyclingAgingModel.xdAH_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.cyclingAgingModel.xdR0_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.cyclingAgingModel.xdVint_fade",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.stateOfCharge", 0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_MANDATORY,
    "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.q_generated",
    0U, 0,
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1.0,
    "1", 0.0, FALSE, FALSE, { 1, "1x1" }, NE_INIT_MODE_NONE, "q_generated", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[1222] = { {
    "Plant.Charger_Load.Batt0.v", "BMS_PIL_Wrapper/Plant/Charger-Load", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Charger_Load.Batt1.v", "BMS_PIL_Wrapper/Plant/Charger-Load", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Charger_Load.Controlled_Current_Source.head.v",
    "BMS_PIL_Wrapper/Plant/Charger-Load/Controlled Current Source", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Charger_Load.Controlled_Current_Source.i",
    "BMS_PIL_Wrapper/Plant/Charger-Load/Controlled Current Source", { 1, "1x1" },
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Plant.Charger_Load.Controlled_Current_Source.iT",
    "BMS_PIL_Wrapper/Plant/Charger-Load/Controlled Current Source", { 1, "1x1" },
    "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "iT", }, {
    "Plant.Charger_Load.Controlled_Current_Source.tail.v",
    "BMS_PIL_Wrapper/Plant/Charger-Load/Controlled Current Source", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Charger_Load.Controlled_Current_Source.v",
    "BMS_PIL_Wrapper/Plant/Charger-Load/Controlled Current Source", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Plant.Charger_Load.Controlled_Current_Source1.head.v",
    "BMS_PIL_Wrapper/Plant/Charger-Load/Controlled Current Source1", { 1, "1x1"
    }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Charger_Load.Controlled_Current_Source1.i",
    "BMS_PIL_Wrapper/Plant/Charger-Load/Controlled Current Source1", { 1, "1x1"
    }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Plant.Charger_Load.Controlled_Current_Source1.iT",
    "BMS_PIL_Wrapper/Plant/Charger-Load/Controlled Current Source1", { 1, "1x1"
    }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "iT", }, {
    "Plant.Charger_Load.Controlled_Current_Source1.tail.v",
    "BMS_PIL_Wrapper/Plant/Charger-Load/Controlled Current Source1", { 1, "1x1"
    }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Charger_Load.Controlled_Current_Source1.v",
    "BMS_PIL_Wrapper/Plant/Charger-Load/Controlled Current Source1", { 1, "1x1"
    }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Plant.Charger_Load.Simulink_PS_Converter1_output0",
    "BMS_PIL_Wrapper/Plant/Charger-Load/Simulink-PS\nConverter1", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter1_output0", }, {
    "Plant.Charger_Load.Simulink_PS_Converter_output0",
    "BMS_PIL_Wrapper/Plant/Charger-Load/Simulink-PS\nConverter", { 1, "1x1" },
    "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter_output0", }, {
    "Plant.Current_Sensor.I", "BMS_PIL_Wrapper/Plant/Current Sensor", { 1, "1x1"
    }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, { "Plant.Current_Sensor.i1",
    "BMS_PIL_Wrapper/Plant/Current Sensor", { 1, "1x1" }, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Current_Sensor.n.v", "BMS_PIL_Wrapper/Plant/Current Sensor", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Current_Sensor.p.v", "BMS_PIL_Wrapper/Plant/Current Sensor", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Current_Sensor_I0", "BMS_PIL_Wrapper/Plant/PS-Simulink\nConverter1",
      { 1, "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current_Sensor_I0", }, {
    "Plant.Electrical_Reference.V.v",
    "BMS_PIL_Wrapper/Plant/Electrical Reference", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Plant.Subsystem.Batt0.v",
    "BMS_PIL_Wrapper/Plant/Subsystem", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Batt1.v", "BMS_PIL_Wrapper/Plant/Subsystem", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port1.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port10.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port11.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port12.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port2.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port3.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port4.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port5.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port6.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port7.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port8.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Connection_Port9.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode.private.Diode.BV_threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "BV_threshold", }, {
    "Plant.Subsystem.Monitoring.Diode.private.Diode.Qscale",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge scale", }, {
    "Plant.Subsystem.Monitoring.Diode.private.Diode.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode.private.Diode.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode.private.Diode.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode.private.Diode.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode.private.Diode.threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode.private.Diode.timerFaultTransition",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "s", 1.0,
    "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Time since triggering fault condition",
  }, { "Plant.Subsystem.Monitoring.Diode.private.Diode.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode.Qj",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "C", 1.0,
    "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge of junction capacitance", }, {
    "Plant.Subsystem.Monitoring.Diode.TJ",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Junction temperature", }, {
    "Plant.Subsystem.Monitoring.Diode.Tsim",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Simulation temperature on the IV characteristics", }, {
    "Plant.Subsystem.Monitoring.Diode.fault_input",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Input fault trigger", }, {
    "Plant.Subsystem.Monitoring.Diode.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Diode.i_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Plant.Subsystem.Monitoring.Diode.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode.i_out",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Diode current output", }, {
    "Plant.Subsystem.Monitoring.Diode.ni.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Plant.Subsystem.Monitoring.Diode.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode.v_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Plant.Subsystem.Monitoring.Diode.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode.v_on",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "v_on", }, {
    "Plant.Subsystem.Monitoring.Diode1.private.Diode.BV_threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "BV_threshold", }, {
    "Plant.Subsystem.Monitoring.Diode1.private.Diode.Qscale",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge scale", }, {
    "Plant.Subsystem.Monitoring.Diode1.private.Diode.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode1.private.Diode.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode1.private.Diode.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode1.private.Diode.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode1.private.Diode.threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode1.private.Diode.timerFaultTransition",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "s", 1.0,
    "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Time since triggering fault condition",
  }, { "Plant.Subsystem.Monitoring.Diode1.private.Diode.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode1.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode1.Qj",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "C", 1.0,
    "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge of junction capacitance", }, {
    "Plant.Subsystem.Monitoring.Diode1.TJ",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Junction temperature", }, {
    "Plant.Subsystem.Monitoring.Diode1.Tsim",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Simulation temperature on the IV characteristics", }, {
    "Plant.Subsystem.Monitoring.Diode1.fault_input",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Input fault trigger", }, {
    "Plant.Subsystem.Monitoring.Diode1.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode1.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Diode1.i_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Plant.Subsystem.Monitoring.Diode1.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode1.i_out",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Diode current output", }, {
    "Plant.Subsystem.Monitoring.Diode1.ni.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode1.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode1.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Plant.Subsystem.Monitoring.Diode1.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode1.v_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Plant.Subsystem.Monitoring.Diode1.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode1.v_on",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "v_on", }, {
    "Plant.Subsystem.Monitoring.Diode10.private.Diode.BV_threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "BV_threshold", }, {
    "Plant.Subsystem.Monitoring.Diode10.private.Diode.Qscale",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge scale", }, {
    "Plant.Subsystem.Monitoring.Diode10.private.Diode.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode10.private.Diode.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode10.private.Diode.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode10.private.Diode.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode10.private.Diode.threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode10.private.Diode.timerFaultTransition",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "s", 1.0,
    "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Time since triggering fault condition",
  }, { "Plant.Subsystem.Monitoring.Diode10.private.Diode.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode10.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode10.Qj",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "C", 1.0,
    "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge of junction capacitance", }, {
    "Plant.Subsystem.Monitoring.Diode10.TJ",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Junction temperature", }, {
    "Plant.Subsystem.Monitoring.Diode10.Tsim",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Simulation temperature on the IV characteristics", }, {
    "Plant.Subsystem.Monitoring.Diode10.fault_input",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Input fault trigger", }, {
    "Plant.Subsystem.Monitoring.Diode10.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode10.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Diode10.i_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Plant.Subsystem.Monitoring.Diode10.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode10.i_out",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Diode current output", }, {
    "Plant.Subsystem.Monitoring.Diode10.ni.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode10.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode10.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Plant.Subsystem.Monitoring.Diode10.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode10.v_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Plant.Subsystem.Monitoring.Diode10.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode10.v_on",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "v_on", }, {
    "Plant.Subsystem.Monitoring.Diode11.private.Diode.BV_threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "BV_threshold", }, {
    "Plant.Subsystem.Monitoring.Diode11.private.Diode.Qscale",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge scale", }, {
    "Plant.Subsystem.Monitoring.Diode11.private.Diode.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode11.private.Diode.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode11.private.Diode.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode11.private.Diode.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode11.private.Diode.threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode11.private.Diode.timerFaultTransition",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "s", 1.0,
    "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Time since triggering fault condition",
  }, { "Plant.Subsystem.Monitoring.Diode11.private.Diode.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode11.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode11.Qj",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "C", 1.0,
    "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge of junction capacitance", }, {
    "Plant.Subsystem.Monitoring.Diode11.TJ",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Junction temperature", }, {
    "Plant.Subsystem.Monitoring.Diode11.Tsim",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Simulation temperature on the IV characteristics", }, {
    "Plant.Subsystem.Monitoring.Diode11.fault_input",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Input fault trigger", }, {
    "Plant.Subsystem.Monitoring.Diode11.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode11.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Diode11.i_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Plant.Subsystem.Monitoring.Diode11.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode11.i_out",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Diode current output", }, {
    "Plant.Subsystem.Monitoring.Diode11.ni.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode11.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode11.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Plant.Subsystem.Monitoring.Diode11.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode11.v_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Plant.Subsystem.Monitoring.Diode11.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode11.v_on",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "v_on", }, {
    "Plant.Subsystem.Monitoring.Diode2.private.Diode.BV_threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "BV_threshold", }, {
    "Plant.Subsystem.Monitoring.Diode2.private.Diode.Qscale",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge scale", }, {
    "Plant.Subsystem.Monitoring.Diode2.private.Diode.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode2.private.Diode.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode2.private.Diode.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode2.private.Diode.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode2.private.Diode.threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode2.private.Diode.timerFaultTransition",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "s", 1.0,
    "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Time since triggering fault condition",
  }, { "Plant.Subsystem.Monitoring.Diode2.private.Diode.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode2.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode2.Qj",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "C", 1.0,
    "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge of junction capacitance", }, {
    "Plant.Subsystem.Monitoring.Diode2.TJ",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Junction temperature", }, {
    "Plant.Subsystem.Monitoring.Diode2.Tsim",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Simulation temperature on the IV characteristics", }, {
    "Plant.Subsystem.Monitoring.Diode2.fault_input",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Input fault trigger", }, {
    "Plant.Subsystem.Monitoring.Diode2.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode2.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Diode2.i_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Plant.Subsystem.Monitoring.Diode2.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode2.i_out",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Diode current output", }, {
    "Plant.Subsystem.Monitoring.Diode2.ni.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode2.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode2.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Plant.Subsystem.Monitoring.Diode2.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode2.v_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Plant.Subsystem.Monitoring.Diode2.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode2.v_on",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "v_on", }, {
    "Plant.Subsystem.Monitoring.Diode3.private.Diode.BV_threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "BV_threshold", }, {
    "Plant.Subsystem.Monitoring.Diode3.private.Diode.Qscale",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge scale", }, {
    "Plant.Subsystem.Monitoring.Diode3.private.Diode.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode3.private.Diode.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode3.private.Diode.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode3.private.Diode.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode3.private.Diode.threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode3.private.Diode.timerFaultTransition",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "s", 1.0,
    "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Time since triggering fault condition",
  }, { "Plant.Subsystem.Monitoring.Diode3.private.Diode.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode3.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode3.Qj",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "C", 1.0,
    "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge of junction capacitance", }, {
    "Plant.Subsystem.Monitoring.Diode3.TJ",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Junction temperature", }, {
    "Plant.Subsystem.Monitoring.Diode3.Tsim",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Simulation temperature on the IV characteristics", }, {
    "Plant.Subsystem.Monitoring.Diode3.fault_input",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Input fault trigger", }, {
    "Plant.Subsystem.Monitoring.Diode3.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode3.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Diode3.i_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Plant.Subsystem.Monitoring.Diode3.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode3.i_out",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Diode current output", }, {
    "Plant.Subsystem.Monitoring.Diode3.ni.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode3.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode3.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Plant.Subsystem.Monitoring.Diode3.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode3.v_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Plant.Subsystem.Monitoring.Diode3.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode3.v_on",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "v_on", }, {
    "Plant.Subsystem.Monitoring.Diode4.private.Diode.BV_threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "BV_threshold", }, {
    "Plant.Subsystem.Monitoring.Diode4.private.Diode.Qscale",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge scale", }, {
    "Plant.Subsystem.Monitoring.Diode4.private.Diode.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode4.private.Diode.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode4.private.Diode.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode4.private.Diode.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode4.private.Diode.threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode4.private.Diode.timerFaultTransition",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "s", 1.0,
    "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Time since triggering fault condition",
  }, { "Plant.Subsystem.Monitoring.Diode4.private.Diode.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode4.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode4.Qj",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "C", 1.0,
    "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge of junction capacitance", }, {
    "Plant.Subsystem.Monitoring.Diode4.TJ",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Junction temperature", }, {
    "Plant.Subsystem.Monitoring.Diode4.Tsim",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Simulation temperature on the IV characteristics", }, {
    "Plant.Subsystem.Monitoring.Diode4.fault_input",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Input fault trigger", }, {
    "Plant.Subsystem.Monitoring.Diode4.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode4.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Diode4.i_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Plant.Subsystem.Monitoring.Diode4.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode4.i_out",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Diode current output", }, {
    "Plant.Subsystem.Monitoring.Diode4.ni.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode4.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode4.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Plant.Subsystem.Monitoring.Diode4.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode4.v_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Plant.Subsystem.Monitoring.Diode4.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode4.v_on",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "v_on", }, {
    "Plant.Subsystem.Monitoring.Diode5.private.Diode.BV_threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "BV_threshold", }, {
    "Plant.Subsystem.Monitoring.Diode5.private.Diode.Qscale",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge scale", }, {
    "Plant.Subsystem.Monitoring.Diode5.private.Diode.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode5.private.Diode.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode5.private.Diode.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode5.private.Diode.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode5.private.Diode.threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode5.private.Diode.timerFaultTransition",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "s", 1.0,
    "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Time since triggering fault condition",
  }, { "Plant.Subsystem.Monitoring.Diode5.private.Diode.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode5.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode5.Qj",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "C", 1.0,
    "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge of junction capacitance", }, {
    "Plant.Subsystem.Monitoring.Diode5.TJ",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Junction temperature", }, {
    "Plant.Subsystem.Monitoring.Diode5.Tsim",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Simulation temperature on the IV characteristics", }, {
    "Plant.Subsystem.Monitoring.Diode5.fault_input",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Input fault trigger", }, {
    "Plant.Subsystem.Monitoring.Diode5.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode5.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Diode5.i_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Plant.Subsystem.Monitoring.Diode5.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode5.i_out",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Diode current output", }, {
    "Plant.Subsystem.Monitoring.Diode5.ni.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode5.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode5.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Plant.Subsystem.Monitoring.Diode5.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode5.v_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Plant.Subsystem.Monitoring.Diode5.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode5.v_on",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "v_on", }, {
    "Plant.Subsystem.Monitoring.Diode6.private.Diode.BV_threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "BV_threshold", }, {
    "Plant.Subsystem.Monitoring.Diode6.private.Diode.Qscale",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge scale", }, {
    "Plant.Subsystem.Monitoring.Diode6.private.Diode.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode6.private.Diode.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode6.private.Diode.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode6.private.Diode.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode6.private.Diode.threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode6.private.Diode.timerFaultTransition",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "s", 1.0,
    "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Time since triggering fault condition",
  }, { "Plant.Subsystem.Monitoring.Diode6.private.Diode.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode6.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode6.Qj",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "C", 1.0,
    "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge of junction capacitance", }, {
    "Plant.Subsystem.Monitoring.Diode6.TJ",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Junction temperature", }, {
    "Plant.Subsystem.Monitoring.Diode6.Tsim",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Simulation temperature on the IV characteristics", }, {
    "Plant.Subsystem.Monitoring.Diode6.fault_input",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Input fault trigger", }, {
    "Plant.Subsystem.Monitoring.Diode6.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode6.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Diode6.i_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Plant.Subsystem.Monitoring.Diode6.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode6.i_out",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Diode current output", }, {
    "Plant.Subsystem.Monitoring.Diode6.ni.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode6.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode6.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Plant.Subsystem.Monitoring.Diode6.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode6.v_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Plant.Subsystem.Monitoring.Diode6.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode6.v_on",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "v_on", }, {
    "Plant.Subsystem.Monitoring.Diode7.private.Diode.BV_threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "BV_threshold", }, {
    "Plant.Subsystem.Monitoring.Diode7.private.Diode.Qscale",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge scale", }, {
    "Plant.Subsystem.Monitoring.Diode7.private.Diode.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode7.private.Diode.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode7.private.Diode.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode7.private.Diode.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode7.private.Diode.threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode7.private.Diode.timerFaultTransition",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "s", 1.0,
    "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Time since triggering fault condition",
  }, { "Plant.Subsystem.Monitoring.Diode7.private.Diode.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode7.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode7.Qj",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "C", 1.0,
    "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge of junction capacitance", }, {
    "Plant.Subsystem.Monitoring.Diode7.TJ",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Junction temperature", }, {
    "Plant.Subsystem.Monitoring.Diode7.Tsim",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Simulation temperature on the IV characteristics", }, {
    "Plant.Subsystem.Monitoring.Diode7.fault_input",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Input fault trigger", }, {
    "Plant.Subsystem.Monitoring.Diode7.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode7.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Diode7.i_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Plant.Subsystem.Monitoring.Diode7.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode7.i_out",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Diode current output", }, {
    "Plant.Subsystem.Monitoring.Diode7.ni.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode7.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode7.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Plant.Subsystem.Monitoring.Diode7.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode7.v_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Plant.Subsystem.Monitoring.Diode7.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode7.v_on",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "v_on", }, {
    "Plant.Subsystem.Monitoring.Diode8.private.Diode.BV_threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "BV_threshold", }, {
    "Plant.Subsystem.Monitoring.Diode8.private.Diode.Qscale",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge scale", }, {
    "Plant.Subsystem.Monitoring.Diode8.private.Diode.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode8.private.Diode.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode8.private.Diode.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode8.private.Diode.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode8.private.Diode.threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode8.private.Diode.timerFaultTransition",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "s", 1.0,
    "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Time since triggering fault condition",
  }, { "Plant.Subsystem.Monitoring.Diode8.private.Diode.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode8.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode8.Qj",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "C", 1.0,
    "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge of junction capacitance", }, {
    "Plant.Subsystem.Monitoring.Diode8.TJ",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Junction temperature", }, {
    "Plant.Subsystem.Monitoring.Diode8.Tsim",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Simulation temperature on the IV characteristics", }, {
    "Plant.Subsystem.Monitoring.Diode8.fault_input",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Input fault trigger", }, {
    "Plant.Subsystem.Monitoring.Diode8.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode8.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Diode8.i_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Plant.Subsystem.Monitoring.Diode8.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode8.i_out",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Diode current output", }, {
    "Plant.Subsystem.Monitoring.Diode8.ni.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode8.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode8.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Plant.Subsystem.Monitoring.Diode8.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode8.v_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Plant.Subsystem.Monitoring.Diode8.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode8.v_on",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "v_on", }, {
    "Plant.Subsystem.Monitoring.Diode9.private.Diode.BV_threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "BV_threshold", }, {
    "Plant.Subsystem.Monitoring.Diode9.private.Diode.Qscale",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge scale", }, {
    "Plant.Subsystem.Monitoring.Diode9.private.Diode.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode9.private.Diode.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode9.private.Diode.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode9.private.Diode.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode9.private.Diode.threshold",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "threshold", }, {
    "Plant.Subsystem.Monitoring.Diode9.private.Diode.timerFaultTransition",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "s", 1.0,
    "s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Time since triggering fault condition",
  }, { "Plant.Subsystem.Monitoring.Diode9.private.Diode.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode9.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode9.Qj",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "C", 1.0,
    "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge of junction capacitance", }, {
    "Plant.Subsystem.Monitoring.Diode9.TJ",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Junction temperature", }, {
    "Plant.Subsystem.Monitoring.Diode9.Tsim",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "K", 1.0,
    "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Simulation temperature on the IV characteristics", }, {
    "Plant.Subsystem.Monitoring.Diode9.fault_input",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Input fault trigger", }, {
    "Plant.Subsystem.Monitoring.Diode9.faulted",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Fault flag", }, {
    "Plant.Subsystem.Monitoring.Diode9.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Diode9.i_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "Plant.Subsystem.Monitoring.Diode9.i_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "Plant.Subsystem.Monitoring.Diode9.i_out",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Diode current output", }, {
    "Plant.Subsystem.Monitoring.Diode9.ni.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode9.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode9.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "Plant.Subsystem.Monitoring.Diode9.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Diode9.v_capacitor",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "Plant.Subsystem.Monitoring.Diode9.v_diode",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "Plant.Subsystem.Monitoring.Diode9.v_on",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "v_on", }, {
    "Plant.Subsystem.Monitoring.Electrical_Reference.V.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Electrical Reference", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor", { 1, "1x1" }, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Resistor.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor", { 1, "1x1" },
    "A^2*Ohm", 1.0, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Resistor1.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor1", { 1, "1x1" }, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Resistor1.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor1", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor1.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor1", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor1.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor1", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor1.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor1", { 1, "1x1" },
    "A^2*Ohm", 1.0, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Resistor10.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor10", { 1, "1x1" }, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Resistor10.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor10", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor10.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor10", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor10.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor10", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor10.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor10", { 1, "1x1" },
    "A^2*Ohm", 1.0, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Resistor11.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor11", { 1, "1x1" }, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Resistor11.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor11", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor11.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor11", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor11.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor11", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor11.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor11", { 1, "1x1" },
    "A^2*Ohm", 1.0, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Resistor2.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor2", { 1, "1x1" }, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Resistor2.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor2", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor2.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor2", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor2.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor2", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor2.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor2", { 1, "1x1" },
    "A^2*Ohm", 1.0, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Resistor3.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor3", { 1, "1x1" }, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Resistor3.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor3", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor3.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor3", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor3.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor3", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor3.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor3", { 1, "1x1" },
    "A^2*Ohm", 1.0, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Resistor4.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor4", { 1, "1x1" }, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Resistor4.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor4", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor4.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor4", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor4.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor4", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor4.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor4", { 1, "1x1" },
    "A^2*Ohm", 1.0, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Resistor5.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor5", { 1, "1x1" }, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Resistor5.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor5", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor5.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor5", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor5.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor5", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor5.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor5", { 1, "1x1" },
    "A^2*Ohm", 1.0, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Resistor6.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor6", { 1, "1x1" }, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Resistor6.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor6", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor6.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor6", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor6.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor6", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor6.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor6", { 1, "1x1" },
    "A^2*Ohm", 1.0, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Resistor7.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor7", { 1, "1x1" }, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Resistor7.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor7", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor7.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor7", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor7.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor7", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor7.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor7", { 1, "1x1" },
    "A^2*Ohm", 1.0, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Resistor8.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor8", { 1, "1x1" }, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Resistor8.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor8", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor8.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor8", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor8.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor8", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor8.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor8", { 1, "1x1" },
    "A^2*Ohm", 1.0, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Resistor9.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor9", { 1, "1x1" }, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Resistor9.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor9", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor9.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor9", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor9.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor9", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Resistor9.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Resistor9", { 1, "1x1" },
    "A^2*Ohm", 1.0, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter10_output0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS\nConverter10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter10_output0",
  }, { "Plant.Subsystem.Monitoring.Simulink_PS_Converter11_output0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS\nConverter11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter11_output0",
  }, { "Plant.Subsystem.Monitoring.Simulink_PS_Converter1_output0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS\nConverter1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter1_output0",
  }, { "Plant.Subsystem.Monitoring.Simulink_PS_Converter2_output0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS\nConverter2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter2_output0",
  }, { "Plant.Subsystem.Monitoring.Simulink_PS_Converter3_output0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS\nConverter3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter3_output0",
  }, { "Plant.Subsystem.Monitoring.Simulink_PS_Converter4_output0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS\nConverter4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter4_output0",
  }, { "Plant.Subsystem.Monitoring.Simulink_PS_Converter5_output0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS\nConverter5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter5_output0",
  }, { "Plant.Subsystem.Monitoring.Simulink_PS_Converter6_output0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS\nConverter6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter6_output0",
  }, { "Plant.Subsystem.Monitoring.Simulink_PS_Converter7_output0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS\nConverter7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter7_output0",
  }, { "Plant.Subsystem.Monitoring.Simulink_PS_Converter8_output0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS\nConverter8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter8_output0",
  }, { "Plant.Subsystem.Monitoring.Simulink_PS_Converter9_output0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS\nConverter9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter9_output0",
  }, { "Plant.Subsystem.Monitoring.Simulink_PS_Converter_output0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Simulink-PS\nConverter", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter_output0",
  }, { "Plant.Subsystem.Monitoring.Switch.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Switch.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch", { 1, "1x1" }, "A*V",
    1.0, "A*V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Switch.vT",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Plant.Subsystem.Monitoring.Switch1.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch1", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Switch1.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch1", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch1.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch1", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch1.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch1", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch1.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch1", { 1, "1x1" }, "A*V",
    1.0, "A*V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Switch1.vT",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch1", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Plant.Subsystem.Monitoring.Switch10.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch10", { 1, "1x1" }, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Switch10.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch10", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch10.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch10", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch10.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch10", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch10.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch10", { 1, "1x1" }, "A*V",
    1.0, "A*V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Switch10.vT",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch10", { 1, "1x1" }, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Plant.Subsystem.Monitoring.Switch11.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch11", { 1, "1x1" }, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Switch11.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch11", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch11.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch11", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch11.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch11", { 1, "1x1" }, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch11.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch11", { 1, "1x1" }, "A*V",
    1.0, "A*V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Switch11.vT",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch11", { 1, "1x1" }, "1",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Plant.Subsystem.Monitoring.Switch2.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch2", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Switch2.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch2", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch2.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch2", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch2.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch2", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch2.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch2", { 1, "1x1" }, "A*V",
    1.0, "A*V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Switch2.vT",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch2", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Plant.Subsystem.Monitoring.Switch3.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch3", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Switch3.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch3", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch3.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch3", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch3.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch3", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch3.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch3", { 1, "1x1" }, "A*V",
    1.0, "A*V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Switch3.vT",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch3", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Plant.Subsystem.Monitoring.Switch4.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch4", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Switch4.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch4", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch4.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch4", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch4.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch4", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch4.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch4", { 1, "1x1" }, "A*V",
    1.0, "A*V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Switch4.vT",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch4", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Plant.Subsystem.Monitoring.Switch5.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch5", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Switch5.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch5", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch5.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch5", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch5.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch5", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch5.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch5", { 1, "1x1" }, "A*V",
    1.0, "A*V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Switch5.vT",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch5", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Plant.Subsystem.Monitoring.Switch6.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch6", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Switch6.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch6", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch6.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch6", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch6.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch6", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch6.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch6", { 1, "1x1" }, "A*V",
    1.0, "A*V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Switch6.vT",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch6", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Plant.Subsystem.Monitoring.Switch7.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch7", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Switch7.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch7", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch7.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch7", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch7.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch7", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch7.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch7", { 1, "1x1" }, "A*V",
    1.0, "A*V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Switch7.vT",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch7", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Plant.Subsystem.Monitoring.Switch8.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch8", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Switch8.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch8", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch8.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch8", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch8.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch8", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch8.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch8", { 1, "1x1" }, "A*V",
    1.0, "A*V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Switch8.vT",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch8", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Plant.Subsystem.Monitoring.Switch9.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch9", { 1, "1x1" }, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "Plant.Subsystem.Monitoring.Switch9.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch9", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch9.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch9", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch9.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch9", { 1, "1x1" }, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Switch9.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch9", { 1, "1x1" }, "A*V",
    1.0, "A*V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Dissipated power", }, {
    "Plant.Subsystem.Monitoring.Switch9.vT",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch9", { 1, "1x1" }, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor.V",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor1.V",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor1", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor1.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor1", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor1.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor1", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor10.V",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor10", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor10.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor10", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor10.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor10", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor10_V0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink\nConverter10", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage_Sensor10_V0", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor11.V",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor11", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor11.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor11", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor11.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor11", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor11_V0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink\nConverter11", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage_Sensor11_V0", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor1_V0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink\nConverter1", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage_Sensor1_V0", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor2.V",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor2", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor2.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor2", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor2.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor2", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor2_V0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink\nConverter2", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage_Sensor2_V0", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor3.V",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor3", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor3.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor3", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor3.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor3", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor3_V0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink\nConverter3", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage_Sensor3_V0", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor4.V",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor4", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor4.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor4", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor4.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor4", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor4_V0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink\nConverter4", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage_Sensor4_V0", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor5.V",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor5", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor5.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor5", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor5.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor5", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor5_V0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink\nConverter5", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage_Sensor5_V0", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor6.V",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor6", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor6.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor6", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor6.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor6", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor6_V0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink\nConverter6", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage_Sensor6_V0", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor7.V",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor7", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor7.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor7", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor7.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor7", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor7_V0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink\nConverter7", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage_Sensor7_V0", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor8.V",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor8", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor8.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor8", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor8.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor8", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor8_V0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink\nConverter8", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage_Sensor8_V0", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor9.V",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor9", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor9.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor9", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor9.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Voltage Sensor9", { 1, "1x1" },
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor9_V0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink\nConverter9", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage_Sensor9_V0", }, {
    "Plant.Subsystem.Monitoring.Voltage_Sensor_V0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/PS-Simulink\nConverter", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage_Sensor_V0", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.cellAgingTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellAgingTemperature", },
  { "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery cell look-up temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "A*hr", 1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.dynamicCellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "dynamicCellTemperature",
  }, { "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.numCycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "numCycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "OCVFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.rcVoltageDrop",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 5,
      "1x5" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.xGdynamic",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 5,
      "1x5" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Dynamic resistances (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.xGsd",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Rleak(T,N) (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R0Fade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "RLeakFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "AHFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "xdR_fading", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "C", 1.0, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.cyclingAgingModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.cyclingAgingModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "num_cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.cyclingAgingModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Self-discharge resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.cyclingAgingModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.cyclingAgingModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.cyclingAgingModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Dynamic resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.cyclingAgingModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.ocv",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Open-circuit voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "kW", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Power dissipated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.thermalModel.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.thermalModel.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Heat flow", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.thermalModel.cellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellTemperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.thermalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.thermalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.cellAgingTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellAgingTemperature", },
  { "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery cell look-up temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "A*hr", 1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.dynamicCellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "dynamicCellTemperature",
  }, { "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.numCycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "numCycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "OCVFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.rcVoltageDrop",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 5,
      "1x5" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.xGdynamic",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 5,
      "1x5" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Dynamic resistances (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.xGsd",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Rleak(T,N) (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R0Fade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "RLeakFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "AHFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "xdR_fading", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "C", 1.0, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.cyclingAgingModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.cyclingAgingModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "num_cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.cyclingAgingModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Self-discharge resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.cyclingAgingModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.cyclingAgingModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.cyclingAgingModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Dynamic resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.cyclingAgingModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.ocv",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Open-circuit voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "kW", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Power dissipated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.thermalModel.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.thermalModel.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Heat flow", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.thermalModel.cellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellTemperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.thermalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.thermalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.cellAgingTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellAgingTemperature", },
  { "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery cell look-up temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "A*hr", 1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.dynamicCellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "dynamicCellTemperature",
  }, { "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.numCycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "numCycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "OCVFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.rcVoltageDrop",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 5,
      "1x5" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.xGdynamic",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 5,
      "1x5" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Dynamic resistances (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.xGsd",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Rleak(T,N) (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R0Fade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "RLeakFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "AHFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "xdR_fading", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "C", 1.0, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.cyclingAgingModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.cyclingAgingModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "num_cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.cyclingAgingModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Self-discharge resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.cyclingAgingModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.cyclingAgingModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.cyclingAgingModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Dynamic resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.cyclingAgingModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.ocv",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Open-circuit voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "kW", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Power dissipated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.thermalModel.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.thermalModel.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Heat flow", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.thermalModel.cellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellTemperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.thermalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.thermalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based10_soc0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter22", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery_Table_Based10_soc0", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.cellAgingTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellAgingTemperature", },
  { "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery cell look-up temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "A*hr", 1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.dynamicCellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "dynamicCellTemperature",
  }, { "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.numCycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "numCycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "OCVFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.rcVoltageDrop",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 5,
      "1x5" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.xGdynamic",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 5,
      "1x5" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Dynamic resistances (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.xGsd",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Rleak(T,N) (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R0Fade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "RLeakFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "AHFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "xdR_fading", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "C", 1.0, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.cyclingAgingModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.cyclingAgingModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "num_cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.cyclingAgingModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Self-discharge resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.cyclingAgingModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.cyclingAgingModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.cyclingAgingModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Dynamic resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.cyclingAgingModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.ocv",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Open-circuit voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "kW", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Power dissipated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.thermalModel.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.thermalModel.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Heat flow", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.thermalModel.cellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellTemperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.thermalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.thermalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based11_soc0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter23", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery_Table_Based11_soc0", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based1_soc0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter13", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery_Table_Based1_soc0", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.cellAgingTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellAgingTemperature", },
  { "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery cell look-up temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "A*hr", 1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.dynamicCellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "dynamicCellTemperature",
  }, { "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.numCycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "numCycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "OCVFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.rcVoltageDrop",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 5,
      "1x5" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.xGdynamic",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 5,
      "1x5" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Dynamic resistances (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.xGsd",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Rleak(T,N) (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R0Fade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "RLeakFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "AHFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "xdR_fading", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "C", 1.0, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.cyclingAgingModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.cyclingAgingModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "num_cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.cyclingAgingModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Self-discharge resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.cyclingAgingModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.cyclingAgingModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.cyclingAgingModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Dynamic resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.cyclingAgingModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.ocv",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Open-circuit voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "kW", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Power dissipated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.thermalModel.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.thermalModel.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Heat flow", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.thermalModel.cellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellTemperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.thermalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.thermalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based2_soc0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter14", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery_Table_Based2_soc0", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.cellAgingTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellAgingTemperature", },
  { "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery cell look-up temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "A*hr", 1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.dynamicCellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "dynamicCellTemperature",
  }, { "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.numCycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "numCycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "OCVFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.rcVoltageDrop",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 5,
      "1x5" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.xGdynamic",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 5,
      "1x5" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Dynamic resistances (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.xGsd",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Rleak(T,N) (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R0Fade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "RLeakFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "AHFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "xdR_fading", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "C", 1.0, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.cyclingAgingModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.cyclingAgingModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "num_cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.cyclingAgingModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Self-discharge resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.cyclingAgingModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.cyclingAgingModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.cyclingAgingModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Dynamic resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.cyclingAgingModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.ocv",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Open-circuit voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "kW", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Power dissipated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.thermalModel.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.thermalModel.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Heat flow", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.thermalModel.cellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellTemperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.thermalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.thermalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based3_soc0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter15", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery_Table_Based3_soc0", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.cellAgingTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellAgingTemperature", },
  { "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery cell look-up temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "A*hr", 1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.dynamicCellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "dynamicCellTemperature",
  }, { "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.numCycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "numCycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "OCVFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.rcVoltageDrop",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 5,
      "1x5" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.xGdynamic",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 5,
      "1x5" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Dynamic resistances (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.xGsd",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Rleak(T,N) (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R0Fade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "RLeakFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "AHFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "xdR_fading", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "C", 1.0, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.cyclingAgingModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.cyclingAgingModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "num_cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.cyclingAgingModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Self-discharge resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.cyclingAgingModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.cyclingAgingModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.cyclingAgingModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Dynamic resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.cyclingAgingModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.ocv",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Open-circuit voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "kW", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Power dissipated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.thermalModel.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.thermalModel.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Heat flow", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.thermalModel.cellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellTemperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.thermalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.thermalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based4_soc0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter16", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery_Table_Based4_soc0", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.cellAgingTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellAgingTemperature", },
  { "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery cell look-up temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "A*hr", 1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.dynamicCellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "dynamicCellTemperature",
  }, { "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.numCycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "numCycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "OCVFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.rcVoltageDrop",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 5,
      "1x5" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.xGdynamic",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 5,
      "1x5" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Dynamic resistances (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.xGsd",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Rleak(T,N) (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R0Fade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "RLeakFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "AHFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "xdR_fading", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "C", 1.0, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.cyclingAgingModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.cyclingAgingModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "num_cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.cyclingAgingModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Self-discharge resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.cyclingAgingModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.cyclingAgingModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.cyclingAgingModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Dynamic resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.cyclingAgingModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.ocv",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Open-circuit voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "kW", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Power dissipated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.thermalModel.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.thermalModel.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Heat flow", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.thermalModel.cellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellTemperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.thermalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.thermalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based5_soc0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter17", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery_Table_Based5_soc0", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.cellAgingTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellAgingTemperature", },
  { "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery cell look-up temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "A*hr", 1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.dynamicCellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "dynamicCellTemperature",
  }, { "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.numCycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "numCycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "OCVFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.rcVoltageDrop",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 5,
      "1x5" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.xGdynamic",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 5,
      "1x5" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Dynamic resistances (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.xGsd",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Rleak(T,N) (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R0Fade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "RLeakFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "AHFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "xdR_fading", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "C", 1.0, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.cyclingAgingModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.cyclingAgingModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "num_cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.cyclingAgingModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Self-discharge resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.cyclingAgingModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.cyclingAgingModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.cyclingAgingModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Dynamic resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.cyclingAgingModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.ocv",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Open-circuit voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "kW", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Power dissipated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.thermalModel.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.thermalModel.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Heat flow", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.thermalModel.cellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellTemperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.thermalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.thermalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based6_soc0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter18", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery_Table_Based6_soc0", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.cellAgingTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellAgingTemperature", },
  { "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery cell look-up temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "A*hr", 1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.dynamicCellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "dynamicCellTemperature",
  }, { "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.numCycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "numCycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "OCVFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.rcVoltageDrop",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 5,
      "1x5" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.xGdynamic",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 5,
      "1x5" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Dynamic resistances (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.xGsd",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Rleak(T,N) (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R0Fade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "RLeakFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "AHFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "xdR_fading", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "C", 1.0, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.cyclingAgingModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.cyclingAgingModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "num_cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.cyclingAgingModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Self-discharge resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.cyclingAgingModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.cyclingAgingModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.cyclingAgingModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Dynamic resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.cyclingAgingModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.ocv",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Open-circuit voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "kW", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Power dissipated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.thermalModel.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.thermalModel.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Heat flow", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.thermalModel.cellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellTemperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.thermalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.thermalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based7_soc0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter19", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery_Table_Based7_soc0", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.cellAgingTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellAgingTemperature", },
  { "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery cell look-up temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "A*hr", 1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.dynamicCellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "dynamicCellTemperature",
  }, { "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.numCycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "numCycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "OCVFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.rcVoltageDrop",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 5,
      "1x5" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.xGdynamic",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 5,
      "1x5" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Dynamic resistances (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.xGsd",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Rleak(T,N) (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R0Fade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "RLeakFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "AHFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "xdR_fading", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "C", 1.0, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.cyclingAgingModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.cyclingAgingModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "num_cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.cyclingAgingModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Self-discharge resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.cyclingAgingModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.cyclingAgingModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.cyclingAgingModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Dynamic resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.cyclingAgingModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.ocv",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Open-circuit voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "kW", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Power dissipated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.thermalModel.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.thermalModel.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Heat flow", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.thermalModel.cellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellTemperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.thermalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.thermalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based8_soc0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter20", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery_Table_Based8_soc0", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.cellAgingTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellAgingTemperature", },
  { "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery cell look-up temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "A*hr", 1.0, "C", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.dynamicCellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "dynamicCellTemperature",
  }, { "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.numCycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "numCycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "OCVFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.rcVoltageDrop",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 5,
      "1x5" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Voltage drop through each RC pair (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.xGdynamic",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 5,
      "1x5" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Dynamic resistances (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.xGsd",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1/Ohm", 1.0, "C^2*s/(kg*m^2)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "1/Rleak(T,N) (Internal)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "R0Fade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "RLeakFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "AHFade", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "xdR_fading", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.charge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "C", 1.0, "C", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.cyclingAgingModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.cyclingAgingModel.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "num_cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.cyclingAgingModel.xRleak_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Self-discharge resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.cyclingAgingModel.xdAH_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Cell capacity fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.cyclingAgingModel.xdR0_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Internal resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.cyclingAgingModel.xdR_fading",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Dynamic resistance fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.cyclingAgingModel.xdVint_fade",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Open-circuit voltage fading factor", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.i",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.n.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.num_cycles",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.ocv",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Open-circuit voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.p.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.power_dissipated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "kW", 1.0, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "Power dissipated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.soc",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "SOC", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "State of charge", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.thermalModel.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.thermalModel.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Heat flow", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.thermalModel.cellTemperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cellTemperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.thermalModel.cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, TRUE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "cell_temperature", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.thermalModel.q_generated",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "q_generated", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Terminal voltage", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based9_soc0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter21", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE,
    "Battery_Table_Based9_soc0", }, {
    "Plant.Subsystem.Series_Module.Battery_Table_Based_soc0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter12", {
      1, "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Battery_Table_Based_soc0",
  }, { "Plant.Subsystem.Series_Module.Connection_Port.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Connection_Port1.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Connection_Port10.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Connection_Port11.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Connection_Port12.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Connection_Port2.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Connection_Port3.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Connection_Port4.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Connection_Port5.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Connection_Port6.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Connection_Port7.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Connection_Port8.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Connection_Port9.v",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Plant.Subsystem.Series_Module.Controlled_Temperature_Source.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Controlled Temperature Source",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Controlled_Temperature_Source.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Controlled Temperature Source",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Controlled_Temperature_Source.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Controlled Temperature Source",
    { 1, "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Plant.Subsystem.Series_Module.Controlled_Temperature_Source.S",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Controlled Temperature Source",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, {
    "Plant.Subsystem.Series_Module.Controlled_Temperature_Source.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Controlled Temperature Source",
    { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", },
  { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer", {
      1, "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", },
  { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer.var_heat_tr_coeff",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer", {
      1, "1x1" }, "W/(K*m^2)", 1.0, "kg/(K*s^3)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "K", },
    { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer1.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer1", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer1.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer1", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer1.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer1", {
      1, "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer1.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer1", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", },
  { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer1.var_heat_tr_coeff",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer1", {
      1, "1x1" }, "W/(K*m^2)", 1.0, "kg/(K*s^3)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "K", },
    { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer10.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer10",
      { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer10.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer10",
      { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer10.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer10",
      { 1, "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer10.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer10",
      { 1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", },
  { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer10.var_heat_tr_coeff",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer10",
      { 1, "1x1" }, "W/(K*m^2)", 1.0, "kg/(K*s^3)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "K", },
    { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer2.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer2", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer2.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer2", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer2.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer2", {
      1, "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer2.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer2", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", },
  { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer2.var_heat_tr_coeff",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer2", {
      1, "1x1" }, "W/(K*m^2)", 1.0, "kg/(K*s^3)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "K", },
    { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer3.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer3", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer3.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer3", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer3.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer3", {
      1, "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer3.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer3", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", },
  { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer3.var_heat_tr_coeff",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer3", {
      1, "1x1" }, "W/(K*m^2)", 1.0, "kg/(K*s^3)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "K", },
    { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer4.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer4", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer4.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer4", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer4.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer4", {
      1, "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer4.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer4", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", },
  { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer4.var_heat_tr_coeff",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer4", {
      1, "1x1" }, "W/(K*m^2)", 1.0, "kg/(K*s^3)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "K", },
    { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer5.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer5", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer5.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer5", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer5.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer5", {
      1, "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer5.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer5", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", },
  { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer5.var_heat_tr_coeff",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer5", {
      1, "1x1" }, "W/(K*m^2)", 1.0, "kg/(K*s^3)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "K", },
    { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer6.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer6", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer6.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer6", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer6.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer6", {
      1, "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer6.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer6", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", },
  { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer6.var_heat_tr_coeff",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer6", {
      1, "1x1" }, "W/(K*m^2)", 1.0, "kg/(K*s^3)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "K", },
    { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer7.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer7", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer7.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer7", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer7.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer7", {
      1, "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer7.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer7", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", },
  { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer7.var_heat_tr_coeff",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer7", {
      1, "1x1" }, "W/(K*m^2)", 1.0, "kg/(K*s^3)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "K", },
    { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer8.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer8", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer8.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer8", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer8.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer8", {
      1, "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer8.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer8", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", },
  { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer8.var_heat_tr_coeff",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer8", {
      1, "1x1" }, "W/(K*m^2)", 1.0, "kg/(K*s^3)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "K", },
    { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer9.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer9", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer9.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer9", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer9.Q",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer9", {
      1, "1x1" }, "W", 1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Heat flow rate", }, {
    "Plant.Subsystem.Series_Module.Convective_Heat_Transfer9.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer9", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature difference", },
  { "Plant.Subsystem.Series_Module.Convective_Heat_Transfer9.var_heat_tr_coeff",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Convective Heat Transfer9", {
      1, "1x1" }, "W/(K*m^2)", 1.0, "kg/(K*s^3)", NE_NOMINAL_SOURCE_DERIVED,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "K", },
    { "Plant.Subsystem.Series_Module.Perfect_Insulator.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Perfect Insulator", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Perfect_Insulator.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Perfect Insulator", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Simulink_PS_Converter_output0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Simulink-PS\nConverter", { 1,
      "1x1" }, "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter_output0",
  }, { "Plant.Subsystem.Series_Module.Temperature_Sensor.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor1.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor1.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor1.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor10.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor10", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor10.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor10", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor10.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor10", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor10_T0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter10", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature_Sensor10_T0",
  }, { "Plant.Subsystem.Series_Module.Temperature_Sensor11.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor11", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor11.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor11", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor11.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor11", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor11_T0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter11", {
      1, "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature_Sensor11_T0",
  }, { "Plant.Subsystem.Series_Module.Temperature_Sensor1_T0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature_Sensor1_T0",
  }, { "Plant.Subsystem.Series_Module.Temperature_Sensor2.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor2.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor2.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor2_T0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter2", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature_Sensor2_T0",
  }, { "Plant.Subsystem.Series_Module.Temperature_Sensor3.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor3", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor3.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor3", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor3.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor3", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor3_T0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter3", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature_Sensor3_T0",
  }, { "Plant.Subsystem.Series_Module.Temperature_Sensor4.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor4", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor4.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor4", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor4.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor4", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor4_T0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter4", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature_Sensor4_T0",
  }, { "Plant.Subsystem.Series_Module.Temperature_Sensor5.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor5", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor5.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor5", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor5.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor5", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor5_T0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter5", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature_Sensor5_T0",
  }, { "Plant.Subsystem.Series_Module.Temperature_Sensor6.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor6", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor6.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor6", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor6.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor6", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor6_T0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter6", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature_Sensor6_T0",
  }, { "Plant.Subsystem.Series_Module.Temperature_Sensor7.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor7", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor7.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor7", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor7.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor7", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor7_T0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter7", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature_Sensor7_T0",
  }, { "Plant.Subsystem.Series_Module.Temperature_Sensor8.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor8", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor8.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor8", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor8.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor8", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor8_T0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter8", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature_Sensor8_T0",
  }, { "Plant.Subsystem.Series_Module.Temperature_Sensor9.A.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor9", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor9.B.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor9", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor9.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Temperature Sensor9", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, {
    "Plant.Subsystem.Series_Module.Temperature_Sensor9_T0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter9", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature_Sensor9_T0",
  }, { "Plant.Subsystem.Series_Module.Temperature_Sensor_T0",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/PS-Simulink\nConverter", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Temperature_Sensor_T0", },
  { "Plant.Subsystem.Series_Module.Thermal_Reference.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Thermal Reference", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Subsystem.Series_Module.Thermal_Reference1.H.T",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Thermal Reference1", { 1,
      "1x1" }, "K", 1.0, "K", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Temperature", }, {
    "Plant.Voltage_Sensor.V", "BMS_PIL_Wrapper/Plant/Voltage Sensor", { 1, "1x1"
    }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Plant.Voltage_Sensor.n.v",
    "BMS_PIL_Wrapper/Plant/Voltage Sensor", { 1, "1x1" }, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Voltage_Sensor.p.v", "BMS_PIL_Wrapper/Plant/Voltage Sensor", { 1,
      "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Plant.Voltage_Sensor_V0", "BMS_PIL_Wrapper/Plant/PS-Simulink\nConverter", {
      1, "1x1" }, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage_Sensor_V0", } };

static NeModeData *s_major_mode_data = NULL;
static NeZCData s_zc_data[132] = { {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode", 1U, 0U,
    "Plant.Subsystem.Monitoring.Diode.private.Diode",
    "ee.semiconductors.diodePiecewiseLinear", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode1", 1U, 1U,
    "Plant.Subsystem.Monitoring.Diode1.private.Diode",
    "ee.semiconductors.diodePiecewiseLinear", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode10", 1U, 2U,
    "Plant.Subsystem.Monitoring.Diode10.private.Diode",
    "ee.semiconductors.diodePiecewiseLinear", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode11", 1U, 3U,
    "Plant.Subsystem.Monitoring.Diode11.private.Diode",
    "ee.semiconductors.diodePiecewiseLinear", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode2", 1U, 4U,
    "Plant.Subsystem.Monitoring.Diode2.private.Diode",
    "ee.semiconductors.diodePiecewiseLinear", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode3", 1U, 5U,
    "Plant.Subsystem.Monitoring.Diode3.private.Diode",
    "ee.semiconductors.diodePiecewiseLinear", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode4", 1U, 6U,
    "Plant.Subsystem.Monitoring.Diode4.private.Diode",
    "ee.semiconductors.diodePiecewiseLinear", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode5", 1U, 7U,
    "Plant.Subsystem.Monitoring.Diode5.private.Diode",
    "ee.semiconductors.diodePiecewiseLinear", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode6", 1U, 8U,
    "Plant.Subsystem.Monitoring.Diode6.private.Diode",
    "ee.semiconductors.diodePiecewiseLinear", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode7", 1U, 9U,
    "Plant.Subsystem.Monitoring.Diode7.private.Diode",
    "ee.semiconductors.diodePiecewiseLinear", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode8", 1U, 10U,
    "Plant.Subsystem.Monitoring.Diode8.private.Diode",
    "ee.semiconductors.diodePiecewiseLinear", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Diode9", 1U, 11U,
    "Plant.Subsystem.Monitoring.Diode9.private.Diode",
    "ee.semiconductors.diodePiecewiseLinear", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    12U, "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.ocv",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    13U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.xxR0",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    14U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel.xxqnom",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    15U, "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    16U, "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    17U, "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    18U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.ocv",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    19U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.xxR0",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    20U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel.xxqnom",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    21U, "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    22U, "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    23U, "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    24U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.ocv",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    25U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.xxR0",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    26U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel.xxqnom",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    27U, "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    28U, "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    29U, "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    30U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.ocv",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    31U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.xxR0",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    32U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel.xxqnom",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    33U, "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    34U, "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    35U, "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    36U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.ocv",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    37U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.xxR0",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    38U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel.xxqnom",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    39U, "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    40U, "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    41U, "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    42U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.ocv",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    43U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.xxR0",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    44U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel.xxqnom",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    45U, "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    46U, "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    47U, "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    48U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.ocv",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    49U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.xxR0",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    50U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel.xxqnom",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    51U, "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    52U, "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    53U, "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    54U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.ocv",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    55U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.xxR0",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    56U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel.xxqnom",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    57U, "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    58U, "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    59U, "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    60U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.ocv",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    61U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.xxR0",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    62U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel.xxqnom",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    63U, "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    64U, "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    65U, "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    66U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.ocv",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    67U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.xxR0",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    68U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel.xxqnom",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    69U, "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    70U, "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    71U, "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    72U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.ocv",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    73U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.xxR0",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    74U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel.xxqnom",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    75U, "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    76U, "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    77U, "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    78U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.ocv",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    79U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.xxR0",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    80U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel.xxqnom",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    81U, "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_TRUE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    82U, "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    83U, "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    84U, "Plant.Subsystem.Series_Module.Battery_Table_Based.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    85U, "Plant.Subsystem.Series_Module.Battery_Table_Based.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    86U, "Plant.Subsystem.Series_Module.Battery_Table_Based.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    87U, "Plant.Subsystem.Series_Module.Battery_Table_Based1.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    88U, "Plant.Subsystem.Series_Module.Battery_Table_Based1.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    89U, "Plant.Subsystem.Series_Module.Battery_Table_Based1.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    90U, "Plant.Subsystem.Series_Module.Battery_Table_Based10.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    91U, "Plant.Subsystem.Series_Module.Battery_Table_Based10.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    92U, "Plant.Subsystem.Series_Module.Battery_Table_Based10.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    93U, "Plant.Subsystem.Series_Module.Battery_Table_Based11.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    94U, "Plant.Subsystem.Series_Module.Battery_Table_Based11.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    95U, "Plant.Subsystem.Series_Module.Battery_Table_Based11.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    96U, "Plant.Subsystem.Series_Module.Battery_Table_Based2.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    97U, "Plant.Subsystem.Series_Module.Battery_Table_Based2.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    98U, "Plant.Subsystem.Series_Module.Battery_Table_Based2.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    99U, "Plant.Subsystem.Series_Module.Battery_Table_Based3.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    100U, "Plant.Subsystem.Series_Module.Battery_Table_Based3.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    101U, "Plant.Subsystem.Series_Module.Battery_Table_Based3.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    102U, "Plant.Subsystem.Series_Module.Battery_Table_Based4.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    103U, "Plant.Subsystem.Series_Module.Battery_Table_Based4.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    104U, "Plant.Subsystem.Series_Module.Battery_Table_Based4.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    105U, "Plant.Subsystem.Series_Module.Battery_Table_Based5.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    106U, "Plant.Subsystem.Series_Module.Battery_Table_Based5.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    107U, "Plant.Subsystem.Series_Module.Battery_Table_Based5.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    108U, "Plant.Subsystem.Series_Module.Battery_Table_Based6.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    109U, "Plant.Subsystem.Series_Module.Battery_Table_Based6.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    110U, "Plant.Subsystem.Series_Module.Battery_Table_Based6.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    111U, "Plant.Subsystem.Series_Module.Battery_Table_Based7.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    112U, "Plant.Subsystem.Series_Module.Battery_Table_Based7.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    113U, "Plant.Subsystem.Series_Module.Battery_Table_Based7.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    114U, "Plant.Subsystem.Series_Module.Battery_Table_Based8.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    115U, "Plant.Subsystem.Series_Module.Battery_Table_Based8.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    116U, "Plant.Subsystem.Series_Module.Battery_Table_Based8.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    117U, "Plant.Subsystem.Series_Module.Battery_Table_Based9.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    118U, "Plant.Subsystem.Series_Module.Battery_Table_Based9.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    119U, "Plant.Subsystem.Series_Module.Battery_Table_Based9.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch", 1U, 120U,
    "Plant.Subsystem.Monitoring.Switch",
    "foundation.electrical.elements.controlled_switch", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch1", 1U, 121U,
    "Plant.Subsystem.Monitoring.Switch1",
    "foundation.electrical.elements.controlled_switch", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch10", 1U, 122U,
    "Plant.Subsystem.Monitoring.Switch10",
    "foundation.electrical.elements.controlled_switch", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch11", 1U, 123U,
    "Plant.Subsystem.Monitoring.Switch11",
    "foundation.electrical.elements.controlled_switch", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch2", 1U, 124U,
    "Plant.Subsystem.Monitoring.Switch2",
    "foundation.electrical.elements.controlled_switch", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch3", 1U, 125U,
    "Plant.Subsystem.Monitoring.Switch3",
    "foundation.electrical.elements.controlled_switch", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch4", 1U, 126U,
    "Plant.Subsystem.Monitoring.Switch4",
    "foundation.electrical.elements.controlled_switch", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch5", 1U, 127U,
    "Plant.Subsystem.Monitoring.Switch5",
    "foundation.electrical.elements.controlled_switch", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch6", 1U, 128U,
    "Plant.Subsystem.Monitoring.Switch6",
    "foundation.electrical.elements.controlled_switch", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch7", 1U, 129U,
    "Plant.Subsystem.Monitoring.Switch7",
    "foundation.electrical.elements.controlled_switch", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch8", 1U, 130U,
    "Plant.Subsystem.Monitoring.Switch8",
    "foundation.electrical.elements.controlled_switch", NE_ZC_TYPE_FALSE, }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Monitoring/Switch9", 1U, 131U,
    "Plant.Subsystem.Monitoring.Switch9",
    "foundation.electrical.elements.controlled_switch", NE_ZC_TYPE_FALSE, } };

static NeRange s_range[132] = { { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, } };

static NeAssertData s_assert_data[144] = { {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 2U,
    0U, "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Temperature adjusted open-circuit voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 2U,
    2U, "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Faded cell capacity must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 2U,
    4U, "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 2U,
    6U, "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "State of charge must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 2U,
    8U, "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "State of charge must be less than or equal to 1.",
    "physmod:simscape:compiler:patterns:checks:LessThanOrEqual", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 2U,
    10U, "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 2U,
    12U, "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 2U,
    14U, "Plant.Subsystem.Series_Module.Battery_Table_Based.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Internal resistance fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 2U,
    16U, "Plant.Subsystem.Series_Module.Battery_Table_Based.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Open-circuit voltage fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 2U,
    18U, "Plant.Subsystem.Series_Module.Battery_Table_Based.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Cell capacity fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 2U,
    20U, "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Temperature adjusted open-circuit voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 2U,
    22U, "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Faded cell capacity must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 2U,
    24U, "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 2U,
    26U, "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "State of charge must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 2U,
    28U, "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "State of charge must be less than or equal to 1.",
    "physmod:simscape:compiler:patterns:checks:LessThanOrEqual", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 2U,
    30U, "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1",
    2U, 32U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1",
    2U, 34U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based1.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Internal resistance fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 2U,
    36U, "Plant.Subsystem.Series_Module.Battery_Table_Based1.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Open-circuit voltage fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 2U,
    38U, "Plant.Subsystem.Series_Module.Battery_Table_Based1.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Cell capacity fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 2U,
    40U, "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Temperature adjusted open-circuit voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 2U,
    42U, "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Faded cell capacity must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 2U,
    44U, "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 2U,
    46U, "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel",
    "batteryecm.table_battery", TRUE,
    "State of charge must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 2U,
    48U, "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel",
    "batteryecm.table_battery", TRUE,
    "State of charge must be less than or equal to 1.",
    "physmod:simscape:compiler:patterns:checks:LessThanOrEqual", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 2U,
    50U, "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel",
    "batteryecm.table_battery", TRUE,
    "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10",
    2U, 52U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel",
    "batteryecm.table_battery", TRUE,
    "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10",
    2U, 54U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based10.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", FALSE,
    "Internal resistance fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 2U,
    56U, "Plant.Subsystem.Series_Module.Battery_Table_Based10.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", FALSE,
    "Open-circuit voltage fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 2U,
    58U, "Plant.Subsystem.Series_Module.Battery_Table_Based10.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", FALSE,
    "Cell capacity fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 2U,
    60U, "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Temperature adjusted open-circuit voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 2U,
    62U, "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Faded cell capacity must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 2U,
    64U, "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 2U,
    66U, "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "State of charge must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 2U,
    68U, "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "State of charge must be less than or equal to 1.",
    "physmod:simscape:compiler:patterns:checks:LessThanOrEqual", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 2U,
    70U, "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11",
    2U, 72U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11",
    2U, 74U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based11.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Internal resistance fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 2U,
    76U, "Plant.Subsystem.Series_Module.Battery_Table_Based11.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Open-circuit voltage fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 2U,
    78U, "Plant.Subsystem.Series_Module.Battery_Table_Based11.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Cell capacity fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 2U,
    80U, "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Temperature adjusted open-circuit voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 2U,
    82U, "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Faded cell capacity must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 2U,
    84U, "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 2U,
    86U, "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "State of charge must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 2U,
    88U, "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "State of charge must be less than or equal to 1.",
    "physmod:simscape:compiler:patterns:checks:LessThanOrEqual", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 2U,
    90U, "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2",
    2U, 92U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2",
    2U, 94U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based2.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Internal resistance fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 2U,
    96U, "Plant.Subsystem.Series_Module.Battery_Table_Based2.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Open-circuit voltage fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 2U,
    98U, "Plant.Subsystem.Series_Module.Battery_Table_Based2.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Cell capacity fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 2U,
    100U, "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Temperature adjusted open-circuit voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 2U,
    102U, "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Faded cell capacity must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 2U,
    104U, "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 2U,
    106U, "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel",
    "batteryecm.table_battery", TRUE,
    "State of charge must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 2U,
    108U, "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel",
    "batteryecm.table_battery", TRUE,
    "State of charge must be less than or equal to 1.",
    "physmod:simscape:compiler:patterns:checks:LessThanOrEqual", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 2U,
    110U, "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel",
    "batteryecm.table_battery", TRUE,
    "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3",
    2U, 112U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel",
    "batteryecm.table_battery", TRUE,
    "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3",
    2U, 114U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based3.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Internal resistance fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 2U,
    116U, "Plant.Subsystem.Series_Module.Battery_Table_Based3.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Open-circuit voltage fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 2U,
    118U, "Plant.Subsystem.Series_Module.Battery_Table_Based3.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Cell capacity fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 2U,
    120U, "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Temperature adjusted open-circuit voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 2U,
    122U, "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Faded cell capacity must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 2U,
    124U, "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 2U,
    126U, "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel",
    "batteryecm.table_battery", TRUE,
    "State of charge must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 2U,
    128U, "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel",
    "batteryecm.table_battery", TRUE,
    "State of charge must be less than or equal to 1.",
    "physmod:simscape:compiler:patterns:checks:LessThanOrEqual", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 2U,
    130U, "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel",
    "batteryecm.table_battery", TRUE,
    "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4",
    2U, 132U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel",
    "batteryecm.table_battery", TRUE,
    "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4",
    2U, 134U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based4.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Internal resistance fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 2U,
    136U, "Plant.Subsystem.Series_Module.Battery_Table_Based4.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Open-circuit voltage fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 2U,
    138U, "Plant.Subsystem.Series_Module.Battery_Table_Based4.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Cell capacity fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 2U,
    140U, "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Temperature adjusted open-circuit voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 2U,
    142U, "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Faded cell capacity must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 2U,
    144U, "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 2U,
    146U, "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel",
    "batteryecm.table_battery", TRUE,
    "State of charge must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 2U,
    148U, "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel",
    "batteryecm.table_battery", TRUE,
    "State of charge must be less than or equal to 1.",
    "physmod:simscape:compiler:patterns:checks:LessThanOrEqual", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 2U,
    150U, "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel",
    "batteryecm.table_battery", TRUE,
    "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5",
    2U, 152U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel",
    "batteryecm.table_battery", TRUE,
    "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5",
    2U, 154U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based5.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", FALSE,
    "Internal resistance fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 2U,
    156U, "Plant.Subsystem.Series_Module.Battery_Table_Based5.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", FALSE,
    "Open-circuit voltage fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 2U,
    158U, "Plant.Subsystem.Series_Module.Battery_Table_Based5.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", FALSE,
    "Cell capacity fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 2U,
    160U, "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Temperature adjusted open-circuit voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 2U,
    162U, "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Faded cell capacity must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 2U,
    164U, "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 2U,
    166U, "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "State of charge must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 2U,
    168U, "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "State of charge must be less than or equal to 1.",
    "physmod:simscape:compiler:patterns:checks:LessThanOrEqual", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 2U,
    170U, "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6",
    2U, 172U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6",
    2U, 174U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based6.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", FALSE,
    "Internal resistance fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 2U,
    176U, "Plant.Subsystem.Series_Module.Battery_Table_Based6.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", FALSE,
    "Open-circuit voltage fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 2U,
    178U, "Plant.Subsystem.Series_Module.Battery_Table_Based6.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", FALSE,
    "Cell capacity fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 2U,
    180U, "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Temperature adjusted open-circuit voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 2U,
    182U, "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Faded cell capacity must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 2U,
    184U, "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 2U,
    186U, "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel",
    "batteryecm.table_battery", TRUE,
    "State of charge must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 2U,
    188U, "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel",
    "batteryecm.table_battery", TRUE,
    "State of charge must be less than or equal to 1.",
    "physmod:simscape:compiler:patterns:checks:LessThanOrEqual", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 2U,
    190U, "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel",
    "batteryecm.table_battery", TRUE,
    "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7",
    2U, 192U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel",
    "batteryecm.table_battery", TRUE,
    "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7",
    2U, 194U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based7.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", FALSE,
    "Internal resistance fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 2U,
    196U, "Plant.Subsystem.Series_Module.Battery_Table_Based7.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", FALSE,
    "Open-circuit voltage fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 2U,
    198U, "Plant.Subsystem.Series_Module.Battery_Table_Based7.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", FALSE,
    "Cell capacity fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 2U,
    200U, "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Temperature adjusted open-circuit voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 2U,
    202U, "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Faded cell capacity must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 2U,
    204U, "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "Temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 2U,
    206U, "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "State of charge must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 2U,
    208U, "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "State of charge must be less than or equal to 1.",
    "physmod:simscape:compiler:patterns:checks:LessThanOrEqual", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 2U,
    210U, "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8",
    2U, 212U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", TRUE,
    "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8",
    2U, 214U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based8.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Internal resistance fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 2U,
    216U, "Plant.Subsystem.Series_Module.Battery_Table_Based8.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Open-circuit voltage fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 2U,
    218U, "Plant.Subsystem.Series_Module.Battery_Table_Based8.cyclingAgingModel",
    "batteryecm.table_battery", FALSE,
    "Cell capacity fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 2U,
    220U, "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Temperature adjusted open-circuit voltage must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 2U,
    222U, "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Faded cell capacity must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 2U,
    224U, "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel",
    "batteryecm.table_battery", FALSE,
    "Temperature adjusted terminal resistance must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 2U,
    226U, "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel",
    "batteryecm.table_battery", TRUE,
    "State of charge must be greater than or equal to zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 2U,
    228U, "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel",
    "batteryecm.table_battery", TRUE,
    "State of charge must be less than or equal to 1.",
    "physmod:simscape:compiler:patterns:checks:LessThanOrEqual", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 2U,
    230U, "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel",
    "batteryecm.table_battery", TRUE,
    "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9",
    2U, 232U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel",
    "batteryecm.table_battery", TRUE,
    "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''.",
    "physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound",
  }, { "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9",
    2U, 234U,
    "Plant.Subsystem.Series_Module.Battery_Table_Based9.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", FALSE,
    "Internal resistance fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 2U,
    236U, "Plant.Subsystem.Series_Module.Battery_Table_Based9.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", FALSE,
    "Open-circuit voltage fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 2U,
    238U, "Plant.Subsystem.Series_Module.Battery_Table_Based9.cyclingAgingModel",
    "batteryecm.tableBatteryCyclingAging", FALSE,
    "Cell capacity fading factor must be greater than zero.",
    "physmod:simscape:compiler:patterns:checks:GreaterThanZero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    240U, "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    241U, "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    242U, "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    243U, "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    244U, "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    245U, "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    246U, "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    247U, "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    248U, "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    249U, "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    250U, "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    251U, "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", 1U,
    252U, "Plant.Subsystem.Series_Module.Battery_Table_Based.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", 1U,
    253U, "Plant.Subsystem.Series_Module.Battery_Table_Based1.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", 1U,
    254U, "Plant.Subsystem.Series_Module.Battery_Table_Based10.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", 1U,
    255U, "Plant.Subsystem.Series_Module.Battery_Table_Based11.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", 1U,
    256U, "Plant.Subsystem.Series_Module.Battery_Table_Based2.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", 1U,
    257U, "Plant.Subsystem.Series_Module.Battery_Table_Based3.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", 1U,
    258U, "Plant.Subsystem.Series_Module.Battery_Table_Based4.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", 1U,
    259U, "Plant.Subsystem.Series_Module.Battery_Table_Based5.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", 1U,
    260U, "Plant.Subsystem.Series_Module.Battery_Table_Based6.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", 1U,
    261U, "Plant.Subsystem.Series_Module.Battery_Table_Based7.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", 1U,
    262U, "Plant.Subsystem.Series_Module.Battery_Table_Based8.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", 1U,
    263U, "Plant.Subsystem.Series_Module.Battery_Table_Based9.electricalModel",
    "batteryecm.tableBatteryEquivalentCircuit", FALSE,
    "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", } };

static NeRange s_assert_range[264] = { {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData *s_param_assert_data = NULL;
static NeRange *s_param_assert_range = NULL;
static NeAssertData *s_initial_assert_data = NULL;
static NeRange *s_initial_assert_range = NULL;
static NeRange s_equation_range[421] = { {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryThermalLumpedMass", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryThermalLumpedMass", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryThermalLumpedMass", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryThermalLumpedMass", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryThermalLumpedMass", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryThermalLumpedMass", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryThermalLumpedMass", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryThermalLumpedMass", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryThermalLumpedMass", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryThermalLumpedMass", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryThermalLumpedMass", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryThermalLumpedMass", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "ee.semiconductors.diodePiecewiseLinear", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diodePiecewiseLinear", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 46U, 9U, 46U, 24U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 48U, 9U, 48U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 46U, 9U, 46U, 24U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 48U, 9U, 48U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 46U, 9U, 46U, 24U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 48U, 9U, 48U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 46U, 9U, 46U, 24U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 48U, 9U, 48U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 46U, 9U, 46U, 24U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 48U, 9U, 48U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 46U, 9U, 46U, 24U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 48U, 9U, 48U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 46U, 9U, 46U, 24U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 48U, 9U, 48U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 46U, 9U, 46U, 24U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 48U, 9U, 48U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 46U, 9U, 46U, 24U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 48U, 9U, 48U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 46U, 9U, 46U, 24U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 48U, 9U, 48U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 46U, 9U, 46U, 24U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 48U, 9U, 48U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 45U, 8U, 45U, 22U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 46U, 9U, 46U, 24U,
    NE_RANGE_TYPE_NORMAL, }, {
    "foundation.electrical.elements.controlled_switch", 48U, 9U, 48U, 22U,
    NE_RANGE_TYPE_NORMAL, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryEquivalentCircuit", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryEquivalentCircuit", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging", 1U, 1U,
    1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.tableBatteryCyclingAging",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "batteryecm.tableBatteryCyclingAging", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, {
    "foundation.thermal.sources.controlled_temperature", 34U, 5U, 34U, 11U,
    NE_RANGE_TYPE_NORMAL, } };

static NeRange *s_cer_range = NULL;
static NeRange s_icr_range[36] = { { "ee.semiconductors.diode_base", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diode_base", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diode_base", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diode_base", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diode_base", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diode_base", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diode_base", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diode_base", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diode_base", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diode_base", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diode_base", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "ee.semiconductors.diode_base", 1U, 1U, 1U,
    1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "batteryecm.table_battery", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "batteryecm.table_battery", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "batteryecm.table_battery", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U, 1U, 1U, 1U,
    NE_RANGE_TYPE_PROTECTED, }, { "", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, },
  { "batteryecm.table_battery", 1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, { "batteryecm.table_battery", 1U,
    1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData s_real_parameter_data[24] = { {
    "RTP_2D759EE8_stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", "",
    0U, 1U, TRUE, }, { "RTP_5A72AE7E_stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", "",
    0U, 1U, TRUE, }, { "RTP_C37BFFC4_stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", "",
    0U, 1U, TRUE, }, { "RTP_B47CCF52_stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", "",
    0U, 1U, TRUE, }, { "RTP_24C3D2C3_stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", "",
    0U, 1U, TRUE, }, { "RTP_53C4E255_stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", "",
    0U, 1U, TRUE, }, { "RTP_285EE4A8_stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", "",
    0U, 1U, TRUE, }, { "RTP_5F59D43E_stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", "",
    0U, 1U, TRUE, }, { "RTP_C6508584_stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", "",
    0U, 1U, TRUE, }, { "RTP_B157B512_stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", "",
    0U, 1U, TRUE, }, { "RTP_2F3320B1_stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", "",
    0U, 1U, TRUE, }, { "RTP_58341027_stateOfCharge",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", "",
    0U, 1U, TRUE, }, { "RTP_24C3D2C3_cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)2", "",
    0U, 1U, TRUE, }, { "RTP_285EE4A8_cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)4", "",
    0U, 1U, TRUE, }, { "RTP_2D759EE8_cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)", "",
    0U, 1U, TRUE, }, { "RTP_2F3320B1_cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)8", "",
    0U, 1U, TRUE, }, { "RTP_53C4E255_cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)3", "",
    0U, 1U, TRUE, }, { "RTP_58341027_cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)9", "",
    0U, 1U, TRUE, }, { "RTP_5A72AE7E_cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)1", "",
    0U, 1U, TRUE, }, { "RTP_5F59D43E_cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)5", "",
    0U, 1U, TRUE, }, { "RTP_B157B512_cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)7", "",
    0U, 1U, TRUE, }, { "RTP_B47CCF52_cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)11", "",
    0U, 1U, TRUE, }, { "RTP_C37BFFC4_cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)10", "",
    0U, 1U, TRUE, }, { "RTP_C6508584_cell_temperature",
    "BMS_PIL_Wrapper/Plant/Subsystem/Series_Module/Battery (Table-Based)6", "",
    0U, 1U, TRUE, } };

static real_T s_constant_table0[55] = { 2.85, 3.35, 3.58, 3.64, 3.68, 3.73, 3.79,
  3.88, 3.97, 4.07, 4.15, 2.92, 3.38, 3.61, 3.67, 3.71, 3.76, 3.82, 3.91, 4.0,
  4.09, 4.17, 3.0, 3.45, 3.68, 3.73, 3.77, 3.82, 3.88, 3.96, 4.05, 4.13, 4.2,
  3.02, 3.47, 3.7, 3.75, 3.79, 3.84, 3.9, 3.98, 4.07, 4.15, 4.22, 3.03, 3.48,
  3.71, 3.76, 3.8, 3.85, 3.91, 3.99, 4.08, 4.16, 4.23 };

static real_T s_constant_table1[11] = { 0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7,
  0.8, 0.9, 1.0 };

static real_T s_constant_table2[55] = { 0.018, 0.015, 0.013, 0.012, 0.012, 0.012,
  0.012, 0.012, 0.012, 0.013, 0.015, 0.011, 0.009, 0.008, 0.007, 0.007, 0.007,
  0.007, 0.007, 0.007, 0.008, 0.009, 0.005, 0.004, 0.003, 0.003, 0.003, 0.003,
  0.003, 0.003, 0.003, 0.003, 0.004, 0.004, 0.003, 0.002, 0.002, 0.002, 0.002,
  0.002, 0.002, 0.002, 0.002, 0.003, 0.003, 0.002, 0.002, 0.001, 0.001, 0.001,
  0.001, 0.001, 0.001, 0.001, 0.002 };

static real_T s_constant_table3[100] = { 0.0, -0.000674, -0.001349, -0.002023,
  -0.0026969999999999997, -0.0033710000000000003, -0.004046,
  -0.0047199999999999994, -0.0053939999999999995, -0.006069, -0.006828,
  -0.007561, -0.008245, -0.008929, -0.009613, -0.010297, -0.010981000000000001,
  -0.011664, -0.012348, -0.013031999999999998, -0.013773, -0.014186, -0.014598,
  -0.015011000000000002, -0.015424, -0.015836, -0.016249, -0.016652, -0.016999,
  -0.017345, -0.017691, -0.018038000000000002, -0.018384, -0.018731, -0.01908,
  -0.019398, -0.019715, -0.020033, -0.020350999999999998, -0.020669,
  -0.020985999999999998, -0.021303000000000002, -0.02162, -0.021976, -0.022332,
  -0.022687, -0.022976999999999997, -0.023239, -0.023502000000000002, -0.023765,
  -0.024028, -0.024264, -0.024464, -0.024663, -0.024863, -0.025063, -0.025263,
  -0.025462, -0.025661, -0.025849, -0.026031, -0.026212, -0.026407, -0.026612,
  -0.026817, -0.027022, -0.027227, -0.027431999999999998, -0.027637000000000002,
  -0.027842, -0.028047, -0.028253, -0.028458, -0.028662, -0.028858,
  -0.029054000000000003, -0.029249, -0.029445000000000002, -0.029641, -0.029837,
  -0.030036999999999998, -0.030238, -0.030438999999999997, -0.03064,
  -0.030840999999999997, -0.031042, -0.031267, -0.031499, -0.031730999999999995,
  -0.031989000000000004, -0.032248, -0.032508, -0.032781, -0.033053,
  -0.033325999999999995, -0.033597999999999996, -0.03387, -0.034171, -0.03449,
  -0.034809 };

static real_T s_constant_table4[100] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

static real_T s_constant_table5[100] = { 0.0, -0.00092999999999999995,
  -0.0018599999999999999, -0.0027800000000000004, -0.0037099999999999998,
  -0.00464, -0.00557, -0.00649, -0.0074199999999999995, -0.00835,
  -0.0093999999999999986, -0.01045, -0.01151, -0.01257, -0.01363,
  -0.014690000000000002, -0.01575, -0.016810000000000002, -0.01787, -0.01893,
  -0.02017, -0.02161, -0.023039999999999998, -0.024470000000000002,
  -0.025910000000000002, -0.02734, -0.028769999999999997, -0.03021, -0.03164,
  -0.03307, -0.03451, -0.03594, -0.03737, -0.03881, -0.04032, -0.04201, -0.04369,
  -0.045380000000000004, -0.047060000000000005, -0.04874, -0.05043,
  -0.052110000000000004, -0.0538, -0.055689999999999996, -0.05758, -0.05947,
  -0.061349999999999995, -0.06324, -0.06513, -0.06702, -0.06891, -0.0708,
  -0.07269, -0.074580000000000007, -0.07647, -0.07836, -0.08025, -0.08214,
  -0.084030000000000007, -0.085820000000000007, -0.087539999999999993, -0.08927,
  -0.09099, -0.092710000000000015, -0.09443, -0.09615, -0.097870000000000013,
  -0.099600000000000008, -0.10132, -0.10304, -0.10476, -0.10647999999999999,
  -0.1082, -0.10992, -0.11156, -0.11320000000000001, -0.11485, -0.11649,
  -0.11814, -0.11978, -0.12143000000000001, -0.12307, -0.12471, -0.12636, -0.128,
  -0.12965, -0.13129, -0.13293, -0.13458, -0.13641, -0.13824999999999998,
  -0.14007999999999998, -0.14192, -0.14376, -0.1456, -0.14743,
  -0.14926999999999999, -0.15111, -0.15295, -0.15478 };

static real_T s_constant_table6[100] = { 0.0, 6.0, 11.0, 16.0, 21.0, 26.0, 31.0,
  36.0, 41.0, 46.0, 51.0, 56.0, 61.0, 66.0, 71.0, 76.0, 81.0, 86.0, 91.0, 96.0,
  101.0, 106.0, 111.0, 116.0, 121.0, 126.0, 131.0, 136.0, 141.0, 146.0, 151.0,
  156.0, 161.0, 166.0, 171.0, 176.0, 181.0, 186.0, 191.0, 196.0, 201.0, 206.0,
  211.0, 216.0, 221.0, 226.0, 231.0, 236.0, 241.0, 246.0, 251.0, 256.0, 261.0,
  266.0, 271.0, 276.0, 281.0, 286.0, 291.0, 296.0, 301.0, 306.0, 311.0, 316.0,
  321.0, 326.0, 331.0, 336.0, 341.0, 346.0, 351.0, 356.0, 361.0, 366.0, 371.0,
  376.0, 381.0, 386.0, 391.0, 396.0, 401.0, 406.0, 411.0, 416.0, 421.0, 426.0,
  431.0, 436.0, 441.0, 446.0, 451.0, 456.0, 461.0, 466.0, 471.0, 476.0, 481.0,
  486.0, 491.0, 496.0 };

static NeDsMethodOutput *ds_output_mcon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMCON_P.mNumCol = 205;
  out->mMCON_P.mNumRow = 205;
  out->mMCON_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    206);
  out->mMCON_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    336);
  return out;
}

static NeDsMethodOutput *ds_output_mcon(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMCON.mN = 336;
  out->mMCON.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    336);
  return out;
}

static NeDsMethodOutput *ds_output_mpar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMPAR_P.mNumCol = 205;
  out->mMPAR_P.mNumRow = 205;
  out->mMPAR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    206);
  out->mMPAR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mpar(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMPAR.mN = 0;
  out->mMPAR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mnl_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMNL_P.mNumCol = 205;
  out->mMNL_P.mNumRow = 205;
  out->mMNL_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    206);
  out->mMNL_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mnl(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMNL.mN = 0;
  out->mMNL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 336;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    336);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 205;
  out->mDXM_P.mNumRow = 336;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    206);
  out->mDXM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM.mN = 0;
  out->mDXM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM_P.mNumCol = 0;
  out->mDDM_P.mNumRow = 336;
  out->mDDM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM.mN = 0;
  out->mDDM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM_P.mNumCol = 15;
  out->mDUM_P.mNumRow = 336;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mDUM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM.mN = 0;
  out->mDUM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM_P.mNumCol = 1;
  out->mDTM_P.mNumRow = 336;
  out->mDTM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM.mN = 0;
  out->mDTM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPM_P.mNumCol = 24;
  out->mDPM_P.mNumRow = 336;
  out->mDPM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    25);
  out->mDPM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dpm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPM.mN = 0;
  out->mDPM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_acon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mACON_P.mNumCol = 205;
  out->mACON_P.mNumRow = 205;
  out->mACON_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    206);
  out->mACON_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    234);
  return out;
}

static NeDsMethodOutput *ds_output_acon(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mACON.mN = 234;
  out->mACON.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    234);
  return out;
}

static NeDsMethodOutput *ds_output_apar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mAPAR_P.mNumCol = 205;
  out->mAPAR_P.mNumRow = 205;
  out->mAPAR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    206);
  out->mAPAR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_apar(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mAPAR.mN = 0;
  out->mAPAR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_bcon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mBCON_P.mNumCol = 15;
  out->mBCON_P.mNumRow = 205;
  out->mBCON_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mBCON_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    25);
  return out;
}

static NeDsMethodOutput *ds_output_bcon(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mBCON.mN = 25;
  out->mBCON.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 25);
  return out;
}

static NeDsMethodOutput *ds_output_bpar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mBPAR_P.mNumCol = 15;
  out->mBPAR_P.mNumRow = 205;
  out->mBPAR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mBPAR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_bpar(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mBPAR.mN = 0;
  out->mBPAR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ccon_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCCON_P.mNumCol = 1;
  out->mCCON_P.mNumRow = 205;
  out->mCCON_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mCCON_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ccon(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCCON.mN = 0;
  out->mCCON.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_cpar_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCPAR_P.mNumCol = 1;
  out->mCPAR_P.mNumRow = 205;
  out->mCPAR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mCPAR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_cpar(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCPAR.mN = 0;
  out->mCPAR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mF.mN = 205;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 205);
  return out;
}

static NeDsMethodOutput *ds_output_vdf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVDF.mN = 205;
  out->mVDF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    205);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 205;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    205);
  return out;
}

static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVPF.mN = 205;
  out->mVPF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    205);
  return out;
}

static NeDsMethodOutput *ds_output_vsf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVSF.mN = 205;
  out->mVSF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    205);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 205;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    205);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 205;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 205);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 205;
  out->mDXF_P.mNumRow = 205;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    206);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    554);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 554;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 554);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 15;
  out->mDUF_P.mNumRow = 205;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    72);
  return out;
}

static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF.mN = 72;
  out->mDUF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 72);
  return out;
}

static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF_P.mNumCol = 1;
  out->mDTF_P.mNumRow = 205;
  out->mDTF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF.mN = 0;
  out->mDTF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF_P.mNumCol = 0;
  out->mDDF_P.mNumRow = 205;
  out->mDDF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF.mN = 0;
  out->mDDF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpdxf_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPDXF_P.mNumCol = 24;
  out->mDPDXF_P.mNumRow = 554;
  out->mDPDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 25);
  out->mDPDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpdxf(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPDXF.mN = 0;
  out->mDPDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF_P.mNumCol = 0;
  out->mDWF_P.mNumRow = 205;
  out->mDWF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDWF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF.mN = 0;
  out->mDWF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUF_P.mNumCol = 15;
  out->mTDUF_P.mNumRow = 205;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    109);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 205;
  out->mTDXF_P.mNumRow = 205;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    206);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    766);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 168;
  out->mDNF_P.mNumRow = 205;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    169);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    12);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 12;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 12);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 205;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 205);
  return out;
}

static NeDsMethodOutput *ds_output_cer(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCER.mN = 0;
  out->mCER.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxcer(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXCER.mN = 0;
  out->mDXCER.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxcer_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXCER_P.mNumCol = 205;
  out->mDXCER_P.mNumRow = 0;
  out->mDXCER_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 206);
  out->mDXCER_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddcer(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDCER.mN = 0;
  out->mDDCER.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddcer_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDCER_P.mNumCol = 0;
  out->mDDCER_P.mNumRow = 0;
  out->mDDCER_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDCER_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIC.mN = 205;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 205);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 36;
  out->mICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 36);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 36;
  out->mICR_IM.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    36);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 36;
  out->mICR_ID.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 36);
  return out;
}

static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IL.mN = 36;
  out->mICR_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 36);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR.mN = 24;
  out->mDXICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    24);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR_P.mNumCol = 205;
  out->mDXICR_P.mNumRow = 36;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 206);
  out->mDXICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 24);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR.mN = 0;
  out->mDDICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR_P.mNumCol = 0;
  out->mDDICR_P.mNumRow = 36;
  out->mDDICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUICR_P.mNumCol = 15;
  out->mTDUICR_P.mNumRow = 36;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 16);
  out->mTDUICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM_P.mNumCol = 205;
  out->mICRM_P.mNumRow = 36;
  out->mICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    206);
  out->mICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM.mN = 0;
  out->mICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM_P.mNumCol = 205;
  out->mDXICRM_P.mNumRow = 0;
  out->mDXICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 206);
  out->mDXICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM.mN = 0;
  out->mDXICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM_P.mNumCol = 0;
  out->mDDICRM_P.mNumRow = 0;
  out->mDDICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM.mN = 0;
  out->mDDICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_freqs(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mFREQS.mN = 0;
  out->mFREQS.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_solverhits(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSOLVERHITS.mN = 0;
  out->mSOLVERHITS.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof
    (real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDUY_P.mNumCol = 15;
  out->mMDUY_P.mNumRow = 38;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mMDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDXY_P.mNumCol = 205;
  out->mMDXY_P.mNumRow = 38;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    206);
  out->mMDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUY_P.mNumCol = 15;
  out->mTDUY_P.mNumRow = 38;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mTDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  return out;
}

static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXY_P.mNumCol = 205;
  out->mTDXY_P.mNumRow = 38;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    206);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    49);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 38;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 38);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 205;
  out->mDXY_P.mNumRow = 38;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    206);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    49);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 49;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 49);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 15;
  out->mDUY_P.mNumRow = 38;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  return out;
}

static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY.mN = 2;
  out->mDUY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 2);
  return out;
}

static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY_P.mNumCol = 1;
  out->mDTY_P.mNumRow = 38;
  out->mDTY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY.mN = 0;
  out->mDTY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMODE.mN = 132;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    132);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 132;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 132);
  return out;
}

static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_R.mN = 0;
  out->mCACHE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_I.mN = 0;
  out->mCACHE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_R.mN = 0;
  out->mUPDATE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_I.mN = 0;
  out->mUPDATE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_R.mN = 0;
  out->mUPDATE2_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_I.mN = 0;
  out->mUPDATE2_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_R.mN = 0;
  out->mLOCK_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_I.mN = 0;
  out->mLOCK_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_R.mN = 0;
  out->mLOCK2_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_I.mN = 0;
  out->mLOCK2_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFO.mN = 0;
  out->mSFO.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFP.mN = 0;
  out->mSFP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_R.mN = 0;
  out->mINIT_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_I.mN = 0;
  out->mINIT_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 1027;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    1027);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 144;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    144);
  return out;
}

static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mPASSERT.mN = 0;
  out->mPASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIASSERT.mN = 0;
  out->mIASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_T.mN = 0;
  out->mDEL_T.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V.mN = 0;
  out->mDEL_V.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V0.mN = 0;
  out->mDEL_V0.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_TMAX.mN = 0;
  out->mDEL_TMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT_P.mNumCol = 205;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 206);
  out->mDXDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT.mN = 0;
  out->mDXDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT_P.mNumCol = 15;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 16);
  out->mDUDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT.mN = 0;
  out->mDUDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT_P.mNumCol = 1;
  out->mDTDELT_P.mNumRow = 0;
  out->mDTDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
  out->mDTDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT.mN = 0;
  out->mDTDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_EXP.mN = 1246;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    1246);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 1246;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    1246);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 1246;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    1246);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 1246;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 1246);
  return out;
}

static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_L.mN = 0;
  out->mDP_L.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_I.mN = 0;
  out->mDP_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_J.mN = 0;
  out->mDP_J.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_R.mN = 0;
  out->mDP_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX.mN = 0;
  out->mQX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU.mN = 0;
  out->mQU.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT.mN = 0;
  out->mQT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1.mN = 0;
  out->mQ1.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 205;
  out->mQX_P.mNumRow = 205;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    206);
  out->mQX_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 15;
  out->mQU_P.mNumRow = 205;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    16);
  out->mQU_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT_P.mNumCol = 1;
  out->mQT_P.mNumRow = 205;
  out->mQT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1_P.mNumCol = 1;
  out->mQ1_P.mNumRow = 205;
  out->mQ1_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 205;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    205);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 205;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    205);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 205;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    205);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 205;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    205);
  return out;
}

static NeDsMethodOutput *ds_output_nldv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mNLDV.mN = 205;
  out->mNLDV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 205);
  return out;
}

static NeDsMethodOutput *ds_output_sclv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSCLV.mN = 205;
  out->mSCLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 205);
  return out;
}

static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMIN.mN = 205;
  out->mIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    205);
  return out;
}

static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMAX.mN = 205;
  out->mIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    205);
  return out;
}

static NeDsMethodOutput *ds_output_dimin(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDIMIN.mN = 0;
  out->mDIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dimax(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDIMAX.mN = 0;
  out->mDIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static void release_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  if (--_ds->mRefCnt == 0) {
    _ds->mAlloc.mFreeFcn(&_ds->mAlloc, _ds);
  }
}

static void get_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  ++_ds->mRefCnt;
}

static NeDynamicSystem *diagnostics(NeDynamicSystem *ds, boolean_T kp)
{
  _NeDynamicSystem *_ds = (_NeDynamicSystem *)ds;
  (void) kp;
  ne_ds_get_reference(&_ds->mBase);
  return &_ds->mBase;
}

static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out, boolean_T kp)
{
  (void)ds;
  (void)kp;
  memcpy(out->mX, in->mX.mX, sizeof(real_T)*out->mN);
}

static void rtpmap(const NeDynamicSystem * ds, const PmIntVector* inl, const
                   PmIntVector* ini, const PmIntVector* inj, const PmRealVector*
                   inr, PmIntVector* outl, PmIntVector* outi, PmIntVector* outj,
                   PmRealVector* outr)
{
  (void)ds;
  memcpy(outl->mX, inl->mX, sizeof(int32_T)*inl->mN);
  memcpy(outi->mX, ini->mX, sizeof(int32_T)*ini->mN);
  memcpy(outj->mX, inj->mX, sizeof(int32_T)*inj->mN);
  memcpy(outr->mX, inr->mX, sizeof(real_T)*inr->mN);
}

NeDynamicSystem *BMS_PIL_Wrapper_6c5e8dbc_49_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static SscIoInfo input_info[15];
  static SscIoInfo output_info[38];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 205;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 96;
  ds->mNumEquations = 205;
  ds->mNumCEResiduals = 0;
  ds->mNumICResiduals = 36;
  ds->mNumFreqs = 0;
  ds->mNumSolverHits = 0;
  ds->mNumModes = 132;
  ds->mNumMajorModes = 0;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 0;
  ds->mNumObservables = 1222;
  ds->mNumObservableElements = 1246;
  ds->mNumZcs = 132;
  ds->mNumAsserts = 144;
  ds->mNumAssertRanges = 264;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 132;
  ds->mNumEquationRanges = 421;
  ds->mNumCERRanges = 0;
  ds->mNumICRRanges = 36;
  ds->mNumFundamentalSamples = 0;
  ds->mNumDelays = 0;
  ds->mNumLogicalParameters = 0;
  ds->mNumIntegerParameters = 0;
  ds->mNumIndexParameters = 0;
  ds->mNumRealParameters = 24;
  ds->mNumLogicalDerivedParameters = 0;
  ds->mNumIntegerDerivedParameters = 0;
  ds->mNumIndexDerivedParameters = 0;
  ds->mNumRealDerivedParameters = 0;
  ds->mIsOutputLinear = TRUE;
  ds->mIsOutputSwitchedLinear = TRUE;
  ds->mIsScalable = FALSE;

  /* setup ios */
  ds->mNumIo[SSC_INPUT_IO_TYPE] = 15;
  input_info[0].identifier = "Plant.Charger_Load.Simulink_PS_Converter1_output0";
  input_info[0].size.numElements = 1;
  input_info[0].size.encodedDimensions = "1x1";
  input_info[0].name = "Plant.Charger_Load.Simulink_PS_Converter1_output0";
  input_info[0].unit = "1";
  input_info[1].identifier = "Plant.Charger_Load.Simulink_PS_Converter_output0";
  input_info[1].size.numElements = 1;
  input_info[1].size.encodedDimensions = "1x1";
  input_info[1].name = "Plant.Charger_Load.Simulink_PS_Converter_output0";
  input_info[1].unit = "1";
  input_info[2].identifier =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter10_output0";
  input_info[2].size.numElements = 1;
  input_info[2].size.encodedDimensions = "1x1";
  input_info[2].name =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter10_output0";
  input_info[2].unit = "1";
  input_info[3].identifier =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter11_output0";
  input_info[3].size.numElements = 1;
  input_info[3].size.encodedDimensions = "1x1";
  input_info[3].name =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter11_output0";
  input_info[3].unit = "1";
  input_info[4].identifier =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter1_output0";
  input_info[4].size.numElements = 1;
  input_info[4].size.encodedDimensions = "1x1";
  input_info[4].name =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter1_output0";
  input_info[4].unit = "1";
  input_info[5].identifier =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter2_output0";
  input_info[5].size.numElements = 1;
  input_info[5].size.encodedDimensions = "1x1";
  input_info[5].name =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter2_output0";
  input_info[5].unit = "1";
  input_info[6].identifier =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter3_output0";
  input_info[6].size.numElements = 1;
  input_info[6].size.encodedDimensions = "1x1";
  input_info[6].name =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter3_output0";
  input_info[6].unit = "1";
  input_info[7].identifier =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter4_output0";
  input_info[7].size.numElements = 1;
  input_info[7].size.encodedDimensions = "1x1";
  input_info[7].name =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter4_output0";
  input_info[7].unit = "1";
  input_info[8].identifier =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter5_output0";
  input_info[8].size.numElements = 1;
  input_info[8].size.encodedDimensions = "1x1";
  input_info[8].name =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter5_output0";
  input_info[8].unit = "1";
  input_info[9].identifier =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter6_output0";
  input_info[9].size.numElements = 1;
  input_info[9].size.encodedDimensions = "1x1";
  input_info[9].name =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter6_output0";
  input_info[9].unit = "1";
  input_info[10].identifier =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter7_output0";
  input_info[10].size.numElements = 1;
  input_info[10].size.encodedDimensions = "1x1";
  input_info[10].name =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter7_output0";
  input_info[10].unit = "1";
  input_info[11].identifier =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter8_output0";
  input_info[11].size.numElements = 1;
  input_info[11].size.encodedDimensions = "1x1";
  input_info[11].name =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter8_output0";
  input_info[11].unit = "1";
  input_info[12].identifier =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter9_output0";
  input_info[12].size.numElements = 1;
  input_info[12].size.encodedDimensions = "1x1";
  input_info[12].name =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter9_output0";
  input_info[12].unit = "1";
  input_info[13].identifier =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter_output0";
  input_info[13].size.numElements = 1;
  input_info[13].size.encodedDimensions = "1x1";
  input_info[13].name =
    "Plant.Subsystem.Monitoring.Simulink_PS_Converter_output0";
  input_info[13].unit = "1";
  input_info[14].identifier =
    "Plant.Subsystem.Series_Module.Simulink_PS_Converter_output0";
  input_info[14].size.numElements = 1;
  input_info[14].size.encodedDimensions = "1x1";
  input_info[14].name =
    "Plant.Subsystem.Series_Module.Simulink_PS_Converter_output0";
  input_info[14].unit = "1";
  ds->mIo[SSC_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[SSC_OUTPUT_IO_TYPE] = 38;
  output_info[0].identifier = "Plant.Current_Sensor_I0";
  output_info[0].size.numElements = 1;
  output_info[0].size.encodedDimensions = "1x1";
  output_info[0].name = "Plant.Current_Sensor_I0";
  output_info[0].unit = "A";
  output_info[1].identifier = "Plant.Subsystem.Monitoring.Voltage_Sensor10_V0";
  output_info[1].size.numElements = 1;
  output_info[1].size.encodedDimensions = "1x1";
  output_info[1].name = "Plant.Subsystem.Monitoring.Voltage_Sensor10_V0";
  output_info[1].unit = "V";
  output_info[2].identifier = "Plant.Subsystem.Monitoring.Voltage_Sensor11_V0";
  output_info[2].size.numElements = 1;
  output_info[2].size.encodedDimensions = "1x1";
  output_info[2].name = "Plant.Subsystem.Monitoring.Voltage_Sensor11_V0";
  output_info[2].unit = "V";
  output_info[3].identifier = "Plant.Subsystem.Monitoring.Voltage_Sensor1_V0";
  output_info[3].size.numElements = 1;
  output_info[3].size.encodedDimensions = "1x1";
  output_info[3].name = "Plant.Subsystem.Monitoring.Voltage_Sensor1_V0";
  output_info[3].unit = "V";
  output_info[4].identifier = "Plant.Subsystem.Monitoring.Voltage_Sensor2_V0";
  output_info[4].size.numElements = 1;
  output_info[4].size.encodedDimensions = "1x1";
  output_info[4].name = "Plant.Subsystem.Monitoring.Voltage_Sensor2_V0";
  output_info[4].unit = "V";
  output_info[5].identifier = "Plant.Subsystem.Monitoring.Voltage_Sensor3_V0";
  output_info[5].size.numElements = 1;
  output_info[5].size.encodedDimensions = "1x1";
  output_info[5].name = "Plant.Subsystem.Monitoring.Voltage_Sensor3_V0";
  output_info[5].unit = "V";
  output_info[6].identifier = "Plant.Subsystem.Monitoring.Voltage_Sensor4_V0";
  output_info[6].size.numElements = 1;
  output_info[6].size.encodedDimensions = "1x1";
  output_info[6].name = "Plant.Subsystem.Monitoring.Voltage_Sensor4_V0";
  output_info[6].unit = "V";
  output_info[7].identifier = "Plant.Subsystem.Monitoring.Voltage_Sensor5_V0";
  output_info[7].size.numElements = 1;
  output_info[7].size.encodedDimensions = "1x1";
  output_info[7].name = "Plant.Subsystem.Monitoring.Voltage_Sensor5_V0";
  output_info[7].unit = "V";
  output_info[8].identifier = "Plant.Subsystem.Monitoring.Voltage_Sensor6_V0";
  output_info[8].size.numElements = 1;
  output_info[8].size.encodedDimensions = "1x1";
  output_info[8].name = "Plant.Subsystem.Monitoring.Voltage_Sensor6_V0";
  output_info[8].unit = "V";
  output_info[9].identifier = "Plant.Subsystem.Monitoring.Voltage_Sensor7_V0";
  output_info[9].size.numElements = 1;
  output_info[9].size.encodedDimensions = "1x1";
  output_info[9].name = "Plant.Subsystem.Monitoring.Voltage_Sensor7_V0";
  output_info[9].unit = "V";
  output_info[10].identifier = "Plant.Subsystem.Monitoring.Voltage_Sensor8_V0";
  output_info[10].size.numElements = 1;
  output_info[10].size.encodedDimensions = "1x1";
  output_info[10].name = "Plant.Subsystem.Monitoring.Voltage_Sensor8_V0";
  output_info[10].unit = "V";
  output_info[11].identifier = "Plant.Subsystem.Monitoring.Voltage_Sensor9_V0";
  output_info[11].size.numElements = 1;
  output_info[11].size.encodedDimensions = "1x1";
  output_info[11].name = "Plant.Subsystem.Monitoring.Voltage_Sensor9_V0";
  output_info[11].unit = "V";
  output_info[12].identifier = "Plant.Subsystem.Monitoring.Voltage_Sensor_V0";
  output_info[12].size.numElements = 1;
  output_info[12].size.encodedDimensions = "1x1";
  output_info[12].name = "Plant.Subsystem.Monitoring.Voltage_Sensor_V0";
  output_info[12].unit = "V";
  output_info[13].identifier =
    "Plant.Subsystem.Series_Module.Battery_Table_Based10_soc0";
  output_info[13].size.numElements = 1;
  output_info[13].size.encodedDimensions = "1x1";
  output_info[13].name =
    "Plant.Subsystem.Series_Module.Battery_Table_Based10_soc0";
  output_info[13].unit = "1";
  output_info[14].identifier =
    "Plant.Subsystem.Series_Module.Battery_Table_Based11_soc0";
  output_info[14].size.numElements = 1;
  output_info[14].size.encodedDimensions = "1x1";
  output_info[14].name =
    "Plant.Subsystem.Series_Module.Battery_Table_Based11_soc0";
  output_info[14].unit = "1";
  output_info[15].identifier =
    "Plant.Subsystem.Series_Module.Battery_Table_Based1_soc0";
  output_info[15].size.numElements = 1;
  output_info[15].size.encodedDimensions = "1x1";
  output_info[15].name =
    "Plant.Subsystem.Series_Module.Battery_Table_Based1_soc0";
  output_info[15].unit = "1";
  output_info[16].identifier =
    "Plant.Subsystem.Series_Module.Battery_Table_Based2_soc0";
  output_info[16].size.numElements = 1;
  output_info[16].size.encodedDimensions = "1x1";
  output_info[16].name =
    "Plant.Subsystem.Series_Module.Battery_Table_Based2_soc0";
  output_info[16].unit = "1";
  output_info[17].identifier =
    "Plant.Subsystem.Series_Module.Battery_Table_Based3_soc0";
  output_info[17].size.numElements = 1;
  output_info[17].size.encodedDimensions = "1x1";
  output_info[17].name =
    "Plant.Subsystem.Series_Module.Battery_Table_Based3_soc0";
  output_info[17].unit = "1";
  output_info[18].identifier =
    "Plant.Subsystem.Series_Module.Battery_Table_Based4_soc0";
  output_info[18].size.numElements = 1;
  output_info[18].size.encodedDimensions = "1x1";
  output_info[18].name =
    "Plant.Subsystem.Series_Module.Battery_Table_Based4_soc0";
  output_info[18].unit = "1";
  output_info[19].identifier =
    "Plant.Subsystem.Series_Module.Battery_Table_Based5_soc0";
  output_info[19].size.numElements = 1;
  output_info[19].size.encodedDimensions = "1x1";
  output_info[19].name =
    "Plant.Subsystem.Series_Module.Battery_Table_Based5_soc0";
  output_info[19].unit = "1";
  output_info[20].identifier =
    "Plant.Subsystem.Series_Module.Battery_Table_Based6_soc0";
  output_info[20].size.numElements = 1;
  output_info[20].size.encodedDimensions = "1x1";
  output_info[20].name =
    "Plant.Subsystem.Series_Module.Battery_Table_Based6_soc0";
  output_info[20].unit = "1";
  output_info[21].identifier =
    "Plant.Subsystem.Series_Module.Battery_Table_Based7_soc0";
  output_info[21].size.numElements = 1;
  output_info[21].size.encodedDimensions = "1x1";
  output_info[21].name =
    "Plant.Subsystem.Series_Module.Battery_Table_Based7_soc0";
  output_info[21].unit = "1";
  output_info[22].identifier =
    "Plant.Subsystem.Series_Module.Battery_Table_Based8_soc0";
  output_info[22].size.numElements = 1;
  output_info[22].size.encodedDimensions = "1x1";
  output_info[22].name =
    "Plant.Subsystem.Series_Module.Battery_Table_Based8_soc0";
  output_info[22].unit = "1";
  output_info[23].identifier =
    "Plant.Subsystem.Series_Module.Battery_Table_Based9_soc0";
  output_info[23].size.numElements = 1;
  output_info[23].size.encodedDimensions = "1x1";
  output_info[23].name =
    "Plant.Subsystem.Series_Module.Battery_Table_Based9_soc0";
  output_info[23].unit = "1";
  output_info[24].identifier =
    "Plant.Subsystem.Series_Module.Battery_Table_Based_soc0";
  output_info[24].size.numElements = 1;
  output_info[24].size.encodedDimensions = "1x1";
  output_info[24].name =
    "Plant.Subsystem.Series_Module.Battery_Table_Based_soc0";
  output_info[24].unit = "1";
  output_info[25].identifier =
    "Plant.Subsystem.Series_Module.Temperature_Sensor10_T0";
  output_info[25].size.numElements = 1;
  output_info[25].size.encodedDimensions = "1x1";
  output_info[25].name = "Plant.Subsystem.Series_Module.Temperature_Sensor10_T0";
  output_info[25].unit = "K";
  output_info[26].identifier =
    "Plant.Subsystem.Series_Module.Temperature_Sensor11_T0";
  output_info[26].size.numElements = 1;
  output_info[26].size.encodedDimensions = "1x1";
  output_info[26].name = "Plant.Subsystem.Series_Module.Temperature_Sensor11_T0";
  output_info[26].unit = "K";
  output_info[27].identifier =
    "Plant.Subsystem.Series_Module.Temperature_Sensor1_T0";
  output_info[27].size.numElements = 1;
  output_info[27].size.encodedDimensions = "1x1";
  output_info[27].name = "Plant.Subsystem.Series_Module.Temperature_Sensor1_T0";
  output_info[27].unit = "K";
  output_info[28].identifier =
    "Plant.Subsystem.Series_Module.Temperature_Sensor2_T0";
  output_info[28].size.numElements = 1;
  output_info[28].size.encodedDimensions = "1x1";
  output_info[28].name = "Plant.Subsystem.Series_Module.Temperature_Sensor2_T0";
  output_info[28].unit = "K";
  output_info[29].identifier =
    "Plant.Subsystem.Series_Module.Temperature_Sensor3_T0";
  output_info[29].size.numElements = 1;
  output_info[29].size.encodedDimensions = "1x1";
  output_info[29].name = "Plant.Subsystem.Series_Module.Temperature_Sensor3_T0";
  output_info[29].unit = "K";
  output_info[30].identifier =
    "Plant.Subsystem.Series_Module.Temperature_Sensor4_T0";
  output_info[30].size.numElements = 1;
  output_info[30].size.encodedDimensions = "1x1";
  output_info[30].name = "Plant.Subsystem.Series_Module.Temperature_Sensor4_T0";
  output_info[30].unit = "K";
  output_info[31].identifier =
    "Plant.Subsystem.Series_Module.Temperature_Sensor5_T0";
  output_info[31].size.numElements = 1;
  output_info[31].size.encodedDimensions = "1x1";
  output_info[31].name = "Plant.Subsystem.Series_Module.Temperature_Sensor5_T0";
  output_info[31].unit = "K";
  output_info[32].identifier =
    "Plant.Subsystem.Series_Module.Temperature_Sensor6_T0";
  output_info[32].size.numElements = 1;
  output_info[32].size.encodedDimensions = "1x1";
  output_info[32].name = "Plant.Subsystem.Series_Module.Temperature_Sensor6_T0";
  output_info[32].unit = "K";
  output_info[33].identifier =
    "Plant.Subsystem.Series_Module.Temperature_Sensor7_T0";
  output_info[33].size.numElements = 1;
  output_info[33].size.encodedDimensions = "1x1";
  output_info[33].name = "Plant.Subsystem.Series_Module.Temperature_Sensor7_T0";
  output_info[33].unit = "K";
  output_info[34].identifier =
    "Plant.Subsystem.Series_Module.Temperature_Sensor8_T0";
  output_info[34].size.numElements = 1;
  output_info[34].size.encodedDimensions = "1x1";
  output_info[34].name = "Plant.Subsystem.Series_Module.Temperature_Sensor8_T0";
  output_info[34].unit = "K";
  output_info[35].identifier =
    "Plant.Subsystem.Series_Module.Temperature_Sensor9_T0";
  output_info[35].size.numElements = 1;
  output_info[35].size.encodedDimensions = "1x1";
  output_info[35].name = "Plant.Subsystem.Series_Module.Temperature_Sensor9_T0";
  output_info[35].unit = "K";
  output_info[36].identifier =
    "Plant.Subsystem.Series_Module.Temperature_Sensor_T0";
  output_info[36].size.numElements = 1;
  output_info[36].size.encodedDimensions = "1x1";
  output_info[36].name = "Plant.Subsystem.Series_Module.Temperature_Sensor_T0";
  output_info[36].unit = "K";
  output_info[37].identifier = "Plant.Voltage_Sensor_V0";
  output_info[37].size.numElements = 1;
  output_info[37].size.encodedDimensions = "1x1";
  output_info[37].name = "Plant.Voltage_Sensor_V0";
  output_info[37].unit = "V";
  ds->mIo[SSC_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mRtpMapFcn = rtpmap;
  ds->mMethods[NE_DS_METHOD_MCON_P] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_mcon_p;
  ds->mMakeOutput[NE_DS_METHOD_MCON_P] = ds_output_mcon_p;
  ds->mMethods[NE_DS_METHOD_MCON] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_mcon;
  ds->mMakeOutput[NE_DS_METHOD_MCON] = ds_output_mcon;
  ds->mMethods[NE_DS_METHOD_MPAR_P] = ds_mpar_p;
  ds->mMakeOutput[NE_DS_METHOD_MPAR_P] = ds_output_mpar_p;
  ds->mMethods[NE_DS_METHOD_MPAR] = ds_mpar;
  ds->mMakeOutput[NE_DS_METHOD_MPAR] = ds_output_mpar;
  ds->mMethods[NE_DS_METHOD_MNL_P] = ds_mnl_p;
  ds->mMakeOutput[NE_DS_METHOD_MNL_P] = ds_output_mnl_p;
  ds->mMethods[NE_DS_METHOD_MNL] = ds_mnl;
  ds->mMakeOutput[NE_DS_METHOD_MNL] = ds_output_mnl;
  ds->mMethods[NE_DS_METHOD_VMM] = ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = ds_dxm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXM_P] = ds_output_dxm_p;
  ds->mMethods[NE_DS_METHOD_DXM] = ds_dxm;
  ds->mMakeOutput[NE_DS_METHOD_DXM] = ds_output_dxm;
  ds->mMethods[NE_DS_METHOD_DDM_P] = ds_ddm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDM_P] = ds_output_ddm_p;
  ds->mMethods[NE_DS_METHOD_DDM] = ds_ddm;
  ds->mMakeOutput[NE_DS_METHOD_DDM] = ds_output_ddm;
  ds->mMethods[NE_DS_METHOD_DUM_P] = ds_dum_p;
  ds->mMakeOutput[NE_DS_METHOD_DUM_P] = ds_output_dum_p;
  ds->mMethods[NE_DS_METHOD_DUM] = ds_dum;
  ds->mMakeOutput[NE_DS_METHOD_DUM] = ds_output_dum;
  ds->mMethods[NE_DS_METHOD_DTM_P] = ds_dtm_p;
  ds->mMakeOutput[NE_DS_METHOD_DTM_P] = ds_output_dtm_p;
  ds->mMethods[NE_DS_METHOD_DTM] = ds_dtm;
  ds->mMakeOutput[NE_DS_METHOD_DTM] = ds_output_dtm;
  ds->mMethods[NE_DS_METHOD_DPM_P] = ds_dpm_p;
  ds->mMakeOutput[NE_DS_METHOD_DPM_P] = ds_output_dpm_p;
  ds->mMethods[NE_DS_METHOD_DPM] = ds_dpm;
  ds->mMakeOutput[NE_DS_METHOD_DPM] = ds_output_dpm;
  ds->mMethods[NE_DS_METHOD_ACON_P] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_acon_p;
  ds->mMakeOutput[NE_DS_METHOD_ACON_P] = ds_output_acon_p;
  ds->mMethods[NE_DS_METHOD_ACON] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_acon;
  ds->mMakeOutput[NE_DS_METHOD_ACON] = ds_output_acon;
  ds->mMethods[NE_DS_METHOD_APAR_P] = ds_apar_p;
  ds->mMakeOutput[NE_DS_METHOD_APAR_P] = ds_output_apar_p;
  ds->mMethods[NE_DS_METHOD_APAR] = ds_apar;
  ds->mMakeOutput[NE_DS_METHOD_APAR] = ds_output_apar;
  ds->mMethods[NE_DS_METHOD_BCON_P] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_bcon_p;
  ds->mMakeOutput[NE_DS_METHOD_BCON_P] = ds_output_bcon_p;
  ds->mMethods[NE_DS_METHOD_BCON] = ds_bcon;
  ds->mMakeOutput[NE_DS_METHOD_BCON] = ds_output_bcon;
  ds->mMethods[NE_DS_METHOD_BPAR_P] = ds_bpar_p;
  ds->mMakeOutput[NE_DS_METHOD_BPAR_P] = ds_output_bpar_p;
  ds->mMethods[NE_DS_METHOD_BPAR] = ds_bpar;
  ds->mMakeOutput[NE_DS_METHOD_BPAR] = ds_output_bpar;
  ds->mMethods[NE_DS_METHOD_CCON_P] = ds_ccon_p;
  ds->mMakeOutput[NE_DS_METHOD_CCON_P] = ds_output_ccon_p;
  ds->mMethods[NE_DS_METHOD_CCON] = ds_ccon;
  ds->mMakeOutput[NE_DS_METHOD_CCON] = ds_output_ccon;
  ds->mMethods[NE_DS_METHOD_CPAR_P] = ds_cpar_p;
  ds->mMakeOutput[NE_DS_METHOD_CPAR_P] = ds_output_cpar_p;
  ds->mMethods[NE_DS_METHOD_CPAR] = ds_cpar;
  ds->mMakeOutput[NE_DS_METHOD_CPAR] = ds_output_cpar;
  ds->mMethods[NE_DS_METHOD_F] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VDF] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_vdf;
  ds->mMakeOutput[NE_DS_METHOD_VDF] = ds_output_vdf;
  ds->mMethods[NE_DS_METHOD_VMF] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_VPF] = ds_vpf;
  ds->mMakeOutput[NE_DS_METHOD_VPF] = ds_output_vpf;
  ds->mMethods[NE_DS_METHOD_VSF] = ds_vsf;
  ds->mMakeOutput[NE_DS_METHOD_VSF] = ds_output_vsf;
  ds->mMethods[NE_DS_METHOD_SLF] = ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_SLF0] = ds_slf0;
  ds->mMakeOutput[NE_DS_METHOD_SLF0] = ds_output_slf0;
  ds->mMethods[NE_DS_METHOD_DXF_P] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_duf;
  ds->mMakeOutput[NE_DS_METHOD_DUF] = ds_output_duf;
  ds->mMethods[NE_DS_METHOD_DTF_P] = ds_dtf_p;
  ds->mMakeOutput[NE_DS_METHOD_DTF_P] = ds_output_dtf_p;
  ds->mMethods[NE_DS_METHOD_DTF] = ds_dtf;
  ds->mMakeOutput[NE_DS_METHOD_DTF] = ds_output_dtf;
  ds->mMethods[NE_DS_METHOD_DDF_P] = ds_ddf_p;
  ds->mMakeOutput[NE_DS_METHOD_DDF_P] = ds_output_ddf_p;
  ds->mMethods[NE_DS_METHOD_DDF] = ds_ddf;
  ds->mMakeOutput[NE_DS_METHOD_DDF] = ds_output_ddf;
  ds->mMethods[NE_DS_METHOD_DPDXF_P] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_dpdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DPDXF_P] = ds_output_dpdxf_p;
  ds->mMethods[NE_DS_METHOD_DPDXF] = ds_dpdxf;
  ds->mMakeOutput[NE_DS_METHOD_DPDXF] = ds_output_dpdxf;
  ds->mMethods[NE_DS_METHOD_DWF_P] = ds_dwf_p;
  ds->mMakeOutput[NE_DS_METHOD_DWF_P] = ds_output_dwf_p;
  ds->mMethods[NE_DS_METHOD_DWF] = ds_dwf;
  ds->mMakeOutput[NE_DS_METHOD_DWF] = ds_output_dwf;
  ds->mMethods[NE_DS_METHOD_TDUF_P] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_dnf_p;
  ds->mMakeOutput[NE_DS_METHOD_DNF_P] = ds_output_dnf_p;
  ds->mMethods[NE_DS_METHOD_DNF] = ds_dnf;
  ds->mMakeOutput[NE_DS_METHOD_DNF] = ds_output_dnf;
  ds->mMethods[NE_DS_METHOD_DNF_V_X] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_dnf_v_x;
  ds->mMakeOutput[NE_DS_METHOD_DNF_V_X] = ds_output_dnf_v_x;
  ds->mMethods[NE_DS_METHOD_CER] = ds_cer;
  ds->mMakeOutput[NE_DS_METHOD_CER] = ds_output_cer;
  ds->mMethods[NE_DS_METHOD_DXCER] = ds_dxcer;
  ds->mMakeOutput[NE_DS_METHOD_DXCER] = ds_output_dxcer;
  ds->mMethods[NE_DS_METHOD_DXCER_P] = ds_dxcer_p;
  ds->mMakeOutput[NE_DS_METHOD_DXCER_P] = ds_output_dxcer_p;
  ds->mMethods[NE_DS_METHOD_DDCER] = ds_ddcer;
  ds->mMakeOutput[NE_DS_METHOD_DDCER] = ds_output_ddcer;
  ds->mMethods[NE_DS_METHOD_DDCER_P] = ds_ddcer_p;
  ds->mMakeOutput[NE_DS_METHOD_DDCER_P] = ds_output_ddcer_p;
  ds->mMethods[NE_DS_METHOD_IC] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_ic;
  ds->mMakeOutput[NE_DS_METHOD_IC] = ds_output_ic;
  ds->mMethods[NE_DS_METHOD_ICR] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_icr;
  ds->mMakeOutput[NE_DS_METHOD_ICR] = ds_output_icr;
  ds->mMethods[NE_DS_METHOD_ICR_IM] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_icr_im;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IM] = ds_output_icr_im;
  ds->mMethods[NE_DS_METHOD_ICR_ID] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_icr_id;
  ds->mMakeOutput[NE_DS_METHOD_ICR_ID] = ds_output_icr_id;
  ds->mMethods[NE_DS_METHOD_ICR_IL] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_icr_il;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IL] = ds_output_icr_il;
  ds->mMethods[NE_DS_METHOD_DXICR] = ds_dxicr;
  ds->mMakeOutput[NE_DS_METHOD_DXICR] = ds_output_dxicr;
  ds->mMethods[NE_DS_METHOD_DXICR_P] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_DDICR] = ds_ddicr;
  ds->mMakeOutput[NE_DS_METHOD_DDICR] = ds_output_ddicr;
  ds->mMethods[NE_DS_METHOD_DDICR_P] = ds_ddicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICR_P] = ds_output_ddicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = ds_tduicr_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_ICRM_P] = ds_icrm_p;
  ds->mMakeOutput[NE_DS_METHOD_ICRM_P] = ds_output_icrm_p;
  ds->mMethods[NE_DS_METHOD_ICRM] = ds_icrm;
  ds->mMakeOutput[NE_DS_METHOD_ICRM] = ds_output_icrm;
  ds->mMethods[NE_DS_METHOD_DXICRM_P] = ds_dxicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM_P] = ds_output_dxicrm_p;
  ds->mMethods[NE_DS_METHOD_DXICRM] = ds_dxicrm;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM] = ds_output_dxicrm;
  ds->mMethods[NE_DS_METHOD_DDICRM_P] = ds_ddicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM_P] = ds_output_ddicrm_p;
  ds->mMethods[NE_DS_METHOD_DDICRM] = ds_ddicrm;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM] = ds_output_ddicrm;
  ds->mMethods[NE_DS_METHOD_FREQS] = ds_freqs;
  ds->mMakeOutput[NE_DS_METHOD_FREQS] = ds_output_freqs;
  ds->mMethods[NE_DS_METHOD_SOLVERHITS] = ds_solverhits;
  ds->mMakeOutput[NE_DS_METHOD_SOLVERHITS] = ds_output_solverhits;
  ds->mMethods[NE_DS_METHOD_MDUY_P] = ds_mduy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] = ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = ds_duy;
  ds->mMakeOutput[NE_DS_METHOD_DUY] = ds_output_duy;
  ds->mMethods[NE_DS_METHOD_DTY_P] = ds_dty_p;
  ds->mMakeOutput[NE_DS_METHOD_DTY_P] = ds_output_dty_p;
  ds->mMethods[NE_DS_METHOD_DTY] = ds_dty;
  ds->mMakeOutput[NE_DS_METHOD_DTY] = ds_output_dty;
  ds->mMethods[NE_DS_METHOD_MODE] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] = ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] = ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_UPDATE2_R] = ds_update2_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_R] = ds_output_update2_r;
  ds->mMethods[NE_DS_METHOD_UPDATE2_I] = ds_update2_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_I] = ds_output_update2_i;
  ds->mMethods[NE_DS_METHOD_LOCK_R] = ds_lock_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_R] = ds_output_lock_r;
  ds->mMethods[NE_DS_METHOD_LOCK_I] = ds_lock_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_I] = ds_output_lock_i;
  ds->mMethods[NE_DS_METHOD_LOCK2_R] = ds_lock2_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_R] = ds_output_lock2_r;
  ds->mMethods[NE_DS_METHOD_LOCK2_I] = ds_lock2_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_I] = ds_output_lock2_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_assert;
  ds->mMakeOutput[NE_DS_METHOD_ASSERT] = ds_output_assert;
  ds->mMethods[NE_DS_METHOD_PASSERT] = ds_passert;
  ds->mMakeOutput[NE_DS_METHOD_PASSERT] = ds_output_passert;
  ds->mMethods[NE_DS_METHOD_IASSERT] = ds_iassert;
  ds->mMakeOutput[NE_DS_METHOD_IASSERT] = ds_output_iassert;
  ds->mMethods[NE_DS_METHOD_DEL_T] = ds_del_t;
  ds->mMakeOutput[NE_DS_METHOD_DEL_T] = ds_output_del_t;
  ds->mMethods[NE_DS_METHOD_DEL_V] = ds_del_v;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V] = ds_output_del_v;
  ds->mMethods[NE_DS_METHOD_DEL_V0] = ds_del_v0;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V0] = ds_output_del_v0;
  ds->mMethods[NE_DS_METHOD_DEL_TMAX] = ds_del_tmax;
  ds->mMakeOutput[NE_DS_METHOD_DEL_TMAX] = ds_output_del_tmax;
  ds->mMethods[NE_DS_METHOD_DXDELT_P] = ds_dxdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT_P] = ds_output_dxdelt_p;
  ds->mMethods[NE_DS_METHOD_DXDELT] = ds_dxdelt;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT] = ds_output_dxdelt;
  ds->mMethods[NE_DS_METHOD_DUDELT_P] = ds_dudelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT_P] = ds_output_dudelt_p;
  ds->mMethods[NE_DS_METHOD_DUDELT] = ds_dudelt;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT] = ds_output_dudelt;
  ds->mMethods[NE_DS_METHOD_DTDELT_P] = ds_dtdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT_P] = ds_output_dtdelt_p;
  ds->mMethods[NE_DS_METHOD_DTDELT] = ds_dtdelt;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT] = ds_output_dtdelt;
  ds->mMethods[NE_DS_METHOD_OBS_EXP] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_obs_il;
  ds->mMakeOutput[NE_DS_METHOD_OBS_IL] = ds_output_obs_il;
  ds->mMethods[NE_DS_METHOD_DP_L] = ds_dp_l;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = ds_dp_i;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = ds_dp_j;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = ds_dp_r;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] = ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = ds_qu;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = ds_qt;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = ds_q1;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] = ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] = ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;
  ds->mMethods[NE_DS_METHOD_VAR_TOL] = ds_var_tol;
  ds->mMakeOutput[NE_DS_METHOD_VAR_TOL] = ds_output_var_tol;
  ds->mMethods[NE_DS_METHOD_EQ_TOL] = ds_eq_tol;
  ds->mMakeOutput[NE_DS_METHOD_EQ_TOL] = ds_output_eq_tol;
  ds->mMethods[NE_DS_METHOD_LV] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_lv;
  ds->mMakeOutput[NE_DS_METHOD_LV] = ds_output_lv;
  ds->mMethods[NE_DS_METHOD_SLV] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_slv;
  ds->mMakeOutput[NE_DS_METHOD_SLV] = ds_output_slv;
  ds->mMethods[NE_DS_METHOD_NLDV] = BMS_PIL_Wrapper_6c5e8dbc_49_ds_nldv;
  ds->mMakeOutput[NE_DS_METHOD_NLDV] = ds_output_nldv;
  ds->mMethods[NE_DS_METHOD_SCLV] = ds_sclv;
  ds->mMakeOutput[NE_DS_METHOD_SCLV] = ds_output_sclv;
  ds->mMethods[NE_DS_METHOD_IMIN] = ds_imin;
  ds->mMakeOutput[NE_DS_METHOD_IMIN] = ds_output_imin;
  ds->mMethods[NE_DS_METHOD_IMAX] = ds_imax;
  ds->mMakeOutput[NE_DS_METHOD_IMAX] = ds_output_imax;
  ds->mMethods[NE_DS_METHOD_DIMIN] = ds_dimin;
  ds->mMakeOutput[NE_DS_METHOD_DIMIN] = ds_output_dimin;
  ds->mMethods[NE_DS_METHOD_DIMAX] = ds_dimax;
  ds->mMakeOutput[NE_DS_METHOD_DIMAX] = ds_output_dimax;

  /* equation data */
  ds->mEquationData = s_equation_data;

  /* cer data */
  ds->mCERData = s_cer_data;

  /* icr data */
  ds->mICRData = s_icr_data;

  /* continuous variable data */
  ds->mVariableData = s_variable_data;

  /* discrete variable data */
  ds->mDiscreteData = s_discrete_data;

  /* observable data */
  ds->mObservableData = s_observable_data;

  /* major mode data */
  ds->mMajorModeData = s_major_mode_data;

  /* zc data */
  ds->mZCData = s_zc_data;

  /* ranges */
  ds->mRanges = s_range;

  /* assert data */
  ds->mAssertData = s_assert_data;

  /* assert ranges */
  ds->mAssertRanges = s_assert_range;

  /* param assert data */
  ds->mParamAssertData = s_param_assert_data;

  /* param assert ranges */
  ds->mParamAssertRanges = s_param_assert_range;

  /* initial assert data */
  ds->mInitialAssertData = s_initial_assert_data;

  /* initial assert ranges */
  ds->mInitialAssertRanges = s_initial_assert_range;

  /* equation ranges */
  ds->mEquationRanges = s_equation_range;

  /* cer ranges */
  ds->mCERRanges = s_cer_range;

  /* icr ranges */
  ds->mICRRanges = s_icr_range;

  /* parameters */
  ds->mLogicalParameters = s_logical_parameter_data;
  ds->mIntegerParameters = s_integer_parameter_data;
  ds->mIndexParameters = s_index_parameter_data;
  ds->mRealParameters = s_real_parameter_data;

  /* constant tables */
  _ds->mField0 = s_constant_table0;
  _ds->mField1 = s_constant_table1;
  _ds->mField2 = s_constant_table2;
  _ds->mField3 = s_constant_table3;
  _ds->mField4 = s_constant_table4;
  _ds->mField5 = s_constant_table5;
  _ds->mField6 = s_constant_table6;
  ds->mNumLargeArray = 7;
  return (NeDynamicSystem *)_ds;
}

static int32_T ds_passert (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_iassert (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_cer (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxcer (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxcer_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  out->mDXCER_P.mNumCol = 205ULL;
  out->mDXCER_P.mNumRow = 0ULL;
  for (i = 0; i < 206; i++) {
    out->mDXCER_P.mJc[i] = 0;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddcer (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddcer_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDDCER_P.mNumCol = 0ULL;
  out->mDDCER_P.mNumRow = 0ULL;
  out->mDDCER_P.mJc[0] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_del_v (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_del_v0 (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_del_tmax (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_del_t (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxdelt (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxdelt_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  out->mDXDELT_P.mNumCol = 205ULL;
  out->mDXDELT_P.mNumRow = 0ULL;
  for (i = 0; i < 206; i++) {
    out->mDXDELT_P.mJc[i] = 0;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dudelt (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dudelt_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDUDELT_P.mNumCol = 15ULL;
  out->mDUDELT_P.mNumRow = 0ULL;
  out->mDUDELT_P.mJc[0] = 0;
  out->mDUDELT_P.mJc[1] = 0;
  out->mDUDELT_P.mJc[2] = 0;
  out->mDUDELT_P.mJc[3] = 0;
  out->mDUDELT_P.mJc[4] = 0;
  out->mDUDELT_P.mJc[5] = 0;
  out->mDUDELT_P.mJc[6] = 0;
  out->mDUDELT_P.mJc[7] = 0;
  out->mDUDELT_P.mJc[8] = 0;
  out->mDUDELT_P.mJc[9] = 0;
  out->mDUDELT_P.mJc[10] = 0;
  out->mDUDELT_P.mJc[11] = 0;
  out->mDUDELT_P.mJc[12] = 0;
  out->mDUDELT_P.mJc[13] = 0;
  out->mDUDELT_P.mJc[14] = 0;
  out->mDUDELT_P.mJc[15] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dtdelt (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dtdelt_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDTDELT_P.mNumCol = 1ULL;
  out->mDTDELT_P.mNumRow = 0ULL;
  out->mDTDELT_P.mJc[0] = 0;
  out->mDTDELT_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_cache_r (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_init_r (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_update_r (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_lock_r (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_cache_i (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_init_i (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_update_i (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_lock_i (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_update2_r (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_lock2_r (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_update2_i (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_lock2_i (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_sfp (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_sfo (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dtf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dtf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDTF_P.mNumCol = 1ULL;
  out->mDTF_P.mNumRow = 205ULL;
  out->mDTF_P.mJc[0] = 0;
  out->mDTF_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDDF_P.mNumCol = 0ULL;
  out->mDDF_P.mNumRow = 205ULL;
  out->mDDF_P.mJc[0] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_apar (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_apar_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  out->mAPAR_P.mNumCol = 205ULL;
  out->mAPAR_P.mNumRow = 205ULL;
  for (i = 0; i < 206; i++) {
    out->mAPAR_P.mJc[i] = 0;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_bcon (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t5, NeDsMethodOutput *out)
{
  real_T t1[12];
  real_T t2[12];
  size_t t4;
  (void)t5;
  (void)LC;
  t1[0ULL] = 1.0;
  t1[1ULL] = 1.0;
  t1[2ULL] = 1.0;
  t1[3ULL] = 1.0;
  t1[4ULL] = 1.0;
  t1[5ULL] = 1.0;
  t1[6ULL] = 1.0;
  t1[7ULL] = 1.0;
  t1[8ULL] = 1.0;
  t1[9ULL] = 1.0;
  t1[10ULL] = 1.0;
  t1[11ULL] = 1.0;
  t2[0ULL] = 1.0;
  t2[1ULL] = 1.0;
  t2[2ULL] = 1.0;
  t2[3ULL] = 1.0;
  t2[4ULL] = 1.0;
  t2[5ULL] = 1.0;
  t2[6ULL] = 1.0;
  t2[7ULL] = 1.0;
  t2[8ULL] = 1.0;
  t2[9ULL] = 1.0;
  t2[10ULL] = 1.0;
  t2[11ULL] = 1.0;
  for (t4 = 0ULL; t4 < 12ULL; t4++) {
    out->mBCON.mX[t4] = t1[t4];
  }

  for (t4 = 0ULL; t4 < 12ULL; t4++) {
    out->mBCON.mX[t4 + 12ULL] = t2[t4];
  }

  out->mBCON.mX[24ULL] = -1.0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_bpar (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_bpar_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mBPAR_P.mNumCol = 15ULL;
  out->mBPAR_P.mNumRow = 205ULL;
  out->mBPAR_P.mJc[0] = 0;
  out->mBPAR_P.mJc[1] = 0;
  out->mBPAR_P.mJc[2] = 0;
  out->mBPAR_P.mJc[3] = 0;
  out->mBPAR_P.mJc[4] = 0;
  out->mBPAR_P.mJc[5] = 0;
  out->mBPAR_P.mJc[6] = 0;
  out->mBPAR_P.mJc[7] = 0;
  out->mBPAR_P.mJc[8] = 0;
  out->mBPAR_P.mJc[9] = 0;
  out->mBPAR_P.mJc[10] = 0;
  out->mBPAR_P.mJc[11] = 0;
  out->mBPAR_P.mJc[12] = 0;
  out->mBPAR_P.mJc[13] = 0;
  out->mBPAR_P.mJc[14] = 0;
  out->mBPAR_P.mJc[15] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ccon (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ccon_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mCCON_P.mNumCol = 1ULL;
  out->mCCON_P.mNumRow = 205ULL;
  out->mCCON_P.mJc[0] = 0;
  out->mCCON_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_cpar (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_cpar_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mCPAR_P.mNumCol = 1ULL;
  out->mCPAR_P.mNumRow = 205ULL;
  out->mCPAR_P.mJc[0] = 0;
  out->mCPAR_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dwf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dwf_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDWF_P.mNumCol = 0ULL;
  out->mDWF_P.mNumRow = 205ULL;
  out->mDWF_P.mJc[0] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dpdxf (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_slf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  for (i = 0; i < 205; i++) {
    out->mSLF.mX[i] = false;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dnf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDNF.mX[0] = -1.0;
  out->mDNF.mX[1] = -1.0;
  out->mDNF.mX[2] = -1.0;
  out->mDNF.mX[3] = -1.0;
  out->mDNF.mX[4] = -1.0;
  out->mDNF.mX[5] = -1.0;
  out->mDNF.mX[6] = -1.0;
  out->mDNF.mX[7] = -1.0;
  out->mDNF.mX[8] = -1.0;
  out->mDNF.mX[9] = -1.0;
  out->mDNF.mX[10] = -1.0;
  out->mDNF.mX[11] = -1.0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_slf0 (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  for (i = 0; i < 205; i++) {
    out->mSLF0.mX[i] = false;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_vpf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  for (i = 0; i < 205; i++) {
    out->mVPF.mX[i] = false;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_vsf (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  for (i = 0; i < 205; i++) {
    out->mVSF.mX[i] = false;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_freqs (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxicr (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDXICR.mX[0ULL] = 1.0;
  out->mDXICR.mX[1ULL] = 1.0;
  out->mDXICR.mX[2ULL] = 1.0;
  out->mDXICR.mX[3ULL] = 1.0;
  out->mDXICR.mX[4ULL] = 1.0;
  out->mDXICR.mX[5ULL] = 1.0;
  out->mDXICR.mX[6ULL] = 1.0;
  out->mDXICR.mX[7ULL] = 1.0;
  out->mDXICR.mX[8ULL] = 1.0;
  out->mDXICR.mX[9ULL] = 1.0;
  out->mDXICR.mX[10ULL] = 1.0;
  out->mDXICR.mX[11ULL] = 1.0;
  out->mDXICR.mX[12ULL] = 1.0;
  out->mDXICR.mX[13ULL] = 1.0;
  out->mDXICR.mX[14ULL] = 1.0;
  out->mDXICR.mX[15ULL] = 1.0;
  out->mDXICR.mX[16ULL] = 1.0;
  out->mDXICR.mX[17ULL] = 1.0;
  out->mDXICR.mX[18ULL] = 1.0;
  out->mDXICR.mX[19ULL] = 1.0;
  out->mDXICR.mX[20ULL] = 1.0;
  out->mDXICR.mX[21ULL] = 1.0;
  out->mDXICR.mX[22ULL] = 1.0;
  out->mDXICR.mX[23ULL] = 1.0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddicr (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddicr_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDDICR_P.mNumCol = 0ULL;
  out->mDDICR_P.mNumRow = 36ULL;
  out->mDDICR_P.mJc[0] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_tduicr_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mTDUICR_P.mNumCol = 15ULL;
  out->mTDUICR_P.mNumRow = 36ULL;
  out->mTDUICR_P.mJc[0] = 0;
  out->mTDUICR_P.mJc[1] = 0;
  out->mTDUICR_P.mJc[2] = 0;
  out->mTDUICR_P.mJc[3] = 0;
  out->mTDUICR_P.mJc[4] = 0;
  out->mTDUICR_P.mJc[5] = 0;
  out->mTDUICR_P.mJc[6] = 0;
  out->mTDUICR_P.mJc[7] = 0;
  out->mTDUICR_P.mJc[8] = 0;
  out->mTDUICR_P.mJc[9] = 0;
  out->mTDUICR_P.mJc[10] = 0;
  out->mTDUICR_P.mJc[11] = 0;
  out->mTDUICR_P.mJc[12] = 0;
  out->mTDUICR_P.mJc[13] = 0;
  out->mTDUICR_P.mJc[14] = 0;
  out->mTDUICR_P.mJc[15] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_icrm (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_icrm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  out->mICRM_P.mNumCol = 205ULL;
  out->mICRM_P.mNumRow = 36ULL;
  for (i = 0; i < 206; i++) {
    out->mICRM_P.mJc[i] = 0;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxicrm (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxicrm_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  out->mDXICRM_P.mNumCol = 205ULL;
  out->mDXICRM_P.mNumRow = 0ULL;
  for (i = 0; i < 206; i++) {
    out->mDXICRM_P.mJc[i] = 0;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddicrm (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddicrm_p (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDDICRM_P.mNumCol = 0ULL;
  out->mDDICRM_P.mNumRow = 0ULL;
  out->mDDICRM_P.mJc[0] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_imin (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  for (i = 0; i < 205; i++) {
    out->mIMIN.mX[i] = -pmf_get_inf();
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_imax (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  for (i = 0; i < 205; i++) {
    out->mIMAX.mX[i] = pmf_get_inf();
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dimin (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dimax (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_mpar (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_mpar_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  out->mMPAR_P.mNumCol = 205ULL;
  out->mMPAR_P.mNumRow = 205ULL;
  for (i = 0; i < 206; i++) {
    out->mMPAR_P.mJc[i] = 0;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_mnl (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_mnl_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  out->mMNL_P.mNumCol = 205ULL;
  out->mMNL_P.mNumRow = 205ULL;
  for (i = 0; i < 206; i++) {
    out->mMNL_P.mJc[i] = 0;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dxm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  out->mDXM_P.mNumCol = 205ULL;
  out->mDXM_P.mNumRow = 336ULL;
  for (i = 0; i < 206; i++) {
    out->mDXM_P.mJc[i] = 0;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_ddm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDDM_P.mNumCol = 0ULL;
  out->mDDM_P.mNumRow = 336ULL;
  out->mDDM_P.mJc[0] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dum (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dum_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDUM_P.mNumCol = 15ULL;
  out->mDUM_P.mNumRow = 336ULL;
  out->mDUM_P.mJc[0] = 0;
  out->mDUM_P.mJc[1] = 0;
  out->mDUM_P.mJc[2] = 0;
  out->mDUM_P.mJc[3] = 0;
  out->mDUM_P.mJc[4] = 0;
  out->mDUM_P.mJc[5] = 0;
  out->mDUM_P.mJc[6] = 0;
  out->mDUM_P.mJc[7] = 0;
  out->mDUM_P.mJc[8] = 0;
  out->mDUM_P.mJc[9] = 0;
  out->mDUM_P.mJc[10] = 0;
  out->mDUM_P.mJc[11] = 0;
  out->mDUM_P.mJc[12] = 0;
  out->mDUM_P.mJc[13] = 0;
  out->mDUM_P.mJc[14] = 0;
  out->mDUM_P.mJc[15] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dtm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dtm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDTM_P.mNumCol = 1ULL;
  out->mDTM_P.mNumRow = 336ULL;
  out->mDTM_P.mJc[0] = 0;
  out->mDTM_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dpm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dpm_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDPM_P.mNumCol = 24ULL;
  out->mDPM_P.mNumRow = 336ULL;
  out->mDPM_P.mJc[0] = 0;
  out->mDPM_P.mJc[1] = 0;
  out->mDPM_P.mJc[2] = 0;
  out->mDPM_P.mJc[3] = 0;
  out->mDPM_P.mJc[4] = 0;
  out->mDPM_P.mJc[5] = 0;
  out->mDPM_P.mJc[6] = 0;
  out->mDPM_P.mJc[7] = 0;
  out->mDPM_P.mJc[8] = 0;
  out->mDPM_P.mJc[9] = 0;
  out->mDPM_P.mJc[10] = 0;
  out->mDPM_P.mJc[11] = 0;
  out->mDPM_P.mJc[12] = 0;
  out->mDPM_P.mJc[13] = 0;
  out->mDPM_P.mJc[14] = 0;
  out->mDPM_P.mJc[15] = 0;
  out->mDPM_P.mJc[16] = 0;
  out->mDPM_P.mJc[17] = 0;
  out->mDPM_P.mJc[18] = 0;
  out->mDPM_P.mJc[19] = 0;
  out->mDPM_P.mJc[20] = 0;
  out->mDPM_P.mJc[21] = 0;
  out->mDPM_P.mJc[22] = 0;
  out->mDPM_P.mJc[23] = 0;
  out->mDPM_P.mJc[24] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_vmm (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  for (i = 0; i < 336; i++) {
    out->mVMM.mX[i] = false;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dp_l (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dp_i (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dp_j (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dp_r (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_qx (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_qu (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_qt (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_q1 (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_qx_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  out->mQX_P.mNumCol = 205ULL;
  out->mQX_P.mNumRow = 205ULL;
  for (i = 0; i < 206; i++) {
    out->mQX_P.mJc[i] = 0;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_qu_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mQU_P.mNumCol = 15ULL;
  out->mQU_P.mNumRow = 205ULL;
  out->mQU_P.mJc[0] = 0;
  out->mQU_P.mJc[1] = 0;
  out->mQU_P.mJc[2] = 0;
  out->mQU_P.mJc[3] = 0;
  out->mQU_P.mJc[4] = 0;
  out->mQU_P.mJc[5] = 0;
  out->mQU_P.mJc[6] = 0;
  out->mQU_P.mJc[7] = 0;
  out->mQU_P.mJc[8] = 0;
  out->mQU_P.mJc[9] = 0;
  out->mQU_P.mJc[10] = 0;
  out->mQU_P.mJc[11] = 0;
  out->mQU_P.mJc[12] = 0;
  out->mQU_P.mJc[13] = 0;
  out->mQU_P.mJc[14] = 0;
  out->mQU_P.mJc[15] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_qt_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mQT_P.mNumCol = 1ULL;
  out->mQT_P.mNumRow = 205ULL;
  out->mQT_P.mJc[0] = 0;
  out->mQT_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_q1_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mQ1_P.mNumCol = 1ULL;
  out->mQ1_P.mNumRow = 205ULL;
  out->mQ1_P.mJc[0] = 0;
  out->mQ1_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_solverhits (const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_var_tol (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  for (i = 0; i < 205; i++) {
    out->mVAR_TOL.mX[i] = 1.0E-9;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_eq_tol (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  for (i = 0; i < 205; i++) {
    out->mEQ_TOL.mX[i] = 1.0E-9;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_sclv (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  for (i = 0; i < 205; i++) {
    out->mSCLV.mX[i] = false;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_duy (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDUY.mX[0ULL] = 1.0;
  out->mDUY.mX[1ULL] = 1.0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_mduy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mMDUY_P.mNumCol = 15ULL;
  out->mMDUY_P.mNumRow = 38ULL;
  out->mMDUY_P.mJc[0] = 0;
  out->mMDUY_P.mJc[1] = 0;
  out->mMDUY_P.mJc[2] = 0;
  out->mMDUY_P.mJc[3] = 0;
  out->mMDUY_P.mJc[4] = 0;
  out->mMDUY_P.mJc[5] = 0;
  out->mMDUY_P.mJc[6] = 0;
  out->mMDUY_P.mJc[7] = 0;
  out->mMDUY_P.mJc[8] = 0;
  out->mMDUY_P.mJc[9] = 0;
  out->mMDUY_P.mJc[10] = 0;
  out->mMDUY_P.mJc[11] = 0;
  out->mMDUY_P.mJc[12] = 0;
  out->mMDUY_P.mJc[13] = 0;
  out->mMDUY_P.mJc[14] = 0;
  out->mMDUY_P.mJc[15] = 0;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_mdxy_p (const NeDynamicSystem *LC, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *out)
{
  int32_T i;
  (void)t1;
  (void)LC;
  out->mMDXY_P.mNumCol = 205ULL;
  out->mMDXY_P.mNumRow = 38ULL;
  for (i = 0; i < 206; i++) {
    out->mMDXY_P.mJc[i] = 0;
  }

  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dty (const NeDynamicSystem *LC, const NeDynamicSystemInput *t1,
  NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  (void)out;
  (void)LC;
  (void)out;
  return 0;
}

static int32_T ds_dty_p (const NeDynamicSystem *LC, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *out)
{
  (void)t1;
  (void)LC;
  out->mDTY_P.mNumCol = 1ULL;
  out->mDTY_P.mNumRow = 38ULL;
  out->mDTY_P.mJc[0] = 0;
  out->mDTY_P.mJc[1] = 0;
  (void)LC;
  (void)out;
  return 0;
}
