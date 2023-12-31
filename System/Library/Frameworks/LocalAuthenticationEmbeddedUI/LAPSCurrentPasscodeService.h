//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol LAPSPasscodePersistence;

__attribute__((visibility("hidden")))
@interface LAPSCurrentPasscodeService : NSObject
{
    id <LAPSPasscodePersistence> _persistence;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000acbc
@property(readonly, nonatomic) id <LAPSPasscodePersistence> persistence; // @synthesize persistence=_persistence;
- (void)changePasscode:(id)arg1 to:(id)arg2 enableRecovery:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000aa8c
- (_Bool)canChangePasscodeWithError:(id *)arg1;	// IMP=0x000000000000aa2e
- (void)verifyPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a88f
- (long long)failedPasscodeAttempts;	// IMP=0x000000000000a816
- (id)passcodeType;	// IMP=0x000000000000a7c6
- (long long)backoffTimeout;	// IMP=0x000000000000a74d
- (id)passcodeCreationDate;	// IMP=0x000000000000a737
- (_Bool)hasPasscode;	// IMP=0x000000000000a6f3
- (id)initWithPersistence:(id)arg1;	// IMP=0x000000000000a688

@end

