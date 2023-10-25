//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface APSHashingAppIDManager : NSObject
{
}

- (void)removeAppIdForEnvironmentName:(id)arg1 topic:(id)arg2 identifier:(id)arg3;	// IMP=0x0020000000021594
- (id)loadOrCreateAppIdForEnvironmentName:(id)arg1 topic:(id)arg2 identifier:(id)arg3;	// IMP=0x0010000000021518
- (id)loadAppIdForEnvironmentName:(id)arg1 topic:(id)arg2 identifier:(id)arg3;	// IMP=0x001000000002149c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
