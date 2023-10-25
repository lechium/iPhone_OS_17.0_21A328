//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (Authentication)
@property(readonly, nonatomic) _Bool isAuthKitUnableToPromptDueToNetworkError;
@property(readonly, nonatomic) _Bool isAuthKitUnableToPromptError;
@property(readonly, nonatomic) _Bool isAuthenticationError;
- (_Bool)isRecordNotViableError;	// IMP=0x00300000000154cd
- (id)errorByExtendingUserInfoWithDictionary:(id)arg1;	// IMP=0x0030000000015376
- (_Bool)isRecoveryPETSoftLimitError;	// IMP=0x00300000000152fe
- (_Bool)isRecoveryPETHardLimitError;	// IMP=0x0030000000015286
- (_Bool)isCoolDownError;	// IMP=0x00300000000151bc
- (_Bool)isLoginSoftLimit;	// IMP=0x00300000000151aa
- (_Bool)isLoginHardLimit;	// IMP=0x0030000000015198
- (_Bool)isICSCInvalidError;	// IMP=0x0030000000015120
- (_Bool)isICSCRecoveryHardLimitError;	// IMP=0x0030000000015056
@end
