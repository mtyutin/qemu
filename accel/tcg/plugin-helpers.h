#ifdef CONFIG_PLUGIN
// Plugin callback might read CPU state, but TCG_CALL_NO_RWG flag causes optimization passes
// to do store register values back into CPU state memory.
//
// TODO: maybe it would be worth to create additional callback to explicitelly enforce
// TCG variables persistence

DEF_HELPER_FLAGS_2(plugin_vcpu_udata_cb, 0, void, i32, ptr)
DEF_HELPER_FLAGS_4(plugin_vcpu_mem_cb, 0, void, i32, i32, i64, ptr)

#endif
