//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RBSProcessIdentity;

@interface PKDProcessIdentityProxy : NSObject
{
    RBSProcessIdentity *__rbsObject;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000ca80
@property(readonly) RBSProcessIdentity *_rbsObject; // @synthesize _rbsObject=__rbsObject;
- (id)initWithRBSProcessIdentity:(id)arg1;	// IMP=0x000000000000c9f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

