//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_resolver_config : NSObject
{
    struct retained_ptr<NSObject<OS_xpc_object>*> dictionary;	// 8 = 0x8
    unsigned char identifier[16];	// 16 = 0x10
    struct retained_ptr<NSObject<OS_dispatch_source>*> kernel_event_source;	// 32 = 0x20
    struct retained_ptr<NSObject<OS_nw_fd_wrapper>*> kernel_event_wrapper;	// 40 = 0x28
    struct retained_ptr<NSObject<OS_nw_fd_wrapper>*> agent_fd;	// 48 = 0x30
    struct unfair_mutex lock;	// 56 = 0x38
    unsigned int generation;	// 60 = 0x3c
}

- (id).cxx_construct;	// IMP=0x00000000005ed5f0
- (void).cxx_destruct;	// IMP=0x00000000005ed540
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000005ed0b0
- (id)init;	// IMP=0x00000000005ece80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

