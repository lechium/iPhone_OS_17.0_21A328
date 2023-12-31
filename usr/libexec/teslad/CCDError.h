//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CCDError : NSObject
{
}

+ (id)cleanNSError:(id)arg1;	// IMP=0x004000000000770d
+ (id)_cloudConfigErrorResponses;	// IMP=0x001000000000741f
+ (id)cloudConfigErrorInResponse:(id)arg1;	// IMP=0x001000000000739f
+ (id)_errorStringForResponse:(id)arg1;	// IMP=0x001000000000726d
+ (id)nonceExpiredError;	// IMP=0x00100000000071b0
+ (id)deviceNotEnrolledError;	// IMP=0x00100000000070f3
+ (id)deviceAlreadyEnrolledError;	// IMP=0x0010000000007036
+ (id)deviceNotFoundError;	// IMP=0x0010000000006f79
+ (id)profileNotFoundError;	// IMP=0x0010000000006ebc
+ (id)profileNotActiveError;	// IMP=0x0010000000006dff
+ (id);	// IMP=0x0010000000006d42
+ (id)invalidSignatureError;	// IMP=0x0010000000006c85
+ (id)serverTrustError;	// IMP=0x0010000000006bc8
+ (id)serviceBusyError;	// IMP=0x0010000000006b0b
+ (id)teslaServiceDownError;	// IMP=0x0010000000006a4e
+ (id)invalidDeviceError;	// IMP=0x0010000000006991
+ (id)maxRetriesExceededErrorWithUnderlyingError:(id)arg1;	// IMP=0x00100000000067b2
+ (id)badFormatError;	// IMP=0x00100000000066f5
+ (id)internalErrorWithCode:(long long)arg1;	// IMP=0x001000000000662e
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 errorType:(id)arg4;	// IMP=0x001000000000648a

@end

