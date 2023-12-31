//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class Core_Audio_Driver_Host_Proxy, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface Core_Audio_Driver : NSObject
{
    Core_Audio_Driver_Host_Proxy *_driver_host_proxy;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSXPCListenerEndpoint *_endpoint;	// 24 = 0x18
    struct AudioServerPlugInDriverInterface **_asp_interface;	// 32 = 0x20
    struct AudioServerPlugInHostInterface *_host_interface;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_concurrent_queue;	// 48 = 0x30
    CDUnknownBlockType _process_boost_reply;	// 56 = 0x38
    shared_ptr_53c12af5 _config_change_info_lock;	// 64 = 0x40
    shared_ptr_e6fe39fb _config_change_info_map;	// 80 = 0x50
    shared_ptr_2969c241 _m_custom_property_type_cache;	// 96 = 0x60
    shared_ptr_53c12af5 _io_receiver_lock;	// 112 = 0x70
    shared_ptr_981505df _io_receivers;	// 128 = 0x80
    shared_ptr_cae1ecd9 _io_buffer_list;	// 144 = 0x90
}

- (id).cxx_construct;	// IMP=0x000000000022c21f
- (void).cxx_destruct;	// IMP=0x000000000022c178
@property(nonatomic) shared_ptr_cae1ecd9 io_buffer_list; // @synthesize io_buffer_list=_io_buffer_list;
@property(nonatomic) shared_ptr_981505df io_receivers; // @synthesize io_receivers=_io_receivers;
@property(copy, nonatomic) CDUnknownBlockType process_boost_reply; // @synthesize process_boost_reply=_process_boost_reply;
@property(nonatomic) shared_ptr_53c12af5 io_receiver_lock; // @synthesize io_receiver_lock=_io_receiver_lock;
@property(nonatomic) shared_ptr_2969c241 m_property_type_info; // @synthesize m_property_type_info=_m_custom_property_type_cache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *concurrent_queue; // @synthesize concurrent_queue=_concurrent_queue;
@property(nonatomic) shared_ptr_e6fe39fb config_change_info_map; // @synthesize config_change_info_map=_config_change_info_map;
@property(readonly, nonatomic) shared_ptr_53c12af5 config_change_info_lock; // @synthesize config_change_info_lock=_config_change_info_lock;
@property(nonatomic) struct AudioServerPlugInHostInterface *host_interface; // @synthesize host_interface=_host_interface;
@property(nonatomic) struct AudioServerPlugInDriverInterface **asp_interface; // @synthesize asp_interface=_asp_interface;
@property(retain, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) Core_Audio_Driver_Host_Proxy *driver_host_proxy; // @synthesize driver_host_proxy=_driver_host_proxy;
- (void)set_property_data:(struct Driver_Property_Identity)arg1 qualifier:(id)arg2 data:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000022ba72
- (void)get_property_data:(struct Driver_Property_Identity)arg1 qualifier:(id)arg2 data_size:(unsigned int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000022afd8
- (void)get_property_data_size:(struct Driver_Property_Identity)arg1 qualifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000022acdc
- (void)is_property_settable:(struct Driver_Property_Identity)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000022ab0e
- (void)release_unpacked_cf_objects:(unsigned int)arg1 qualifier_data:(id)arg2 data_type:(unsigned int)arg3 data:(id)arg4;	// IMP=0x000000000022a9b0
- (void)has_property:(struct Driver_Property_Identity)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000022a7f0
- (tuple_d0bf0a06)unpack_data_from_value:(struct Driver_Property_Identity)arg1 value:(id)arg2;	// IMP=0x0000000000229fe4
- (tuple_d0bf0a06)unpack_data_from_qualifier:(struct Driver_Property_Identity)arg1 qualifier:(id)arg2;	// IMP=0x0000000000229a52
- (void)retain_reply_for_process_boost:(CDUnknownBlockType)arg1;	// IMP=0x0000000000229a40
- (void)stop_synchronous_messenger:(unsigned int)arg1 client_id:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000229733
- (void)start_synchronous_messenger:(unsigned int)arg1 client_id:(unsigned int)arg2 nominal_sample_rate:(double)arg3 io_buffer_frame_size:(unsigned int)arg4 work_group_port:(id)arg5 io_messenger:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x00000000002294ff
- (void)stop_io:(unsigned int)arg1 client_id:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000022941e
- (void)start_io:(unsigned int)arg1 client_id:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000229223
- (void)unregister_io_buffer:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000229083
- (void)register_io_buffer:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000228ee3
- (int)handle_unregister_buffer:(struct dict)arg1;	// IMP=0x0000000000228169
- (int)handle_register_buffer:(struct dict)arg1;	// IMP=0x0000000000227ac1
- (void)object_was_destroyed:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002276ae
- (void)destroy_device:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002274dd
- (void)create_device:(id)arg1 client_info:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000227274
- (void)remove_device_client:(unsigned int)arg1 client_info:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000022702e
- (void)add_device_client:(unsigned int)arg1 client_info:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000226de8
- (int)destroy_io_receiver:(unsigned int)arg1;	// IMP=0x0000000000226b6d
- (int)destroy_io_receiver:(unsigned int)arg1 client_id:(unsigned int)arg2;	// IMP=0x0000000000226a8a
- (int)create_and_start_io_receiver:(unsigned int)arg1 client_id:(unsigned int)arg2 nominal_sample_rate:(double)arg3 io_buffer_frame_size:(unsigned int)arg4 work_group_port:(id)arg5 io_messenger:(id)arg6;	// IMP=0x0000000000223f12
- (void)abort_device_configuration_change:(unsigned int)arg1 action:(unsigned long long)arg2 change:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000223df1
- (void)perform_device_configuration_change:(unsigned int)arg1 action:(unsigned long long)arg2 change:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000223cd0
- (void)initialize:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000223a45
- (void)store_change_info:(void *)arg1 for_token:(unsigned long long)arg2;	// IMP=0x000000000022351e
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000022343a
- (void)dealloc;	// IMP=0x00000000002233ab
- (id)init_driver_interface:(struct AudioServerPlugInDriverInterface **)arg1;	// IMP=0x00000000002232a6
- (id)init;	// IMP=0x0000000000222ee4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

