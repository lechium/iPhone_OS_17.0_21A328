//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAppleIDAuthenticationController;

@interface COSPrimaryAccountAuthenticationHelper : NSObject
{
    AKAppleIDAuthenticationController *_authenticationController;	// 8 = 0x8
}

+ (id)_contextForPrimaryAccountWithController:(id)arg1;	// IMP=0x00400000000f08e2
- (void).cxx_destruct;	// IMP=0x00200000000f0be4
- (void)setAuthenticationController:(id)arg1;	// IMP=0x00100000000f0bd3
- (id)authenticationController;	// IMP=0x00100000000f0bc9
- (void)authenticatePrimaryAccountWithController:(id)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f0b0d
- (void)authenticatePrimaryAccountWithController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f0a78
- (void)_authWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f09f7

@end

