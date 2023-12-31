//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_context, OS_nw_dictionary, OS_nw_path_evaluator;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_interpose : NSObject
{
    struct os_unfair_lock_s lock;	// 8 = 0x8
    unsigned char client_uuid[16];	// 12 = 0xc
    int delegated_pid;	// 28 = 0x1c
    int delegated_upid;	// 32 = 0x20
    NSObject<OS_nw_path_evaluator> *evaluator;	// 40 = 0x28
    NSObject<OS_nw_dictionary> *flows;	// 48 = 0x30
    CDUnknownBlockType flow_event_handler;	// 56 = 0x38
    NSObject<OS_nw_context> *context;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *client_queue;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000006cb340
- (void)dealloc;	// IMP=0x00000000006cb2d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

