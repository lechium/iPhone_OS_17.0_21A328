//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATOperation.h>

@class NSData, NSObject;
@protocol DMTProfileInstallationPrimitives, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DMTInstallProfileOperation : CATOperation
{
    NSObject<OS_dispatch_queue> *_profileInstallationQueue;	// 8 = 0x8
    id <DMTProfileInstallationPrimitives> _primitives;	// 16 = 0x10
    NSData *_profileData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001336f
@property(readonly, copy, nonatomic) NSData *profileData; // @synthesize profileData=_profileData;
@property(readonly, nonatomic) id <DMTProfileInstallationPrimitives> primitives; // @synthesize primitives=_primitives;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *profileInstallationQueue; // @synthesize profileInstallationQueue=_profileInstallationQueue;
- (void)installProfile;	// IMP=0x0000000000013174
- (void)main;	// IMP=0x00000000000130ed
- (void)cancel;	// IMP=0x0000000000012fdd
- (_Bool)isAsynchronous;	// IMP=0x0000000000012fd5
- (id)initWithProfileInstallationPrimitives:(id)arg1 profileData:(id)arg2;	// IMP=0x0000000000012e8c

@end

