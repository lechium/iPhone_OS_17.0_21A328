//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTTelephonyNetworkInfo, NSString;

__attribute__((visibility("hidden")))
@interface CTTelephonyNetworkInfoDelegatePlus : NSObject
{
    CTTelephonyNetworkInfo *_delegate;	// 8 = 0x8
    struct queue _clientQueue;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000004e64c
- (void).cxx_destruct;	// IMP=0x000000000004e623
@property(nonatomic) struct queue clientQueue; // @synthesize clientQueue=_clientQueue;
@property(nonatomic) __weak CTTelephonyNetworkInfo *delegate; // @synthesize delegate=_delegate;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;	// IMP=0x000000000004e504
- (void)dealloc;	// IMP=0x000000000004e4c8
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000004e450

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

