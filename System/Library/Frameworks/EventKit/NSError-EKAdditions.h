//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (EKAdditions)
+ (_Bool)_cal_serializedEntryForKey:(id)arg1 value:(id)arg2 outKey:(id *)arg3 outValue:(id *)arg4;	// IMP=0x0080000000057c2c
+ (id)errorWithDomain:(id)arg1 code:(unsigned long long)arg2 description:(id)arg3 underlyingError:(id)arg4 reason:(id)arg5;	// IMP=0x00800000000837db
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 reason:(id)arg4;	// IMP=0x00800000000837a9
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 reason:(id)arg3;	// IMP=0x0080000000083791
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2;	// IMP=0x0080000000083779
+ (id)errorWithEKErrorCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x00800000000836e7
+ (id)errorWithEKErrorCode:(long long)arg1;	// IMP=0x0080000000083683
+ (id)errorWithCADErrorCode:(int)arg1 description:(id)arg2;	// IMP=0x0080000000083651
+ (id)errorWithCADErrorCode:(int)arg1;	// IMP=0x00800000000835ef
+ (id)errorWithCADResult:(int)arg1;	// IMP=0x0080000000083598
+ (id)_defaultDescriptionForEKErrorCode:(long long)arg1;	// IMP=0x0080000000083068
+ (id)_defaultDescriptionForCADErrorCode:(int)arg1;	// IMP=0x0080000000082fb8
- (id)cal_serializableError;	// IMP=0x00100000000582bc
- (id)cal_serializableUserInfo;	// IMP=0x0010000000057eab
- (struct __SecTrust *)cal_trustInfoCopy;	// IMP=0x0010000000057b17
- (_Bool)cal_isCertificateError;	// IMP=0x00100000000579f4
@end
