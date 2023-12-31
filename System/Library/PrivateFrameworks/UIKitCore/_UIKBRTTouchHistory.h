//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIKBRTTouchHistory : NSObject
{
    NSMutableArray *_history;	// 8 = 0x8
    struct CGPoint _historyOffset;	// 16 = 0x10
    double _lastDecayTime;	// 32 = 0x20
    _Bool _isLeftHand;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000e07192
@property(nonatomic) _Bool isLeftHand; // @synthesize isLeftHand=_isLeftHand;
- (void)_updateOffset;	// IMP=0x0000000000e06ead
- (void)reset;	// IMP=0x0000000000e06e7e
- (void)_decayHistoryToSize:(unsigned long long)arg1;	// IMP=0x0000000000e06ad0
- (void)_sortHistory;	// IMP=0x0000000000e0686c
- (void)decayHistory;	// IMP=0x0000000000e06855
- (void)clearHistory;	// IMP=0x0000000000e067d5
- (void)adjustHistoryOffset:(struct CGPoint)arg1;	// IMP=0x0000000000e066c0
- (void)removeInfo:(id)arg1;	// IMP=0x0000000000e06657
- (void)addInfo:(id)arg1;	// IMP=0x0000000000e06625
- (_Bool)containsInfo:(id)arg1;	// IMP=0x0000000000e0660f
@property(readonly, nonatomic) struct CGPoint historyOffset;
@property(readonly, nonatomic) double lastTime;
@property(readonly, nonatomic) _Bool hasHistory;
- (void)dealloc;	// IMP=0x0000000000e06438
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e063ee
- (id)initWithIsLeftHand:(_Bool)arg1;	// IMP=0x0000000000e063a9

@end

