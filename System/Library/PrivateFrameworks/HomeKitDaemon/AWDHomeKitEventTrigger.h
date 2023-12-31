//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class AWDHomeKitPredicate, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AWDHomeKitEventTrigger : PBCodable
{
    int _activationState;	// 8 = 0x8
    int _activationType;	// 12 = 0xc
    NSMutableArray *_events;	// 16 = 0x10
    AWDHomeKitPredicate *_predicate;	// 24 = 0x18
    _Bool _containsRecurrences;	// 32 = 0x20
    _Bool _executeOnce;	// 33 = 0x21
    struct {
        unsigned int activationState:1;
        unsigned int activationType:1;
        unsigned int containsRecurrences:1;
        unsigned int executeOnce:1;
    } _has;	// 36 = 0x24
}

+ (Class)eventsType;	// IMP=0x0010000000983f50
- (void).cxx_destruct;	// IMP=0x0000000000983abe
@property(retain, nonatomic) AWDHomeKitPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) _Bool containsRecurrences; // @synthesize containsRecurrences=_containsRecurrences;
@property(nonatomic) _Bool executeOnce; // @synthesize executeOnce=_executeOnce;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000098382d
- (unsigned long long)hash;	// IMP=0x0000000000983742
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009835c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000098333c
- (void)copyTo:(id)arg1;	// IMP=0x00000000009831e2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000982ff9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000982fec
- (id)dictionaryRepresentation;	// IMP=0x0000000000982bc1
- (id)description;	// IMP=0x0000000000982b12
- (int)StringAsActivationType:(id)arg1;	// IMP=0x0000000000982a5e
- (id)activationTypeAsString:(int)arg1;	// IMP=0x0000000000982a16
@property(nonatomic) _Bool hasActivationType;
@property(nonatomic) int activationType; // @synthesize activationType=_activationType;
- (int)StringAsActivationState:(id)arg1;	// IMP=0x00000000009828dc
- (id)activationStateAsString:(int)arg1;	// IMP=0x0000000000982894
@property(nonatomic) _Bool hasActivationState;
@property(nonatomic) int activationState; // @synthesize activationState=_activationState;
@property(readonly, nonatomic) _Bool hasPredicate;
@property(nonatomic) _Bool hasContainsRecurrences;
@property(nonatomic) _Bool hasExecuteOnce;
- (id)eventsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000982768
- (unsigned long long)eventsCount;	// IMP=0x000000000098274b
- (void)addEvents:(id)arg1;	// IMP=0x00000000009826e1
- (void)clearEvents;	// IMP=0x00000000009826c4

@end

