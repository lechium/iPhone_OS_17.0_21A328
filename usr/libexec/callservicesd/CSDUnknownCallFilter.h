//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSDUnknownCallFilter : NSObject
{
}

- (_Bool)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x002000000001d526
- (_Bool)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x001000000001d51e
- (_Bool)shouldFilterIncomingCall:(id)arg1 from:(id)arg2;	// IMP=0x001000000001d04f
- (_Bool)isUnknownCaller:(id)arg1;	// IMP=0x001000000001d047
- (_Bool)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x001000000001d03f
- (long long)filterStatusForAddresses:(id)arg1 withBundleIdentifier:(id)arg2;	// IMP=0x001000000001d037
- (_Bool)containsRestrictedHandle:(id)arg1;	// IMP=0x001000000001d02f
- (_Bool)containsRecentsRestrictedHandle:(id)arg1;	// IMP=0x001000000001d027
- (_Bool)containsOutgoingRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x001000000001d01f
- (long long)maxJunkLevel;	// IMP=0x001000000001cf45
- (_Bool)isSilenceUnknownFaceTimeCallersEnabled;	// IMP=0x001000000001ce6a
- (_Bool)isSilenceUnknownTelephonyCallersEnabled;	// IMP=0x001000000001cd8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

