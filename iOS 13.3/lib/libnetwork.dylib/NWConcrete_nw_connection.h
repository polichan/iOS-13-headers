/* Generated by RuntimeBrowser
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_connection : NSObject <OS_nw_connection> {
    NWConcrete_nw_connection * _internal_reference;
    NSObject<OS_nw_array> * activities;
    unsigned int  adaptive_read_timeout_count;
    id /* block */  adaptive_read_timeout_handler;
    unsigned int  adaptive_write_timeout_count;
    id /* block */  adaptive_write_timeout_handler;
    int  alternate_path_state;
    id /* block */  alternate_path_state_handler;
    NSObject<OS_nw_array> * attempted_endpoints;
    NSObject<OS_nw_read_request> * batched_receives;
    NSObject<OS_nw_write_request> * batched_sends;
    bool  batching;
    id /* block */  better_path_available_handler;
    NSObject<OS_dispatch_group> * cancel_group;
    id /* block */  cancel_handler;
    bool  cancelled;
    NSObject<OS_nw_array> * candidate_endpoint_handlers;
    id /* block */  client_handler;
    unsigned int  client_qos_class;
    NSObject<OS_dispatch_queue> * client_queue;
    NSObject<OS_nw_endpoint_handler> * connected_endpoint_handler;
    unsigned int  connected_fallback_generation;
    NSObject<OS_nw_array> * data_transfer_reports;
    NSObject<OS_nw_endpoint_handler> * dry_run_endpoint_handler;
    NSObject<OS_nw_endpoint> * endpoint;
    NSObject<OS_nw_array> * errors;
    NSObject<OS_nw_establishment_report> * establishment_report;
    unsigned int  excessive_keepalive_count;
    id /* block */  excessive_keepalive_handler;
    unsigned int  excessive_keepalive_interval;
    unsigned int  generic_stats_reported;
    unsigned int  hit_max_timestamps;
    NSObject<OS_nw_read_request> * initial_read_requests;
    NSObject<OS_nw_write_request> * initial_write_requests;
    unsigned int  initial_writes_are_non_idempotent;
    unsigned int  interface_time_delta;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    unsigned char  logging_sequence_number;
    id /* block */  low_throughput_handler;
    struct metadata_changed_registration_list_s { 
        struct nw_connection_metadata_changed_registration {} *tqh_first; 
        struct nw_connection_metadata_changed_registration {} **tqh_last; 
    }  metadata_changed_registration_list;
    unsigned short  num_timestamps;
    NSObject<OS_nw_parameters> * parameters;
    NSObject<OS_nw_endpoint_handler> * parent_endpoint_handler;
    id /* block */  path_changed_handler;
    unsigned long long  pending_expected_progress_target;
    NSObject<OS_nw_array> * probes;
    bool  prohibit_set_queue;
    id /* block */  read_close_handler;
    NSObject<OS_nw_endpoint_handler> * ready_dry_run_endpoint_handler;
    unsigned int  should_report_activities;
    unsigned int  should_report_generic_stats;
    unsigned int  should_report_stats;
    unsigned long long  start_time;
    int  state;
    int  stats_reason;
    struct netcore_stats_tcp_report { union { struct { struct netcore_stats_tcp_statistics_report { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned long long x_1_3_5; unsigned long long x_1_3_6; unsigned long long x_1_3_7; unsigned long long x_1_3_8; unsigned long long x_1_3_9; unsigned long long x_1_3_10; unsigned long long x_1_3_11; unsigned long long x_1_3_12; unsigned long long x_1_3_13; unsigned long long x_1_3_14; unsigned long long x_1_3_15; unsigned long long x_1_3_16; unsigned int x_1_3_17; unsigned int x_1_3_18; unsigned int x_1_3_19; unsigned int x_1_3_20; unsigned int x_1_3_21; unsigned int x_1_3_22; unsigned int x_1_3_23; unsigned int x_1_3_24; unsigned int x_1_3_25; unsigned int x_1_3_26; unsigned int x_1_3_27; unsigned int x_1_3_28; unsigned int x_1_3_29; unsigned int x_1_3_30; unsigned int x_1_3_31; unsigned int x_1_3_32; unsigned int x_1_3_33; int x_1_3_34; int x_1_3_35; int x_1_3_36; unsigned int x_1_3_37 : 1; unsigned int x_1_3_38 : 1; unsigned int x_1_3_39 : 1; unsigned int x_1_3_40 : 1; unsigned int x_1_3_41 : 1; unsigned int x_1_3_42 : 1; } x_1_2_1; } x_1_1_1; } x1; } * stats_report;
    unsigned int  stats_reported;
    struct nw_connection_throughput_monitor_s { 
        unsigned long long current_bytes; 
        unsigned long long current_time; 
        unsigned long long last_bytes; 
        unsigned long long last_time; 
        void *timer; 
        unsigned int minimum; 
        unsigned char __pad[4]; 
    }  throughput_monitor;
    struct nw_connection_timestamp_s { unsigned long long x1; unsigned long long x2; struct nw_endpoint_handler_event_s { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; unsigned long long x4; unsigned char x5[0]; } * timestamps;
    unsigned int  top_id;
    unsigned char  top_uuid;
    NSObject<OS_nw_endpoint_handler> * transport_endpoint_handler;
    unsigned short  used_timestamps;
    id /* block */  viability_changed_handler;
    id /* block */  write_close_handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 identifier:(unsigned int)arg3;
- (id)redactedDescription;

@end