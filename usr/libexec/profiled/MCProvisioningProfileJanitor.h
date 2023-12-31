//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MCProvisioningProfileJanitor : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_misValidationQueue;	// 16 = 0x10
}

+ (id)_appSigningIdentityForBundleIdentifier:(id)arg1;	// IMP=0x004000000006298a
+ (id)sharedJanitor;	// IMP=0x00100000000626d4
- (void).cxx_destruct;	// IMP=0x0020000000062b96
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *misValidationQueue; // @synthesize misValidationQueue=_misValidationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (_Bool)_updateTrustedCodeSigningIdentitiesWithManagedAppSigners:(id)arg1 outError:(id *)arg2;	// IMP=0x00100000000627bf
- (id)earliestRequiredManagedAppValidationDate;	// IMP=0x00100000000627b7
- (void)revalidateManagedApps;	// IMP=0x00100000000627a5
- (void)_misValidateUPPProfileUUIDs:(id)arg1 profileType:(id)arg2;	// IMP=0x001000000006279f
- (void)_workQueueUpdateMISUPPTrustWithTrustCodeSigningIdentities:(id)arg1 validateApps:(id)arg2 validateManagedApps:(_Bool)arg3;	// IMP=0x001000000006274b
- (void)updateMISTrust;	// IMP=0x001000000006272f
- (void)updateMISTrustAndValidateApps:(id)arg1 validateManagedApps:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000062729
- (id)init;	// IMP=0x001000000006261b

@end

