//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAppleIDPasskeyCredential, MISSING_TYPE;

@interface AKAppleIDPasskeyRegistrationProvider : NSObject
{
    MISSING_TYPE *serviceController;	// 8 = 0x8
    MISSING_TYPE *accountManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00400000000db780
- (id)init;	// IMP=0x00100000000db720
- (void)performRegistrationRequestWith:(AKAppleIDPasskeyCredential *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;	// IMP=0x00100000000db440
- (id)initWithServiceController:(id)arg1 accountManager:(id)arg2;	// IMP=0x00100000000da700

@end

