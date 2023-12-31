//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCProblemReport : NSObject
{
    NSMutableDictionary *_problems;	// 8 = 0x8
    _Bool _needsSyncUp;	// 16 = 0x10
    int _state;	// 20 = 0x14
    NSNumber *_pendingRequestID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000022c177
- (void).cxx_destruct;	// IMP=0x000000000022cb5f
@property(nonatomic) _Bool needsSyncUp; // @synthesize needsSyncUp=_needsSyncUp;
@property(retain, nonatomic) NSNumber *pendingRequestID; // @synthesize pendingRequestID=_pendingRequestID;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool shouldResetAfterFixingState;
- (id)description;	// IMP=0x000000000022c836
- (void)addProblemWithType:(int)arg1 recordName:(id)arg2;	// IMP=0x000000000022c7b7
- (void)_addProblem:(id)arg1;	// IMP=0x000000000022c687
@property(readonly, nonatomic) NSSet *effectedRecordNames;
@property(readonly, nonatomic) NSString *effectiveProblemMessage;
- (int)_effectiveProblemType;	// IMP=0x000000000022c1b6
- (int)_priorityForProblemType:(int)arg1;	// IMP=0x000000000022c199
- (int)_zoneStateForProblemType:(int)arg1;	// IMP=0x000000000022c17f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000022c0d6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000022bef6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022bec7
- (id)initWithProblemReport:(id)arg1;	// IMP=0x000000000022be35
- (id)init;	// IMP=0x000000000022bdd8

@end

