//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtCC5passd26PendingProvisioningManager33PendingProvisioningMessageManager : NSObject
{
    MISSING_TYPE *dataSource;	// 8 = 0x8
    MISSING_TYPE *carKeyRequirementsChecker;	// 24 = 0x18
    MISSING_TYPE *applicationMessageManager;	// 32 = 0x20
    MISSING_TYPE *applicationMessageSink;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00400000004ea820
- (id)init;	// IMP=0x00100000004ea7c0
- (void)applicationMessageSink:(id)arg1 tappedMessageWithRegistration:(id)arg2;	// IMP=0x00100000004ea2f0
- (void)applicationMessageSink:(id)arg1 removedMessageWithRegistration:(id)arg2;	// IMP=0x00100000004ea280
- (id)applicationMessageSink:(id)arg1 createContentForMessageWithRegistration:(id)arg2;	// IMP=0x00100000004ea200
- (void)connectApplicationMessageSink:(id)arg1;	// IMP=0x00100000004ea1b0

@end
