//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NWConcrete_nw_protocol_definition;
@protocol OS_nw_array, OS_nw_endpoint, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_protocol_options : NSObject
{
    NWConcrete_nw_protocol_definition *definition;	// 8 = 0x8
    struct nw_protocol *protocol_handle;	// 16 = 0x10
    NSObject<OS_nw_endpoint> *proxy_endpoint;	// 24 = 0x18
    NSObject<OS_nw_array> *proxy_next_hops;	// 32 = 0x20
    NSObject<OS_xpc_object> *legacy_parameters;	// 40 = 0x28
    char log_id_str[84];	// 48 = 0x30
    unsigned short log_id_num;	// 132 = 0x84
    void *handle;	// 136 = 0x88
    _Bool override_stack_endpoint;	// 144 = 0x90
    _Bool prohibit_joining;	// 145 = 0x91
}

- (void).cxx_destruct;	// IMP=0x00000000001b3b10
- (void)dealloc;	// IMP=0x00000000001b3ab0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

