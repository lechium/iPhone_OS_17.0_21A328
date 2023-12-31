//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipUploaderFactory : NSObject
{
}

- (id)createFinalizeClipOperationForModelID:(id)arg1 localZone:(id)arg2;	// IMP=0x00000000009c3e6e
- (id)createAddSignificantEventOperationForClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4;	// IMP=0x00000000009c3dc2
- (id)createUploadVideoSegmentOperationForModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5;	// IMP=0x00000000009c3cef
- (id)createCreateClipWithSignificantEventOperationForClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(id)arg6 quality:(long long)arg7 encryptionManager:(id)arg8;	// IMP=0x00000000009c3be8
- (id)createCreateClipOperationForClipModelID:(id)arg1 localZone:(id)arg2 targetFragmentDuration:(double)arg3 clipStartDate:(id)arg4 quality:(long long)arg5 encryptionManager:(id)arg6;	// IMP=0x00000000009c3b2d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

