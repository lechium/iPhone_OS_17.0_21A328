//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager, AKDevice, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AKAuthenticationContextSanitizer : NSObject
{
    AKDevice *_device;	// 8 = 0x8
    AKAccountManager *_accountManager;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSMutableDictionary *_transformationAnnotations;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000076f92
- (void)_annotateTransformationOfProperty:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;	// IMP=0x0010000000076efe
- (id)_accountForAppleIDAuthContext:(id)arg1;	// IMP=0x0010000000076de2
- (_Bool)_validateSilentPreferredFederatedAppleIDAuthContext:(id)arg1;	// IMP=0x0010000000076cf6
- (_Bool)_validateFederatedAppleIDAuthContext:(id)arg1;	// IMP=0x0010000000076bea
- (_Bool)_validateNativeAppleIDAuthContext:(id)arg1;	// IMP=0x0010000000076b6a
- (_Bool)_validateAppleIDAuthContext:(id)arg1 forAuthMode:(unsigned long long)arg2;	// IMP=0x0010000000076afe
- (_Bool)_validateAppleIDAuthContext:(id)arg1;	// IMP=0x0010000000076aa4
- (_Bool)_validateAuthContext:(id)arg1;	// IMP=0x001000000007698c
- (_Bool)_sanitizeContext:(id)arg1;	// IMP=0x00100000000767ed
@property(retain, nonatomic) AKDevice *device;
@property(retain, nonatomic) AKAccountManager *accountManager;
- (_Bool)sanitizeContext:(id)arg1;	// IMP=0x00100000000763c6
- (id)init;	// IMP=0x0010000000076313

@end

