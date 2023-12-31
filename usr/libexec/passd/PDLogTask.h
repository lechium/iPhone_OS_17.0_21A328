//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PDLogTask
{
    NSArray *_logs;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000002e48ed
+ (id)taskWithWebService:(id)arg1 warnings:(id)arg2;	// IMP=0x00100000002e4719
+ (id)taskWithWebService:(id)arg1 error:(id)arg2;	// IMP=0x00100000002e451c
- (void).cxx_destruct;	// IMP=0x00200000002e4f67
@property(retain, nonatomic) NSArray *logs; // @synthesize logs=_logs;
- (_Bool)_hasRoomForAdditionalLogs;	// IMP=0x00100000002e4f1d
- (_Bool)_matchesLogTask:(id)arg1;	// IMP=0x00100000002e4e65
- (unsigned long long)numberOfBackoffLevels;	// IMP=0x00100000002e4e55
- (const CDStruct_316206b0 *)backoffLevels;	// IMP=0x00100000002e4e48
- (void)mergeWithNewerTask:(id)arg1;	// IMP=0x00100000002e4dc9
- (long long)actionForActiveTask:(id)arg1;	// IMP=0x00100000002e4daf
- (long long)actionForInactiveTask:(id)arg1;	// IMP=0x00100000002e4d54
- (_Bool)coalescesWithTaskSubclass:(Class)arg1;	// IMP=0x00100000002e4d26
- (id)description;	// IMP=0x00100000002e4c6c
- (void)handleError:(id)arg1;	// IMP=0x00100000002e4c3e
- (void)handleResponse:(id)arg1 data:(id)arg2;	// IMP=0x00100000002e4b1f
- (id)bodyDictionary;	// IMP=0x00100000002e4a7e
- (id)endpointComponents;	// IMP=0x00100000002e4a71
- (id)method;	// IMP=0x00100000002e4a64
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002e49e7
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002e48f5
- (id)initWithWebService:(id)arg1 logs:(id)arg2;	// IMP=0x00100000002e4869

@end

